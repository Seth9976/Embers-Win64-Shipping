// 函数: sub_142644060
// 地址: 0x142644060
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141db7de0(arg1, arg2)
*arg1 = &data_14323baa8
int32_t var_74 = 0
int32_t var_80 = 0
float var_70[0x4]
sub_141db75d0(&var_70)
int64_t rdi = sx.q(arg1[6].d)
int32_t var_38 = 0
int64_t var_40 = (_mm_unpacklo_ps(zx.o(0), 0x42c80000)).q
int32_t var_2c = 0
int32_t rax = (rdi + 1).d
int64_t var_34 = (_mm_unpacklo_ps(zx.o(0), 0xc2c80000)).q
arg1[6].d = rax

if (rax s> *(arg1 + 0x34))
    sub_140775520(&arg1[5])

int64_t rax_1 = arg1[5]
int64_t rcx_2 = rdi * 9
*(rax_1 + (rcx_2 << 3)) = var_70
int128_t var_60
*(rax_1 + (rcx_2 << 3) + 0x10) = var_60
float var_50[0x4]
*(rax_1 + (rcx_2 << 3) + 0x20) = var_50
*(rax_1 + (rcx_2 << 3) + 0x30) = var_40.o
*(rax_1 + (rcx_2 << 3) + 0x40) = var_34
return arg1
