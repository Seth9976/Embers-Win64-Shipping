// 函数: sub_142022e50
// 地址: 0x142022e50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x40) = 0
sub_14203a7d0(arg1)
sub_142039940(arg1)
int32_t rax = *(arg1 + 0xc)

if (rax s>= data_143e1d9b4)
    *8 &= 0xbfffffff
    return rax

int16_t temp0
int32_t temp1
temp0:temp1 = sx.q(rax)
uint32_t rdx_1 = zx.d(temp0)
int32_t rax_2 = temp1 + rdx_1
int64_t rdx_2 = sx.q(zx.d(rax_2.w) - rdx_1) * 3
int64_t rax_6 = data_143e1d9a0
int64_t rcx_4 = *(rax_6 + (sx.q(rax_2 s>> 0x10) << 3))
*(rcx_4 + (rdx_2 << 3) + 8) &= 0xbfffffff
return rax_6
