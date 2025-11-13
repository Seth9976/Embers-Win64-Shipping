// 函数: sub_142720210
// 地址: 0x142720210
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    return 

void* rax_1 = sub_14272ae50()
void* r8_1 = *(arg2 + 0x10)
int64_t rax = sx.q(*(rax_1 + 0x38))

if (rax.d s> *(r8_1 + 0x38) || *(*(r8_1 + 0x30) + (rax << 3)) != rax_1 + 0x30)
    return 

sub_14271c0a0(arg2 + 0x28)
int128_t var_28_1 = *(arg2 + 0x28)
int128_t var_18_1 = *(arg2 + 0x38)
int128_t zmm0_1 = *(arg2 + 0x48)

if (zmm0_1.q == 0)
    return 

int64_t rdi_1 = sx.q(*(arg1 + 0x88))
int32_t rax_2 = (rdi_1 + 1).d
*(arg1 + 0x88) = rax_2

if (rax_2 s> *(arg1 + 0x8c))
    sub_1405c4f50(arg1 + 0x80)

rax = *(arg1 + 0x80)
int64_t rcx_3 = rdi_1 * 6
*(rax + (rcx_3 << 3)) = var_28_1
*(rax + (rcx_3 << 3) + 0x10) = var_18_1
*(rax + (rcx_3 << 3) + 0x20) = zmm0_1
*(arg1 + 0x40) = 0
