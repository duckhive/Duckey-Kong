using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DuckPlayer : MonoBehaviour
{
    public DuckController Character;
    
    private const string HorizontalInput = "Horizontal";
    private const string VerticalInput = "Vertical";
    private const string JumpInput = "Jump";

    private void Awake()
    {
        DontDestroyOnLoad(gameObject);
    }
    
    private void Update()
    {
        HandleCharacterInput();
    }

    private void HandleCharacterInput()
    {
        DuckPlayerInputs characterInputs = new DuckPlayerInputs();

        // Build the CharacterInputs struct
        characterInputs.MoveAxisUp = SimpleInput.GetAxisRaw(VerticalInput);
        characterInputs.MoveAxisRight = SimpleInput.GetAxisRaw(HorizontalInput);
        characterInputs.JumpDown = SimpleInput.GetButtonDown(JumpInput);

        // Apply inputs to character
        Character.SetInputs(ref characterInputs);
    }
}
