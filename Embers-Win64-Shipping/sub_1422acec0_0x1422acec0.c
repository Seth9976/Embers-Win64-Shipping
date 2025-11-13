// 函数: sub_1422acec0
// 地址: 0x1422acec0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x80) = *arg2
*(arg1 + 0x90) = arg2[1]
*(arg1 + 0xa0) = arg2[2]
*(arg1 + 0xb0) = arg2[3]
uint128_t zmm0_1 = sub_14062b8d0(arg1 + 0x80)
zmm0_1.d f- 0f
int128_t* rcx
rcx.b = zmm0_1.d f< 0f
rcx.b |= *(arg1 + 0x35) & 0xfe
*(arg1 + 0x35) = rcx.b
*(arg1 + 0xc0) = *arg3
arg1[0x1a] = arg3[1].q
arg1[0x1b].d = *(arg3 + 0x18)
*(arg1 + 0xdc) = *arg4
*(arg1 + 0xec) = arg4[1].q
*(arg1 + 0xf4) = *(arg4 + 0x18)
int32_t rax_4 = arg5[1].d
arg1[0x1f] = *arg5
arg1[0x20].d = rax_4
void* rax_5 = arg1[0x22]

if (rax_5 != 0)
    *(rax_5 + 0xa0) |= 1

sub_1422af6f0(arg1)
jump(*(*arg1 + 0xc0))
