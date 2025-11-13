// 函数: sub_140ed2950
// 地址: 0x140ed2950
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_8
sub_1405ba560(arg1 + 0x60, &arg_8, arg2)
int64_t rax = sx.q(arg_8)

if (rax.d == 0xffffffff)
    return 0

int64_t rcx_3 = (rax << 5) + *(arg1 + 0x60)

if (rcx_3 == 0)
    return 0

return rcx_3 + 8
