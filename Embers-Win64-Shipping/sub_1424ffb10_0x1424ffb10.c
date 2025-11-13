// 函数: sub_1424ffb10
// 地址: 0x1424ffb10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_10 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &arg_10, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

int64_t rax_2 = *(arg2 + 0x20)
int64_t rcx_1
rcx_1.b = rax_2 != 0
*(arg2 + 0x20) = rcx_1 + rax_2
int32_t rbx_1 = arg_10.d

if (rbx_1 s<= 0)
    *arg3 = 0
    return 0

int32_t rax_3 = rand()
int32_t result_1 = rbx_1 - 1
uint128_t zmm0 = _mm_cvtepi32_ps(zx.o(rbx_1))
uint128_t zmm2
zmm2.d = _mm_cvtepi32_ps(zx.o(rax_3)).d f* 3.05185094e-05f
zmm2.d = zmm2.d f* zmm0.d
int32_t result_2 = int.d(zmm2.d)

if (result_2 s<= result_1)
    result_1 = result_2

int64_t result = sx.q(result_1)
*arg3 = result
return result
