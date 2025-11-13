// 函数: sub_1418a3760
// 地址: 0x1418a3760
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(arg1 + 8)
*arg2 = *(arg1 + 0x48)
void* rax_1 = *(arg1 + 0x50)
arg2[1] = rax_1

if (rax_1 != 0)
    *(rax_1 + 8) += 1

arg2[2].d = *(arg1 + 0x58)

if (arg1 != -8)
    LeaveCriticalSection(arg1 + 8)

return arg2
