// 函数: sub_142a40670
// 地址: 0x142a40670
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg2 + 8) != 0 || *(arg2 + 2) u>= *(arg2 + 4))
    return 

void arg_10
sub_142a3f0a0(arg2 & 0xffffffffffc00000, arg2, *(arg2 + 0x30), &arg_10)
int64_t rcx_2 = *(arg2 + 0x30)
uint64_t rdi_2 = zx.q(*(arg2 + 4)) - zx.q(*(arg2 + 2))
uint64_t rax_2

if (rcx_2 u< 0x1000)
    rax_2 = zx.q(divu.dp.d(0:0x1000, rcx_2.d))
else
    rax_2 = 1

if (rax_2 u< 1)
    rax_2 = 1

if (rdi_2 u> rax_2)
    rdi_2 = rax_2
    
    if (rax_2 == 0)
        rdi_2 = 1

sub_142a40730(arg2, rdi_2)
*(arg2 + 2) += rdi_2.w

if ((arg2[1] & 8) == 0)
    arg2[7] = 0
