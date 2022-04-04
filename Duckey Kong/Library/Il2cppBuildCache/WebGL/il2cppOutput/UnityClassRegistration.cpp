extern "C" void RegisterStaticallyLinkedModulesGranular()
{
	void RegisterModule_SharedInternals();
	RegisterModule_SharedInternals();

	void RegisterModule_Core();
	RegisterModule_Core();

	void RegisterModule_AndroidJNI();
	RegisterModule_AndroidJNI();

	void RegisterModule_Animation();
	RegisterModule_Animation();

	void RegisterModule_Audio();
	RegisterModule_Audio();

	void RegisterModule_Director();
	RegisterModule_Director();

	void RegisterModule_Grid();
	RegisterModule_Grid();

	void RegisterModule_ImageConversion();
	RegisterModule_ImageConversion();

	void RegisterModule_IMGUI();
	RegisterModule_IMGUI();

	void RegisterModule_Input();
	RegisterModule_Input();

	void RegisterModule_InputLegacy();
	RegisterModule_InputLegacy();

	void RegisterModule_JSONSerialize();
	RegisterModule_JSONSerialize();

	void RegisterModule_ParticleSystem();
	RegisterModule_ParticleSystem();

	void RegisterModule_Physics();
	RegisterModule_Physics();

	void RegisterModule_Physics2D();
	RegisterModule_Physics2D();

	void RegisterModule_RuntimeInitializeOnLoadManagerInitializer();
	RegisterModule_RuntimeInitializeOnLoadManagerInitializer();

	void RegisterModule_ScreenCapture();
	RegisterModule_ScreenCapture();

	void RegisterModule_Subsystems();
	RegisterModule_Subsystems();

	void RegisterModule_Terrain();
	RegisterModule_Terrain();

	void RegisterModule_TextRendering();
	RegisterModule_TextRendering();

	void RegisterModule_TextCore();
	RegisterModule_TextCore();

	void RegisterModule_Tilemap();
	RegisterModule_Tilemap();

	void RegisterModule_TLS();
	RegisterModule_TLS();

	void RegisterModule_UI();
	RegisterModule_UI();

	void RegisterModule_UnityConnect();
	RegisterModule_UnityConnect();

	void RegisterModule_UnityWebRequest();
	RegisterModule_UnityWebRequest();

	void RegisterModule_UnityAnalytics();
	RegisterModule_UnityAnalytics();

	void RegisterModule_Video();
	RegisterModule_Video();

	void RegisterModule_VR();
	RegisterModule_VR();

	void RegisterModule_WebGL();
	RegisterModule_WebGL();

	void RegisterModule_XR();
	RegisterModule_XR();

}

template <typename T> void RegisterUnityClass(const char*);
template <typename T> void RegisterStrippedType(int, const char*, const char*);

void InvokeRegisterStaticallyLinkedModuleClasses()
{
	// Do nothing (we're in stripping mode)
}

