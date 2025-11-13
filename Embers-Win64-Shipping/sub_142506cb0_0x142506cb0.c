// 函数: sub_142506cb0
// 地址: 0x142506cb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_18

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_18, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_18)

bool cond:1 = *(arg2 + 0x20) == 0
int32_t arg_10 = (zx.o(0)).d

if (cond:1)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &arg_10, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

int64_t rax_3 = *(arg2 + 0x20)
float zmm3[0x4] = arg_10
float zmm0_1[0x4] = zmm3 ^ data_142d3f780
int64_t rcx_2
rcx_2.b = rax_3 != 0
float var_10
bool cond:3 = var_10 >= zmm0_1[0]
*(arg2 + 0x20) = rcx_2 + rax_3
float result

if (cond:3)
    result = _mm_min_ss(var_10, zmm3[0])
else
    result = zmm0_1[0]

int32_t var_14
int64_t zmm1 = var_14

if (zmm1.d f>= zmm0_1[0])
    zmm1 = _mm_min_ss(zmm1.d, zmm3[0])
else
    zmm1 = zmm0_1[0].q

float zmm4[0x4] = var_18

if (not(zmm4[0] < zmm0_1[0]))
    zmm0_1 = _mm_min_ss(zmm4[0], zmm3[0])

*arg3 = (_mm_unpacklo_ps(zmm0_1, zmm1)).q
arg3[1].d = result
return result
