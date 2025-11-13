// 函数: sub_141fec980
// 地址: 0x141fec980
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t r10 = zx.q(arg1[1].d)
uint64_t r11 = zx.q(*(arg1 + 0xc))
int32_t r14 = arg1[2].d
uint64_t rdi = zx.q(*(arg4 + 0x14))
void* rcx = arg4 + 0x58
float zmm4[0x4] = 0x3f800000
uint32_t rax = (rdi * 2).d
int32_t* rdx_3 = (zx.q(*(arg1 + 0x14)) u>> 2 << 5) + *(arg4 + 0x88)
int32_t rsi = rax + r10.d
int32_t rbp = rax + r11.d
int32_t var_30 = rsi
void* rax_1 = *(rcx + 0x20)
int32_t var_2c = rbp
int32_t r8 = rdx_3[1]

if (rax_1 != 0)
    rcx = rax_1

int128_t zmm0
zmm0.d = float.s(r10)
zmm4[0] = 1f f/ zmm0.d
zmm0.d = float.s(r11)
int64_t r11_1 = sx.q(*rdx_3)
int32_t r8_1 = r8 - *(rcx + (r11_1 << 2))
int32_t rax_3 = r8_1 & 0x55555555
int32_t r8_3 = r8_1 u>> 1 & 0x55555555
int32_t rcx_4 = (rax_3 u>> 1 ^ rax_3) & 0x33333333
int32_t rax_7 = (rcx_4 u>> 2 ^ rcx_4) & 0xf0f0f0f
int32_t r10_4 = (rax_7 u>> 4 ^ rax_7) & 0xff00ff
int32_t rax_11 = (r8_3 u>> 1 ^ r8_3) & 0x33333333
int32_t r8_6 = (*(arg4 + 0x1c) u>> r11_1.b) * *(arg4 + 0x18)
int32_t rdx_7 = (rax_11 u>> 2 ^ rax_11) & 0xf0f0f0f
int32_t r9_3 = (rdx_7 u>> 4 ^ rdx_7) & 0xff00ff
float zmm3 = 1f f/ zmm0.d
int32_t var_34 = (zx.d((r9_3 u>> 8).w) ^ zx.d(r9_3.w)) * r8_6
*arg3 = ((zx.d((r10_4 u>> 8).w) ^ zx.d(r10_4.w)) * r8_6).o
int128_t zmm2
zmm2.d = 0.5f f- float.s(rdi)
arg3[2].d = r14
zmm0 = zmm2
zmm2.d = zmm2.d f* zmm3
zmm0.d = zmm0.d f* zmm4[0]
float temp0[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xe1)
temp0[0] = zmm3
float temp0_1[0x4] = _mm_shuffle_ps(temp0, temp0, 0xc6)
temp0_1[0] = zmm0.d
float temp0_2[0x4] = _mm_shuffle_ps(temp0_1, temp0_1, 0x27)
temp0_2[0] = zmm2.d
arg3[1] = _mm_shuffle_ps(temp0_2, temp0_2, 0x39)
*(arg3 + 0x28) = *arg1
arg3[3].q = data_14395f4d0
*arg2 = (rsi + 7) u>> 3
arg2[1] = (rbp + 7) u>> 3
return arg2
