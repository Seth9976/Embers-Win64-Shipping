// 函数: sub_141916220
// 地址: 0x141916220
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbp = sx.q(arg3)

if (arg4 == 0)
    int64_t rcx_8 = rbp * 5
    *(*(arg1 + 0x148) + (rcx_8 << 2)) = 0x822e
    *(*(arg1 + 0x148) + (rcx_8 << 2) + 4) = 0
    *(*(arg1 + 0x148) + (rcx_8 << 2) + 0xc) = 0
    *(*(arg1 + 0x148) + (rcx_8 << 2) + 0x10) = 0
    int64_t rax_9 = *(arg1 + 0x148)
    *(rax_9 + (rcx_8 << 2) + 8) = 0x88ba
    return rax_9

char rax_1 = (*(*arg4 + 0x10))(arg4)
int64_t rdx = *arg4
int32_t rax_2 = (*(rdx + 0x18))(arg4, rdx)
int32_t r8 = arg4[3].d
int64_t r9 = rbp * 0x14
*(r9 + *(arg1 + 0x148)) = arg4[4].d
*(r9 + *(arg1 + 0x148) + 4) = r8
*(r9 + *(arg1 + 0x148) + 0xc) = rax_2
*(r9 + *(arg1 + 0x148) + 0x10) = rax_1
int64_t rax_4 = *(arg1 + 0x148)
*(r9 + rax_4 + 8) = 0x88ba
return rax_4
