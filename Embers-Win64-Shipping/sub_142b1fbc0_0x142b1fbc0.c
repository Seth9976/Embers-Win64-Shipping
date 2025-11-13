// 函数: sub_142b1fbc0
// 地址: 0x142b1fbc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rsi_2 = ((*(arg1 + 0x20) - *(arg1 + 0x10)) s>> 1).d
int32_t rbp_2 = ((*(arg1 + 0x18) - *(arg1 + 0x10)) s>> 1).d
sub_142a4a600(*(arg1 + 8), rsi_2)
void* rcx_1 = *(arg1 + 8)
int32_t rax = rsi_2 + arg2
int32_t rbx_1 = 0x1b
int32_t rdx_1 = 0x1b

if ((*(rcx_1 + 8) & 2) == 0)
    rdx_1 = *(rcx_1 + 0x10)

int32_t rdx_2 = rdx_1 * 2

if (rax s>= rdx_2)
    rdx_2 = rax

if (rdx_2 s< 0x100)
    rdx_2 = 0x100

void* result = sub_142a4a0b0(rcx_1, rdx_2)
*(arg1 + 0x10) = result

if (result != 0)
    *(arg1 + 0x18) = result + (sx.q(rbp_2) << 1)
    void* rcx_3 = result + (sx.q(rsi_2) << 1)
    result = *(arg1 + 8)
    *(arg1 + 0x20) = rcx_3
    
    if ((*(result + 8) & 2) == 0)
        rbx_1 = *(result + 0x10)
    
    result.b = 1
    *(arg1 + 0x28) = rbx_1 - rsi_2
else
    *arg3 = 7

return result
