// 函数: sub_14279da70
// 地址: 0x14279da70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = **(arg1 + 8)
sub_140d19010(rbx, 
    NewObject with empty name can't be used to create default subobjects (inside of UObject derived "
"class constructor) as it produces incon")
int64_t arg_8 = 0
void* result = sub_140d2dfc0(sub_1427bb410(), rbx, 0, 0, 0, 0, 0, 0, 0)
sub_141dba0e0(rbx, result)
arg_8 = 0
sub_141f32b40(result, *(rbx + 0x130), &data_143f3f280, 0)
*(result + 0x428) = *arg3
*(result + 0x430) = arg3[1].d
uint128_t zmm0 = *arg2
*(result + 0x434) = 0x42f00000
*(result + 0x408) = zmm0
sub_141ef1390(result)
*(result + 0x438) = **(arg1 + 0x10)
sub_141ee8490(result)
(*(*result + 0x498))(result)
return result
