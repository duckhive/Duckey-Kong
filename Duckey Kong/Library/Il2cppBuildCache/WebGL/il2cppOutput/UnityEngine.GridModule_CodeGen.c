#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





// 0x00000001 UnityEngine.Vector3 UnityEngine.Grid::get_cellSize()
extern void Grid_get_cellSize_m350AB6E17937E92D1C02410690D6160792D27B6C (void);
// 0x00000002 System.Void UnityEngine.Grid::get_cellSize_Injected(UnityEngine.Vector3&)
extern void Grid_get_cellSize_Injected_m317A69C0DFAE043283FB01FE6717275D8023323F (void);
// 0x00000003 UnityEngine.Vector3 UnityEngine.GridLayout::CellToWorld(UnityEngine.Vector3Int)
extern void GridLayout_CellToWorld_mE666103CBF0439E45B8080DE6E6F38C201EBDF9B (void);
// 0x00000004 System.Void UnityEngine.GridLayout::DoNothing()
extern void GridLayout_DoNothing_m36201F4787709460C994921B16CAC95CD490E0A1 (void);
// 0x00000005 System.Void UnityEngine.GridLayout::CellToWorld_Injected(UnityEngine.Vector3Int&,UnityEngine.Vector3&)
extern void GridLayout_CellToWorld_Injected_m1E6DB2F8FCE12A85C73C13C50576A63B34B061D7 (void);
static Il2CppMethodPointer s_methodPointers[5] = 
{
	Grid_get_cellSize_m350AB6E17937E92D1C02410690D6160792D27B6C,
	Grid_get_cellSize_Injected_m317A69C0DFAE043283FB01FE6717275D8023323F,
	GridLayout_CellToWorld_mE666103CBF0439E45B8080DE6E6F38C201EBDF9B,
	GridLayout_DoNothing_m36201F4787709460C994921B16CAC95CD490E0A1,
	GridLayout_CellToWorld_Injected_m1E6DB2F8FCE12A85C73C13C50576A63B34B061D7,
};
static const int32_t s_InvokerIndices[5] = 
{
	3291,
	2637,
	2555,
	3297,
	1383,
};
extern const CustomAttributesCacheGenerator g_UnityEngine_GridModule_AttributeGenerators[];
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_UnityEngine_GridModule_CodeGenModule;
const Il2CppCodeGenModule g_UnityEngine_GridModule_CodeGenModule = 
{
	"UnityEngine.GridModule.dll",
	5,
	s_methodPointers,
	0,
	NULL,
	s_InvokerIndices,
	0,
	NULL,
	0,
	NULL,
	0,
	NULL,
	NULL,
	g_UnityEngine_GridModule_AttributeGenerators,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};
