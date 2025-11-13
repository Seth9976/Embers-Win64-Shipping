// 函数: sub_14209a390
// 地址: 0x14209a390
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdx_2 = sx.q(arg1[2].d)
int64_t rax = *arg1
int64_t r10 = sx.q(*(arg1 + 0x24))
arg1[3] += r10
arg1[3] -= zx.q(*(rax + (rdx_2 << 2)))
*(rax + (rdx_2 << 2)) = r10.d
int32_t rax_3 = arg1[2].d + 1
*(arg1 + 0x24) = 0
int32_t rcx = arg1[1].d
int32_t temp2
int32_t temp3
temp2:temp3 = sx.q(rax_3)
arg1[2].d = mods.dp.d(temp2:temp3, rcx)
int32_t r8_1
r8_1.b = arg1[4].d != rcx
arg1[4].d += r8_1
return zx.q(divs.dp.d(temp2:temp3, rcx))
