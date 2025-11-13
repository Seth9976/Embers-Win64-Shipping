// 函数: sub_1424ffe80
// 地址: 0x1424ffe80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result_2 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &result_2, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &result_2)

int32_t arg_18 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &arg_18, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_18)

int64_t rax_3 = *(arg2 + 0x20)
int32_t result_1 = result_2
int64_t rcx_2
rcx_2.b = rax_3 != 0
*(arg2 + 0x20) = rcx_2 + rax_3
int32_t rbx_2 = arg_18 - result_1
int32_t result

if (rbx_2 + 1 s<= 0)
    result = result_1
else
    int32_t rax_4 = rand()
    uint128_t zmm0_1 = _mm_cvtepi32_ps(zx.o(rbx_2 + 1))
    uint128_t zmm2
    zmm2.d = _mm_cvtepi32_ps(zx.o(rax_4)).d f* 3.05185094e-05f
    zmm2.d = zmm2.d f* zmm0_1.d
    int32_t rax_5 = int.d(zmm2.d)
    
    if (rax_5 s<= rbx_2)
        rbx_2 = rax_5
    
    result = rbx_2 + result_1

*arg3 = result
return result
