// 函数: sub_142662320
// 地址: 0x142662320
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141dd15d0(arg1)

if (sub_140cdd6a0(arg1) s< 0x1ad && *(arg1 + 0x2ac) == 3)
    *(arg1 + 0x2ac) = ((arg1[0x55].d u>> 5).b & 1) * 2

char rax_3 = sub_142669020(arg1)
*(arg1 + 0x59) &= 0xfe
*(arg1 + 0x59) |= rax_3
sub_142666dd0(arg1)
arg1[1].d |= 0x40
int32_t rax_4 = *(arg1 + 0xc)

if (rax_4 s>= data_143e1d9b4)
    *8 |= 0x20000000
    return 0

int16_t temp0
int32_t temp1
temp0:temp1 = sx.q(rax_4)
uint32_t rdx_1 = zx.d(temp0)
int32_t rax_6 = temp1 + rdx_1
int64_t rdx_2 = sx.q(zx.d(rax_6.w) - rdx_1) * 3
int64_t result = data_143e1d9a0
int64_t rcx_6 = *(result + (sx.q(rax_6 s>> 0x10) << 3))
*(rcx_6 + (rdx_2 << 3) + 8) |= 0x20000000
return result
