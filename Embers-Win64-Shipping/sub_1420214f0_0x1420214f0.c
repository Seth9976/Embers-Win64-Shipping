// 函数: sub_1420214f0
// 地址: 0x1420214f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140d19010(arg2, 
    NewObject with empty name can't be used to create default subobjects (inside of UObject derived "
"class constructor) as it produces incon")
int64_t arg_8 = 0
void* result
int32_t zmm6_1
result, zmm6_1 = sub_140d2dfc0(sub_1424ad400(), arg2, 0, 0, 0, 0, 0, 0, 0)
*(result + 0x1f8) &= 0xfe
char rcx_2 = arg5 | *(result + 0x1f8)
*(result + 0x89) &= 0x7f
*(result + 0x1fc) = zmm6_1
*(result + 0x1f8) = (rcx_2 & 0xfb) | arg3 << 2
*(result + 0x1f0) = arg1
*(result + 0x200) = arg4
sub_141ef1390(result)
return result
