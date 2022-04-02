using UnityEngine;

public class EnemyMoveHorizontal : MonoBehaviour
{
    [SerializeField] private float moveSpeed = 10f;
    [SerializeField] private Transform frontSensor;
    [SerializeField] private LayerMask groundLayer;
    [SerializeField] private float downSensorDistance = 0.25f;
    [SerializeField] private float sideSensorDistance = 0.15f;
    
    private Rigidbody _rb;
    private Vector3 _direction;

    private void Awake()
    {
        _rb = GetComponent<Rigidbody>();
    }

    private void Start()
    {
        _direction.x = 1f;
    }

    private void Update()
    {
        ScanSensorDown(frontSensor);

        if (_direction.x > 0f)
            transform.eulerAngles = new Vector3(0, 90, 0);
        else if (_direction.x < 0f)
            transform.eulerAngles = new Vector3(0, -90, 0);
    }

    private void FixedUpdate()
    {
        if(GameManager.Instance.gameActive && !GameManager.Instance.paused)
            _rb.MovePosition(_rb.position + _direction * moveSpeed * Time.fixedDeltaTime);
    }

    private void ScanSensorDown(Transform sensor)
    {
        Debug.DrawRay(sensor.position, Vector3.down * downSensorDistance, Color.red);

        var result = Physics.Raycast(sensor.position, Vector3.down, downSensorDistance, groundLayer);
        if(result == false)
            TurnAround();
        else
            ScanSensorSide(sensor);
    }
    
    private void ScanSensorSide(Transform sensor)
    {
        Debug.DrawRay(sensor.position, new Vector3(_direction.x, 0, 0) * sideSensorDistance, Color.red);

        var result = Physics.Raycast(sensor.position, new Vector3(_direction.x, 0, 0), sideSensorDistance, groundLayer);
        if(result)
            TurnAround();
    }
    
    private void TurnAround()
    {
        _direction.x *= -1f;
    }
    
}