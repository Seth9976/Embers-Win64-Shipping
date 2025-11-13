// 函数: sub_142506900
// 地址: 0x142506900
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg2 + 0x38) = 0
void var_28

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_28, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_28)

void* rax_2 = *(arg2 + 0x38)
void* rdi = &var_28

if (rax_2 != 0)
    rdi = rax_2

int32_t var_38

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_38, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_38)

int32_t arg_10 = (zx.o(0)).d

if (*(arg2 + 0x20) == 0)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &arg_10, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

int64_t rax_5 = *(arg2 + 0x20)
float zmm3[0x4] = arg_10
float zmm4[0x4] = var_38
int64_t rsi
rsi.b = rax_5 != 0
*(arg2 + 0x20) = rsi + rax_5
float var_30
float result = var_30 f+ *(rdi + 8)
float zmm0_1[0x4] = zmm3 ^ data_142d3f780
zmm4[0] = zmm4[0] f+ *rdi
int32_t var_34
int64_t zmm1
zmm1.d = var_34.d f+ *(rdi + 4)

if (result >= zmm0_1[0])
    result = _mm_min_ss(result, zmm3[0])
else
    result = zmm0_1[0]

if (zmm1.d f>= zmm0_1[0])
    zmm1 = _mm_min_ss(zmm1.d, zmm3[0])
else
    zmm1 = zmm0_1[0].q

if (not(zmm4[0] < zmm0_1[0]))
    zmm0_1 = _mm_min_ss(zmm4[0], zmm3[0])

*rdi = (_mm_unpacklo_ps(zmm0_1, zmm1)).q
*(rdi + 8) = result
return result
