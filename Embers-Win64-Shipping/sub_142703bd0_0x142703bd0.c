// 函数: sub_142703bd0
// 地址: 0x142703bd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t zmm5 = arg2[0].q

if (zmm5.d f<= 0f || *(arg3 + 0x18) == 0)
    int64_t rax
    rax.b = 0
    return rax

float zmm3[0x4] = 0x3f800000
float zmm0[0x4] = 0xbf000000
arg1[1] = zmm5.d
zmm3[0] = 1f f/ zmm5.d
*arg1 = int.d(zmm5.d)
arg2 = *(arg3 + 0xc)
arg2[0] = arg2[0] f- *arg3
float zmm4 = *(arg3 + 0x14) f- *(arg3 + 8)
arg2[0] = arg2[0] * zmm3[0]
arg2[0] = arg2[0] + arg2[0]
zmm0[0] = -0.5f - arg2[0]
arg2 = zx.o(0)
int32_t rax_2 = int.d(zmm0[0])
zmm0 = arg3[1].d
zmm0[0] = zmm0[0] f- *(arg3 + 4)
zmm0[0] = zmm0[0] * zmm3[0]
zmm0[0] = zmm0[0] + zmm0[0]
int64_t zmm2
zmm2.d = -0.5f - zmm0[0]
zmm0 = zx.o(0)
int32_t arg_24 = neg.d(int.d(zmm2.d) s>> 1)
int64_t rax_8 = neg.d(rax_2 s>> 1).q
*(arg1 + 0x3c) = rax_8
uint64_t rsi = zx.q(arg1[0x10])
uint64_t rcx = zx.q(rax_8.d)
arg2[0] = float.s(rsi)
zmm0[0] = float.s(rcx)
arg2[0] = arg2[0] f* zmm5.d
zmm0[0] = zmm0[0] f* zmm5.d
*(arg1 + 0x30) = (_mm_unpacklo_ps(zmm0, arg2[0].q)).q
arg1[0xe] = zmm4
zmm0 = *(arg3 + 0x14)
zmm0[0] = zmm0[0] f+ *(arg3 + 8)
arg2 = *(arg3 + 4)
zmm4 = arg1[0xe] f* 0.5f
zmm0[0] = zmm0[0] * 0.5f
float var_50_1 = zmm0[0]
*(arg1 + 0x24) = (_mm_unpacklo_ps(*arg3, arg2[0].q)).q
arg1[0xb] = var_50_1
arg2 = arg1[0xb]
zmm3 = arg1[9]
zmm2 = arg1[0xa]
arg2[0] = arg2[0] + zmm4
arg2[0] = arg2[0] - zmm4
zmm3[0] = zmm3[0] f+ arg1[0xc]
zmm5.d = zmm2.d f+ arg1[0xd]
float var_44 = arg2[0]
float var_38 = arg2[0]
int64_t var_34 = (_mm_unpacklo_ps(zmm3, zmm5)).q
float var_2c = var_44
float var_40[0x4]
var_40[0].q = (_mm_unpacklo_ps(zmm3, zmm2)).q
*(arg1 + 8) = var_40
*(arg1 + 0x18) = var_34
arg1[8] = 1.d
int64_t rdi = sx.q(arg1[0x14])
int32_t rsi_1 = rsi.d * rcx.d
int32_t rax_14 = rdi.d + rsi_1
arg1[0x14] = rax_14

if (rax_14 s> arg1[0x15])
    sub_1405daba0(&arg1[0x12])

memset(rdi + *(arg1 + 0x48), 0, sx.q(rsi_1))
int64_t rax_15
rax_15.b = 1
return rax_15
