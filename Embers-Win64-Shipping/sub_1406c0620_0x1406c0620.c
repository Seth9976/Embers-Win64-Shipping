// 函数: sub_1406c0620
// 地址: 0x1406c0620
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(arg2)
EnterCriticalSection(arg1 + 0x98)
void* rcx_2
int64_t rdx

if (rdi.d s>= 0 && rdi.d s< *(arg1 + 0x190))
    rdx = rdi * 0xa8
    rcx_2 = *(arg1 + 0x188) + 0x18

if (rdi.d s< 0 || rdi.d s>= *(arg1 + 0x190) || rcx_2 == neg.q(rdx)
        || arg4.d f!= *(rcx_2 + rdx + 0x48))
    rdi.b = 0
else
    rdi.b = 1

if (arg1 != -0x98)
    LeaveCriticalSection(arg1 + 0x98)

return zx.q(rdi.b)
