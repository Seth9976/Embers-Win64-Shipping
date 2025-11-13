// 函数: sub_1418a3660
// 地址: 0x1418a3660
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(arg1 + 0x48)
*arg2 = 0
int64_t rbp = sx.q(*(arg1 + 0x88))
int64_t rdi_1 = *(arg1 + 0x80)
arg2[1].d = rbp.d

if (rbp.d != 0)
    sub_140638750(arg2, rbp.d, 0)
    memcpy(*arg2, rdi_1, (rbp << 2).d)
else
    *(arg2 + 0xc) = 0

if (arg1 != -0x48)
    LeaveCriticalSection(arg1 + 0x48)

return arg2
