// 函数: sub_141fdd290
// 地址: 0x141fdd290
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = *(arg1 + 0x1c)

if (rax s> 0)
    *(arg1 + 0x1c) = rax - 1
    return -1

sub_141feb8f0(arg1)
int32_t temp1 = mods.dp.d(sx.q(arg1[2].d + 1), arg1[1].d)
char var_34 = 1
int64_t r8 = sx.q(temp1) * 3
int64_t rax_7 = *arg1
*(rax_7 + (r8 << 3)) = data_143296ad0
uint128_t zmm0
zmm0.d = 0xbf800000
*(rax_7 + (r8 << 3) + 0x10) = zmm0.q
*(*arg1 + (r8 << 3)) = arg1[4].d
*(*arg1 + (r8 << 3) + 4) = arg2.d
*(*arg1 + (r8 << 3) + 8) = arg3.d
int32_t rcx_1 = arg1[1].d
int32_t rax_12 = *(arg1 + 0x14) + 1
arg1[2].d = temp1

if (rax_12 s<= rcx_1)
    rcx_1 = rax_12

int64_t result = arg1[5] + 1
*(arg1 + 0x14) = rcx_1
arg1[5] = result
return result
