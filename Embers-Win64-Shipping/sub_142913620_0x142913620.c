// 函数: sub_142913620
// 地址: 0x142913620
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
void* rsi = *(*(arg1 + 0x10) + 0x28)
int32_t* rax_2 = *(*(arg1 + 0x28) + 8)

if (rax_2 == 0)
    rax_2 = sub_142926e00()

if (arg2 != 0)
    return sub_14294d5c0(rsi, rax_2, arg4, arg5.d, arg2, arg3)

int32_t rcx_1 = 1

if (sub_14294e2c0(rsi, rax_2, arg5, arg3) == 0)
    rcx_1 = -1

return zx.q(rcx_1)
