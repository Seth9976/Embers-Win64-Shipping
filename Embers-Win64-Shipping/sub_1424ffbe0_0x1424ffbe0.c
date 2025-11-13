// 函数: sub_1424ffbe0
// 地址: 0x1424ffbe0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result_2 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &result_2, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &result_2)

int64_t arg_18 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &arg_18, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_18)

int64_t rax_3 = *(arg2 + 0x20)
int64_t result_1 = result_2
int64_t rcx_2
rcx_2.b = rax_3 != 0
*(arg2 + 0x20) = rcx_2 + rax_3
int64_t rbx_2 = arg_18 - result_1
int64_t result

if (rbx_2 + 1 s<= 0)
    result = result_1
else
    uint128_t zmm2
    zmm2.d = _mm_cvtepi32_ps(zx.o(rand())).d f* 3.05185094e-05f
    zmm2.d = zmm2.d f* float.s(rbx_2 + 1)
    int64_t rcx_4 = sx.q(int.d(zmm2.d))
    
    if (rcx_4 s<= rbx_2)
        rbx_2 = rcx_4
    
    result = rbx_2 + result_1

*arg3 = result
return result
