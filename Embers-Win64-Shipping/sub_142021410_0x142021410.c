// 函数: sub_142021410
// 地址: 0x142021410
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = arg3

if (arg4 != 0)
    rbx = arg4

sub_140d19010(rbx, 
    NewObject with empty name can't be used to create default subobjects (inside of UObject derived "
"class constructor) as it produces incon")
int64_t arg_10 = 0
void* result = sub_140d2dfc0(sub_14249b500(), rbx, 0, 0, 0, 0, 0, 0, 0)
*(result + 0x89) |= 0x40
sub_141f25170(result, arg1)
int32_t rcx_3 = arg2[1].d
*(result + 0x214) = *arg2
*(result + 0x21c) = rcx_3
sub_141f499a0(result, 1)
sub_141ef14c0(result, arg3, 0)
int128_t zmm1 = arg5

if (not(zmm1.d f<= 0f))
    sub_141f259b0(result, zmm1)

return result
