// 函数: sub_140975590
// 地址: 0x140975590
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(arg2)

if (rdi.d s<= 0xffffffff || rdi.d s>= *(arg1 + 0x38))
    return 

int64_t rbp_1 = *(arg1 + 0x30)
int64_t rsi_1 = sx.q(*(arg1 + 0x48))
int32_t rax_1 = (rsi_1 + 1).d
*(arg1 + 0x48) = rax_1

if (rax_1 s> *(arg1 + 0x4c))
    sub_1405c5060(arg1 + 0x40)

sub_140949000(rsi_1 * 0x50 + *(arg1 + 0x40), rdi * 0x50 + rbp_1)
sub_140974ab0(arg1 + 0x30, rdi.d, 1, 1)
