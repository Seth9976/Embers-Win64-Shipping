// 函数: sub_142913580
// 地址: 0x142913580
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
void* rsi = *(*(arg1 + 0x10) + 0x28)
int32_t* rax_2 = *(*(arg1 + 0x28) + 8)

if (rax_2 == 0)
    rax_2 = sub_142926e00()

if (arg2 != 0)
    int64_t* var_10_1 = arg3
    return sub_14294dbe0(rsi, rax_2, arg4, arg5, arg2)

int32_t rcx_1 = 1

if (sub_14294d500(rsi, rax_2, arg5.d, arg3) == 0)
    rcx_1 = -1

return zx.q(rcx_1)
