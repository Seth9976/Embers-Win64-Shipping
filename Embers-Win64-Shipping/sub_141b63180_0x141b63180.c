// 函数: sub_141b63180
// 地址: 0x141b63180
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_8
sub_140865c40(arg1 + 0xb8, &arg_8, *arg2)
int64_t rax = sx.q(arg_8)
void* rdx_2

if (rax.d != 0xffffffff)
    rdx_2 = *(arg1 + 0xb8) + rax * 0x18

void* const rdx_3

if (rax.d == 0xffffffff || rdx_2 == 0)
    rdx_3 = nullptr
else
    rdx_3 = *(rdx_2 + 8)

*(rdx_3 + 0x50)
jump(*(*data_143f0f180 + 0x3d8))
