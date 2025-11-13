// 函数: sub_141c3c590
// 地址: 0x141c3c590
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float* r9 = *(arg1 + 0x70)
float* r10 = *(arg1 + 0x60)
float* rbx = *(arg1 + 0x80)
float* r11 = *(arg1 + 0x90)
int64_t rax = sx.q(*(arg1 + 8))
float* rsi = *(arg1 + 0x10)
float zmm3 = arg2[1]
float zmm4 = *arg2
*rsi = zmm3 * *r9 + zmm4 * *r10 + arg2[rax] f* *rbx + arg2[rax + 1] f* *r11
int64_t rax_1 = sx.q(*(arg1 + 8))
zmm4 = zmm4 * r9[1] + zmm3 * r10[1]
zmm3 = arg2[3]
rsi[1] = zmm4 + arg2[rax_1] f* r11[1] + arg2[rax_1 + 1] f* *rbx
int64_t rax_2 = sx.q(*(arg1 + 8))
zmm4 = arg2[2]
rsi[2] = zmm4 * r10[2] + zmm3 * r9[2] + arg2[rax_2 - 2] f* rbx[2] + arg2[rax_2 - 1] f* r11[2]
int64_t rax_3 = sx.q(*(arg1 + 8))
rsi[3] = zmm4 * r9[3] + zmm3 * r10[3] + arg2[rax_3 - 2] f* r11[3] + arg2[rax_3 - 1] f* rbx[3]
sub_141c35c90(arg1, arg1 + 0x20, arg2, 4, rsi)
int32_t* rdi_1 = *(arg1 + 0xa0)
int64_t rbx_1 = *(rdi_1 + 0x40)
float* var_28
var_28.d = rdi_1[2]
sub_141c45970(rdi_1, rsi, 0x3f800000, rbx_1, var_28.d)
float zmm6[0x4] = sub_141c37d40(rdi_1, rbx_1, arg3)
uint128_t zmm0_1 = _mm_cvtepi32_ps(zx.o(rdi_1[1]))
int32_t rax_5 = rdi_1[2]
zmm6[0] = zmm6[0] f/ zmm0_1.d
var_28.d = rax_5
return sub_141c45970(rdi_1, arg3, zmm6, arg3, var_28.d)