class EditorExtension; template <> void RegisterUnityClass<EditorExtension>(const char*);
namespace Unity { class Component; } template <> void RegisterUnityClass<Unity::Component>(const char*);
class Behaviour; template <> void RegisterUnityClass<Behaviour>(const char*);
class Animation; template <> void RegisterUnityClass<Animation>(const char*);
class Animator; template <> void RegisterUnityClass<Animator>(const char*);
namespace Unity { class ArticulationBody; } 
class AudioBehaviour; template <> void RegisterUnityClass<AudioBehaviour>(const char*);
class AudioListener; template <> void RegisterUnityClass<AudioListener>(const char*);
class AudioSource; template <> void RegisterUnityClass<AudioSource>(const char*);
class AudioFilter; template <> void RegisterUnityClass<AudioFilter>(const char*);
class AudioChorusFilter; 
class AudioDistortionFilter; template <> void RegisterUnityClass<AudioDistortionFilter>(const char*);
class AudioEchoFilter; template <> void RegisterUnityClass<AudioEchoFilter>(const char*);
class AudioHighPassFilter; template <> void RegisterUnityClass<AudioHighPassFilter>(const char*);
class AudioLowPassFilter; template <> void RegisterUnityClass<AudioLowPassFilter>(const char*);
class AudioReverbFilter; template <> void RegisterUnityClass<AudioReverbFilter>(const char*);
class AudioReverbZone; 
class Camera; template <> void RegisterUnityClass<Camera>(const char*);
namespace UI { class Canvas; } template <> void RegisterUnityClass<UI::Canvas>(const char*);
namespace UI { class CanvasGroup; } template <> void RegisterUnityClass<UI::CanvasGroup>(const char*);
namespace Unity { class Cloth; } 
class Collider2D; template <> void RegisterUnityClass<Collider2D>(const char*);
class BoxCollider2D; template <> void RegisterUnityClass<BoxCollider2D>(const char*);
class CapsuleCollider2D; template <> void RegisterUnityClass<CapsuleCollider2D>(const char*);
class CircleCollider2D; template <> void RegisterUnityClass<CircleCollider2D>(const char*);
class CompositeCollider2D; template <> void RegisterUnityClass<CompositeCollider2D>(const char*);
class EdgeCollider2D; 
class PolygonCollider2D; template <> void RegisterUnityClass<PolygonCollider2D>(const char*);
class TilemapCollider2D; 
class ConstantForce; 
class Effector2D; 
class AreaEffector2D; 
class BuoyancyEffector2D; 
class PlatformEffector2D; 
class PointEffector2D; 
class SurfaceEffector2D; 
class FlareLayer; 
class GridLayout; template <> void RegisterUnityClass<GridLayout>(const char*);
class Grid; template <> void RegisterUnityClass<Grid>(const char*);
class Tilemap; template <> void RegisterUnityClass<Tilemap>(const char*);
class Halo; 
class HaloLayer; 
class IConstraint; 
class AimConstraint; 
class LookAtConstraint; 
class ParentConstraint; 
class PositionConstraint; 
class RotationConstraint; 
class ScaleConstraint; 
class Joint2D; 
class AnchoredJoint2D; 
class DistanceJoint2D; 
class FixedJoint2D; 
class FrictionJoint2D; 
class HingeJoint2D; 
class SliderJoint2D; 
class SpringJoint2D; 
class WheelJoint2D; 
class RelativeJoint2D; 
class TargetJoint2D; 
class LensFlare; 
class Light; template <> void RegisterUnityClass<Light>(const char*);
class LightProbeGroup; 
class LightProbeProxyVolume; 
class MonoBehaviour; template <> void RegisterUnityClass<MonoBehaviour>(const char*);
class NavMeshAgent; 
class NavMeshObstacle; 
class OffMeshLink; 
class ParticleSystemForceField; 
class PhysicsUpdateBehaviour2D; 
class ConstantForce2D; 
class PlayableDirector; template <> void RegisterUnityClass<PlayableDirector>(const char*);
class Projector; 
class ReflectionProbe; template <> void RegisterUnityClass<ReflectionProbe>(const char*);
class Skybox; template <> void RegisterUnityClass<Skybox>(const char*);
class SortingGroup; 
class StreamingController; 
class Terrain; template <> void RegisterUnityClass<Terrain>(const char*);
class VideoPlayer; template <> void RegisterUnityClass<VideoPlayer>(const char*);
class VisualEffect; 
class WindZone; 
namespace UI { class CanvasRenderer; } template <> void RegisterUnityClass<UI::CanvasRenderer>(const char*);
class Collider; template <> void RegisterUnityClass<Collider>(const char*);
class BoxCollider; template <> void RegisterUnityClass<BoxCollider>(const char*);
class CapsuleCollider; template <> void RegisterUnityClass<CapsuleCollider>(const char*);
class CharacterController; 
class MeshCollider; template <> void RegisterUnityClass<MeshCollider>(const char*);
class SphereCollider; template <> void RegisterUnityClass<SphereCollider>(const char*);
class TerrainCollider; 
class WheelCollider; 
namespace Unity { class Joint; } 
namespace Unity { class CharacterJoint; } 
namespace Unity { class ConfigurableJoint; } 
namespace Unity { class FixedJoint; } 
namespace Unity { class HingeJoint; } 
namespace Unity { class SpringJoint; } 
class LODGroup; 
class MeshFilter; template <> void RegisterUnityClass<MeshFilter>(const char*);
class OcclusionArea; 
class OcclusionPortal; 
class ParticleSystem; template <> void RegisterUnityClass<ParticleSystem>(const char*);
class Renderer; template <> void RegisterUnityClass<Renderer>(const char*);
class BillboardRenderer; 
class LineRenderer; template <> void RegisterUnityClass<LineRenderer>(const char*);
class MeshRenderer; template <> void RegisterUnityClass<MeshRenderer>(const char*);
class ParticleSystemRenderer; template <> void RegisterUnityClass<ParticleSystemRenderer>(const char*);
class SkinnedMeshRenderer; template <> void RegisterUnityClass<SkinnedMeshRenderer>(const char*);
class SpriteMask; 
class SpriteRenderer; template <> void RegisterUnityClass<SpriteRenderer>(const char*);
class SpriteShapeRenderer; 
class TilemapRenderer; template <> void RegisterUnityClass<TilemapRenderer>(const char*);
class TrailRenderer; template <> void RegisterUnityClass<TrailRenderer>(const char*);
class VFXRenderer; 
class Rigidbody; template <> void RegisterUnityClass<Rigidbody>(const char*);
class Rigidbody2D; template <> void RegisterUnityClass<Rigidbody2D>(const char*);
namespace TextRenderingPrivate { class TextMesh; } template <> void RegisterUnityClass<TextRenderingPrivate::TextMesh>(const char*);
class Transform; template <> void RegisterUnityClass<Transform>(const char*);
namespace UI { class RectTransform; } template <> void RegisterUnityClass<UI::RectTransform>(const char*);
class Tree; 
class GameObject; template <> void RegisterUnityClass<GameObject>(const char*);
class NamedObject; template <> void RegisterUnityClass<NamedObject>(const char*);
class AssetBundle; 
class AssetBundleManifest; 
class AudioMixer; template <> void RegisterUnityClass<AudioMixer>(const char*);
class AudioMixerController; 
class AudioMixerGroup; template <> void RegisterUnityClass<AudioMixerGroup>(const char*);
class AudioMixerGroupController; 
class AudioMixerSnapshot; template <> void RegisterUnityClass<AudioMixerSnapshot>(const char*);
class AudioMixerSnapshotController; 
class Avatar; template <> void RegisterUnityClass<Avatar>(const char*);
class AvatarMask; template <> void RegisterUnityClass<AvatarMask>(const char*);
class BillboardAsset; 
class ComputeShader; template <> void RegisterUnityClass<ComputeShader>(const char*);
class Flare; 
namespace TextRendering { class Font; } template <> void RegisterUnityClass<TextRendering::Font>(const char*);
class LightProbes; template <> void RegisterUnityClass<LightProbes>(const char*);
class LightingSettings; template <> void RegisterUnityClass<LightingSettings>(const char*);
class LocalizationAsset; 
class Material; template <> void RegisterUnityClass<Material>(const char*);
class ProceduralMaterial; 
class Mesh; template <> void RegisterUnityClass<Mesh>(const char*);
class Motion; template <> void RegisterUnityClass<Motion>(const char*);
class AnimationClip; template <> void RegisterUnityClass<AnimationClip>(const char*);
class NavMeshData; 
class OcclusionCullingData; 
class PhysicMaterial; template <> void RegisterUnityClass<PhysicMaterial>(const char*);
class PhysicsMaterial2D; template <> void RegisterUnityClass<PhysicsMaterial2D>(const char*);
class PreloadData; template <> void RegisterUnityClass<PreloadData>(const char*);
class RayTracingShader; 
class RuntimeAnimatorController; template <> void RegisterUnityClass<RuntimeAnimatorController>(const char*);
class AnimatorController; template <> void RegisterUnityClass<AnimatorController>(const char*);
class AnimatorOverrideController; template <> void RegisterUnityClass<AnimatorOverrideController>(const char*);
class SampleClip; template <> void RegisterUnityClass<SampleClip>(const char*);
class AudioClip; template <> void RegisterUnityClass<AudioClip>(const char*);
class Shader; template <> void RegisterUnityClass<Shader>(const char*);
class ShaderVariantCollection; 
class SpeedTreeWindAsset; 
class Sprite; template <> void RegisterUnityClass<Sprite>(const char*);
class SpriteAtlas; template <> void RegisterUnityClass<SpriteAtlas>(const char*);
class SubstanceArchive; 
class TerrainData; template <> void RegisterUnityClass<TerrainData>(const char*);
class TerrainLayer; 
class TextAsset; template <> void RegisterUnityClass<TextAsset>(const char*);
class MonoScript; template <> void RegisterUnityClass<MonoScript>(const char*);
class Texture; template <> void RegisterUnityClass<Texture>(const char*);
class BaseVideoTexture; 
class WebCamTexture; 
class CubemapArray; template <> void RegisterUnityClass<CubemapArray>(const char*);
class LowerResBlitTexture; template <> void RegisterUnityClass<LowerResBlitTexture>(const char*);
class ProceduralTexture; 
class RenderTexture; template <> void RegisterUnityClass<RenderTexture>(const char*);
class CustomRenderTexture; 
class SparseTexture; 
class Texture2D; template <> void RegisterUnityClass<Texture2D>(const char*);
class Cubemap; template <> void RegisterUnityClass<Cubemap>(const char*);
class Texture2DArray; template <> void RegisterUnityClass<Texture2DArray>(const char*);
class Texture3D; template <> void RegisterUnityClass<Texture3D>(const char*);
class VideoClip; 
class VisualEffectObject; 
class VisualEffectAsset; 
class VisualEffectSubgraph; 
class GameManager; template <> void RegisterUnityClass<GameManager>(const char*);
class GlobalGameManager; template <> void RegisterUnityClass<GlobalGameManager>(const char*);
class AudioManager; template <> void RegisterUnityClass<AudioManager>(const char*);
class BuildSettings; template <> void RegisterUnityClass<BuildSettings>(const char*);
class DelayedCallManager; template <> void RegisterUnityClass<DelayedCallManager>(const char*);
class GraphicsSettings; template <> void RegisterUnityClass<GraphicsSettings>(const char*);
class InputManager; template <> void RegisterUnityClass<InputManager>(const char*);
class MonoManager; template <> void RegisterUnityClass<MonoManager>(const char*);
class NavMeshProjectSettings; 
class Physics2DSettings; template <> void RegisterUnityClass<Physics2DSettings>(const char*);
class PhysicsManager; template <> void RegisterUnityClass<PhysicsManager>(const char*);
class PlayerSettings; template <> void RegisterUnityClass<PlayerSettings>(const char*);
class QualitySettings; template <> void RegisterUnityClass<QualitySettings>(const char*);
class ResourceManager; template <> void RegisterUnityClass<ResourceManager>(const char*);
class RuntimeInitializeOnLoadManager; template <> void RegisterUnityClass<RuntimeInitializeOnLoadManager>(const char*);
class ScriptMapper; template <> void RegisterUnityClass<ScriptMapper>(const char*);
class StreamingManager; 
class TagManager; template <> void RegisterUnityClass<TagManager>(const char*);
class TimeManager; template <> void RegisterUnityClass<TimeManager>(const char*);
class UnityConnectSettings; template <> void RegisterUnityClass<UnityConnectSettings>(const char*);
class VFXManager; 
class LevelGameManager; template <> void RegisterUnityClass<LevelGameManager>(const char*);
class LightmapSettings; template <> void RegisterUnityClass<LightmapSettings>(const char*);
class NavMeshSettings; 
class OcclusionCullingSettings; 
class RenderSettings; template <> void RegisterUnityClass<RenderSettings>(const char*);

