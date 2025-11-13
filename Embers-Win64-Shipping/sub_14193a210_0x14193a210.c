// 函数: sub_14193a210
// 地址: 0x14193a210
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_8
sub_14193a5e0(arg1 + 0x70, &arg_8, arg2)
int64_t rax = sx.q(arg_8)
void* const rax_2

if (rax.d == 0xffffffff)
    rax_2 = nullptr
else
    rax_2 = rax * 0x88 + *(arg1 + 0x70)

int64_t* rcx_1 = rax_2 + 0x78

if (rax_2 == 0)
    rcx_1 = nullptr

if (rcx_1 == 0)
    return 0

return *rcx_1
