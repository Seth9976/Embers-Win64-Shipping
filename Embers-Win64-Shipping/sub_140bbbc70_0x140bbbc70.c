// 函数: sub_140bbbc70
// 地址: 0x140bbbc70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(arg1 + 0x40)
int64_t rbp = sx.q(*(arg1 + 0x80))
int32_t rax = (rbp + 1).d
*(arg1 + 0x80) = rax

if (rax s> *(arg1 + 0x84))
    sub_14083a7e0(arg1 + 0x78)

int64_t rax_1 = *(arg1 + 0x78)
int64_t rcx_3 = rbp * 3
*(rax_1 + (rcx_3 << 2)) = *arg2
int32_t result = arg2[1].d
*(rax_1 + (rcx_3 << 2) + 8) = result

if (*(arg1 + 0x88) != 0)
    int64_t* rcx_4 = *(arg1 + 0x90)
    *(arg1 + 0x88) = 0
    result = (*(*rcx_4 + 0x10))(rcx_4)

if (arg1 == -0x40)
    return result

return LeaveCriticalSection(arg1 + 0x40)