void RegisterAllClasses()
{
void RegisterBuiltinTypes();
RegisterBuiltinTypes();
	//Total: 113 non stripped classes
	//0. Animation
	RegisterUnityClass<Animation>("Animation");
	//1. AnimationClip
	RegisterUnityClass<AnimationClip>("Animation");
	//2. Animator
	RegisterUnityClass<Animator>("Animation");
	//3. AnimatorController
	RegisterUnityClass<AnimatorController>("Animation");
	//4. AnimatorOverrideController
	RegisterUnityClass<AnimatorOverrideController>("Animation");
	//5. Avatar
	RegisterUnityClass<Avatar>("Animation");
	//6. AvatarMask
	RegisterUnityClass<AvatarMask>("Animation");
	//7. Motion
	RegisterUnityClass<Motion>("Animation");
	//8. RuntimeAnimatorController
	RegisterUnityClass<RuntimeAnimatorController>("Animation");
	//9. AudioBehaviour
	RegisterUnityClass<AudioBehaviour>("Audio");
	//10. AudioClip
	RegisterUnityClass<AudioClip>("Audio");
	//11. AudioDistortionFilter
	RegisterUnityClass<AudioDistortionFilter>("Audio");
	//12. AudioEchoFilter
	RegisterUnityClass<AudioEchoFilter>("Audio");
	//13. AudioFilter
	RegisterUnityClass<AudioFilter>("Audio");
	//14. AudioHighPassFilter
	RegisterUnityClass<AudioHighPassFilter>("Audio");
	//15. AudioListener
	RegisterUnityClass<AudioListener>("Audio");
	//16. AudioLowPassFilter
	RegisterUnityClass<AudioLowPassFilter>("Audio");
	//17. AudioManager
	RegisterUnityClass<AudioManager>("Audio");
	//18. AudioMixer
	RegisterUnityClass<AudioMixer>("Audio");
	//19. AudioMixerGroup
	RegisterUnityClass<AudioMixerGroup>("Audio");
	//20. AudioMixerSnapshot
	RegisterUnityClass<AudioMixerSnapshot>("Audio");
	//21. AudioReverbFilter
	RegisterUnityClass<AudioReverbFilter>("Audio");
	//22. AudioSource
	RegisterUnityClass<AudioSource>("Audio");
	//23. SampleClip
	RegisterUnityClass<SampleClip>("Audio");
	//24. Behaviour
	RegisterUnityClass<Behaviour>("Core");
	//25. BuildSettings
	RegisterUnityClass<BuildSettings>("Core");
	//26. Camera
	RegisterUnityClass<Camera>("Core");
	//27. Unity::Component
	RegisterUnityClass<Unity::Component>("Core");
	//28. ComputeShader
	RegisterUnityClass<ComputeShader>("Core");
	//29. Cubemap
	RegisterUnityClass<Cubemap>("Core");
	//30. CubemapArray
	RegisterUnityClass<CubemapArray>("Core");
	//31. DelayedCallManager
	RegisterUnityClass<DelayedCallManager>("Core");
	//32. EditorExtension
	RegisterUnityClass<EditorExtension>("Core");
	//33. GameManager
	RegisterUnityClass<GameManager>("Core");
	//34. GameObject
	RegisterUnityClass<GameObject>("Core");
	//35. GlobalGameManager
	RegisterUnityClass<GlobalGameManager>("Core");
	//36. GraphicsSettings
	RegisterUnityClass<GraphicsSettings>("Core");
	//37. InputManager
	RegisterUnityClass<InputManager>("Core");
	//38. LevelGameManager
	RegisterUnityClass<LevelGameManager>("Core");
	//39. Light
	RegisterUnityClass<Light>("Core");
	//40. LightingSettings
	RegisterUnityClass<LightingSettings>("Core");
	//41. LightmapSettings
	RegisterUnityClass<LightmapSettings>("Core");
	//42. LightProbes
	RegisterUnityClass<LightProbes>("Core");
	//43. LineRenderer
	RegisterUnityClass<LineRenderer>("Core");
	//44. LowerResBlitTexture
	RegisterUnityClass<LowerResBlitTexture>("Core");
	//45. Material
	RegisterUnityClass<Material>("Core");
	//46. Mesh
	RegisterUnityClass<Mesh>("Core");
	//47. MeshFilter
	RegisterUnityClass<MeshFilter>("Core");
	//48. MeshRenderer
	RegisterUnityClass<MeshRenderer>("Core");
	//49. MonoBehaviour
	RegisterUnityClass<MonoBehaviour>("Core");
	//50. MonoManager
	RegisterUnityClass<MonoManager>("Core");
	//51. MonoScript
	RegisterUnityClass<MonoScript>("Core");
	//52. NamedObject
	RegisterUnityClass<NamedObject>("Core");
	//53. Object
	//Skipping Object
	//54. PlayerSettings
	RegisterUnityClass<PlayerSettings>("Core");
	//55. PreloadData
	RegisterUnityClass<PreloadData>("Core");
	//56. QualitySettings
	RegisterUnityClass<QualitySettings>("Core");
	//57. UI::RectTransform
	RegisterUnityClass<UI::RectTransform>("Core");
	//58. ReflectionProbe
	RegisterUnityClass<ReflectionProbe>("Core");
	//59. Renderer
	RegisterUnityClass<Renderer>("Core");
	//60. RenderSettings
	RegisterUnityClass<RenderSettings>("Core");
	//61. RenderTexture
	RegisterUnityClass<RenderTexture>("Core");
	//62. ResourceManager
	RegisterUnityClass<ResourceManager>("Core");
	//63. RuntimeInitializeOnLoadManager
	RegisterUnityClass<RuntimeInitializeOnLoadManager>("Core");
	//64. ScriptMapper
	RegisterUnityClass<ScriptMapper>("Core");
	//65. Shader
	RegisterUnityClass<Shader>("Core");
	//66. SkinnedMeshRenderer
	RegisterUnityClass<SkinnedMeshRenderer>("Core");
	//67. Skybox
	RegisterUnityClass<Skybox>("Core");
	//68. Sprite
	RegisterUnityClass<Sprite>("Core");
	//69. SpriteAtlas
	RegisterUnityClass<SpriteAtlas>("Core");
	//70. SpriteRenderer
	RegisterUnityClass<SpriteRenderer>("Core");
	//71. TagManager
	RegisterUnityClass<TagManager>("Core");
	//72. TextAsset
	RegisterUnityClass<TextAsset>("Core");
	//73. Texture
	RegisterUnityClass<Texture>("Core");
	//74. Texture2D
	RegisterUnityClass<Texture2D>("Core");
	//75. Texture2DArray
	RegisterUnityClass<Texture2DArray>("Core");
	//76. Texture3D
	RegisterUnityClass<Texture3D>("Core");
	//77. TimeManager
	RegisterUnityClass<TimeManager>("Core");
	//78. TrailRenderer
	RegisterUnityClass<TrailRenderer>("Core");
	//79. Transform
	RegisterUnityClass<Transform>("Core");
	//80. PlayableDirector
	RegisterUnityClass<PlayableDirector>("Director");
	//81. Grid
	RegisterUnityClass<Grid>("Grid");
	//82. GridLayout
	RegisterUnityClass<GridLayout>("Grid");
	//83. ParticleSystem
	RegisterUnityClass<ParticleSystem>("ParticleSystem");
	//84. ParticleSystemRenderer
	RegisterUnityClass<ParticleSystemRenderer>("ParticleSystem");
	//85. BoxCollider
	RegisterUnityClass<BoxCollider>("Physics");
	//86. CapsuleCollider
	RegisterUnityClass<CapsuleCollider>("Physics");
	//87. Collider
	RegisterUnityClass<Collider>("Physics");
	//88. MeshCollider
	RegisterUnityClass<MeshCollider>("Physics");
	//89. PhysicMaterial
	RegisterUnityClass<PhysicMaterial>("Physics");
	//90. PhysicsManager
	RegisterUnityClass<PhysicsManager>("Physics");
	//91. Rigidbody
	RegisterUnityClass<Rigidbody>("Physics");
	//92. SphereCollider
	RegisterUnityClass<SphereCollider>("Physics");
	//93. BoxCollider2D
	RegisterUnityClass<BoxCollider2D>("Physics2D");
	//94. CapsuleCollider2D
	RegisterUnityClass<CapsuleCollider2D>("Physics2D");
	//95. CircleCollider2D
	RegisterUnityClass<CircleCollider2D>("Physics2D");
	//96. Collider2D
	RegisterUnityClass<Collider2D>("Physics2D");
	//97. CompositeCollider2D
	RegisterUnityClass<CompositeCollider2D>("Physics2D");
	//98. Physics2DSettings
	RegisterUnityClass<Physics2DSettings>("Physics2D");
	//99. PhysicsMaterial2D
	RegisterUnityClass<PhysicsMaterial2D>("Physics2D");
	//100. PolygonCollider2D
	RegisterUnityClass<PolygonCollider2D>("Physics2D");
	//101. Rigidbody2D
	RegisterUnityClass<Rigidbody2D>("Physics2D");
	//102. Terrain
	RegisterUnityClass<Terrain>("Terrain");
	//103. TerrainData
	RegisterUnityClass<TerrainData>("Terrain");
	//104. TextRendering::Font
	RegisterUnityClass<TextRendering::Font>("TextRendering");
	//105. TextRenderingPrivate::TextMesh
	RegisterUnityClass<TextRenderingPrivate::TextMesh>("TextRendering");
	//106. Tilemap
	RegisterUnityClass<Tilemap>("Tilemap");
	//107. TilemapRenderer
	RegisterUnityClass<TilemapRenderer>("Tilemap");
	//108. UI::Canvas
	RegisterUnityClass<UI::Canvas>("UI");
	//109. UI::CanvasGroup
	RegisterUnityClass<UI::CanvasGroup>("UI");
	//110. UI::CanvasRenderer
	RegisterUnityClass<UI::CanvasRenderer>("UI");
	//111. UnityConnectSettings
	RegisterUnityClass<UnityConnectSettings>("UnityConnect");
	//112. VideoPlayer
	RegisterUnityClass<VideoPlayer>("Video");

}
