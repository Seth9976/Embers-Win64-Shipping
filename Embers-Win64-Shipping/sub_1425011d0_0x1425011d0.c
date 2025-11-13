// 函数: sub_1425011d0
// 地址: 0x1425011d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool cond:0 = *(arg2 + 0x20) == 0
int32_t arg_10 = 0

if (cond:0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &arg_10, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

int64_t rax_2 = *(arg2 + 0x20)
float zmm0[0x2] = arg_10
zmm0[0] = zmm0[0] + 0.5f
int64_t rcx_1
rcx_1.b = rax_2 != 0
*(arg2 + 0x20) = rcx_1 + rax_2
double zmm1[0x2] = _mm_cvtps_pd(zmm0)
int64_t rcx_3 = int.q(zmm1[0])

if (rcx_3 != -0x8000000000000000 && not(float.d(rcx_3) f== zmm1[0]))
    uint32_t temp0_2 = _mm_movemask_pd(_mm_unpacklo_pd(zmm1, zmm1[0]))
    zmm1 = zx.o(0)
    zmm1[0] = float.d(rcx_3 - (zx.q(temp0_2) & 1))

int64_t result = int.q(zmm1[0])
*arg3 = result
return result
