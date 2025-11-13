// 函数: sub_141845680
// 地址: 0x141845680
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

CRITICAL_SECTION* lpCriticalSection = *arg1
EnterCriticalSection(lpCriticalSection)
int64_t* r14 = arg1[1]
int64_t rbp = sx.q(r14[1].d)
int32_t rax = (rbp + 1).d
r14[1].d = rax

if (rax s> *(r14 + 0xc))
    sub_1405a4d70(r14)

*(*r14 + (rbp << 3)) = arg2
int64_t rbp_1 = sx.q(arg1[3].d)
int32_t rax_2 = (rbp_1 + 1).d
arg1[3].d = rax_2

if (rax_2 s> *(arg1 + 0x1c))
    sub_1405a4d70(&arg1[2])

*(arg1[2] + (rbp_1 << 3)) = arg2
int64_t r8 = *arg2
int64_t result

if (*arg1[5] == 0)
    result = (*(r8 + 8))(arg2, zx.q(*arg1[4]), r8)
else
    result = (*(r8 + 0x10))(arg2)

if (lpCriticalSection == 0)
    return result

return LeaveCriticalSection(lpCriticalSection)
