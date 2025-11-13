// 函数: sub_141a7ddb0
// 地址: 0x141a7ddb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool cond:0 = *(arg2 + 0x20) == 0
int32_t arg_8 = 0

if (cond:0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &arg_8, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_8)

int64_t rax_2 = *(arg2 + 0x20)
float zmm2[0x2] = arg_8
int32_t arg_14 = 0
int64_t rcx_1
rcx_1.b = rax_2 != 0
*(arg2 + 0x20) = rcx_1 + rax_2
int64_t rcx_3 = arg1[0xf8]
int64_t rdx_2 = sx.q(arg1[0x8d].d)
uint32_t rax_4 = (rcx_3 u>> 0x20).d
uint128_t zmm0 = _mm_cvtepi32_ps(zx.o(rax_4))
bool cond:2 = arg1[0x8b].b != 1
int32_t arg_10
arg_10.q = rdx_2.d.q
zmm0.d = zmm0.d f* arg_14
uint64_t temp0_1 = _mm_cvtepi32_pd(zx.q(rcx_3.d))
double temp0_2[0x2] = _mm_cvtps_pd(zmm0.q)
zmm0.q = float.d(rdx_2 * sx.q(rax_4))
float temp0_3[0x2] = _mm_cvtps_pd(zmm2)
temp0_2[0] = temp0_2[0] f+ zmm0.q
temp0_2[0] = temp0_2[0] f/ temp0_1
temp0_2[0] = temp0_2[0] f+ temp0_3
double zmm1[0x2] = _mm_cvtpd_ps(temp0_2)

if (cond:2)
    return sub_141a58560(arg1, zmm1)

return sub_141a5bac0(arg1, zmm1)
