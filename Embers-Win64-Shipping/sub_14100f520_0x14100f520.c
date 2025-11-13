// 函数: sub_14100f520
// 地址: 0x14100f520
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[1] == 0)
    return 

void* rbp_1 = *(*arg1 + 0xaf0)
EnterCriticalSection(rbp_1 + 8)
int64_t r14_1 = sx.q(*(rbp_1 + 0x38))
int32_t rax_2 = (r14_1 + 1).d
*(rbp_1 + 0x38) = rax_2

if (rax_2 s> *(rbp_1 + 0x3c))
    sub_1405a4df0(rbp_1 + 0x30)

int64_t rax = *(rbp_1 + 0x30)
int64_t rcx_2 = r14_1 * 3
*(rax + (rcx_2 << 3)) = *(arg1 + 0x30)
*(rax + (rcx_2 << 3) + 0x10) = arg1[8]
*(rbp_1 + 0x40) -= 1

if (rbp_1 != -8)
    LeaveCriticalSection(rbp_1 + 8)
