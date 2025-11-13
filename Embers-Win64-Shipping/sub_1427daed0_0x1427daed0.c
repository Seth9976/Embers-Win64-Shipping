// 函数: sub_1427daed0
// 地址: 0x1427daed0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = arg1[7]
int64_t* rax_1 = (*(*rcx + 0x18))(rcx)
int64_t* result_1 = (*(*rax_1 + 8))(rax_1, 0xc, "parseGeometry", 
    "d:\build\++fortnite\sync\engine\source\thirdparty\physx3\physx_3.4\source\physxextensions\src\s"
"erialization\xml\SnXmlVisitorReader.h", 
    0xad)
int64_t* result = result_1

if (result_1 == 0)
    result = nullptr
else
    *result_1 = 2
    result_1[1].d = 0

void var_48
physx::PxCapsuleGeometryGeneratedInfo::PxCapsuleGeometryGeneratedInfo(&var_48)
sub_1427dd590(arg1)
return result
