// 函数: sub_1405ba3e0
// 地址: 0x1405ba3e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_8
sub_1405ba560(arg1 + 0x68, &arg_8, arg2)
int64_t rax = sx.q(arg_8)
void* rcx_3

if (rax.d == 0xffffffff)
    rcx_3 = nullptr
else
    rcx_3 = (rax << 5) + *(arg1 + 0x68)

void* const rax_1 = rcx_3 + 8

if (rcx_3 == 0)
    rax_1 = nullptr

if (rax_1 == 0)
    return 0

return zx.q(*(rax_1 + 8))
