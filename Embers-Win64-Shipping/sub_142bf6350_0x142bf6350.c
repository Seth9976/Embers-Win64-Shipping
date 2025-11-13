// 函数: sub_142bf6350
// 地址: 0x142bf6350
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rbp = zx.q(arg4)
EnterCriticalSection(arg2)
void* rsi = arg2->__offset(0x28).q
int32_t rax = sub_142b92f00(rsi, arg3, arg2->__offset(0x30).d, arg1)
void* rcx_2

if (rax == 0)
    rcx_2 = *(rsi + 0x78)

int32_t rbx_1

if (rax != 0 || *(rcx_2 + 0x60) != 0x6f75746c || rbp.d u>= sx.d(*(rcx_2 + 0x9a)))
    rbx_1 = 0
else
    uint64_t rdx_1 = rbp << 3
    rbx_1 = 1
    *arg5 = *(rdx_1 + *(rcx_2 + 0xa0))
    *arg6 = *(*(*(rsi + 0x78) + 0xa0) + rdx_1 + 4)

LeaveCriticalSection(arg2)
return zx.q(rbx_1)
