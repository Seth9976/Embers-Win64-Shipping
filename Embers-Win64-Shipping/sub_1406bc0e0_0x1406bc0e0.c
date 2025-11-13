// 函数: sub_1406bc0e0
// 地址: 0x1406bc0e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(arg2)
CRITICAL_SECTION* arg_8 = arg1 + 0x98
EnterCriticalSection(arg1 + 0x98)
void* rdx_2

if (rdi.d s>= 0 && rdi.d s< *(arg1 + 0x50))
    rdx_2 = rdi * 0xa8 + 0x18 + *(arg1 + 0x48)

if (rdi.d s< 0 || rdi.d s>= *(arg1 + 0x50) || rdi * 0xa8 + 0x18 == neg.q(*(arg1 + 0x48)))
    rdi.b = 0
else
    *arg4 = *(rdx_2 + 0x18) << 3
    arg4[1] = *(rdx_2 + 0x1c)
    arg4[2] = *(rdx_2 + 0x20)
    sub_140597df0(&arg4[4], rdx_2 + 8)
    rdi.b = 1

if (arg1 != -0x98)
    LeaveCriticalSection(arg1 + 0x98)

return zx.q(rdi.b)
