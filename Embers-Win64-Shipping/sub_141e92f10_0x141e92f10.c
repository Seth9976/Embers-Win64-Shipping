// 函数: sub_141e92f10
// 地址: 0x141e92f10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(*(arg1 + 0x250))
int32_t rax = (rdi + 1).d
*(arg1 + 0x250) = rax

if (rax s> *(arg1 + 0x254))
    sub_141eab910(arg1 + 0x248)

sub_1422d6d20(rdi * 0x540 + *(arg1 + 0x248), arg2)
int64_t rdi_1 = sx.q(*(arg1 + 0x260))
int32_t rax_1 = (rdi_1 + 1).d
*(arg1 + 0x260) = rax_1

if (rax_1 s> *(arg1 + 0x264))
    sub_1406105e0(arg1 + 0x258)

int64_t result = *(arg1 + 0x258)
*(result + (rdi_1 << 2)) = arg3.d
return result
