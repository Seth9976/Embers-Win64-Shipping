// 函数: sub_1405f9310
// 地址: 0x1405f9310
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_28 = -2
int64_t rsi = sx.q(arg4)
void* arg_8 = arg1 + 0x98
EnterCriticalSection(arg1 + 0x98)

if (arg3 == 0)
    if (rsi.d s< 0 || rsi.d s>= *(arg1 + 0x50))
        *arg2 = 0
        arg2[1] = 0
    else
        sub_140596d10(arg2, *(arg1 + 0x48) + rsi * 0x68 + 0x38)
else if (arg3 == 1)
    if (rsi.d s< 0 || rsi.d s>= *(arg1 + 0x90))
        *arg2 = 0
        arg2[1] = 0
    else
        sub_140596d10(arg2, *(arg1 + 0x88) + rsi * 0x68 + 0x38)
else if (arg3 == 2)
    if (rsi.d s< 0 || rsi.d s>= *(arg1 + 0x130))
        *arg2 = 0
        arg2[1] = 0
    else
        sub_140596d10(arg2, *(arg1 + 0x128) + rsi * 0x68 + 0x38)
else if (arg3 != 6 || rsi.d s< 0 || rsi.d s>= *(arg1 + 0x1b0))
    *arg2 = 0
    arg2[1] = 0
else
    sub_140596d10(arg2, *(arg1 + 0x1a8) + rsi * 0x68 + 0x38)

if (arg1 != -0x98)
    LeaveCriticalSection(arg1 + 0x98)

return arg2
