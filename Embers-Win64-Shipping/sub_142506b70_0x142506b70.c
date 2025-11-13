// 函数: sub_142506b70
// 地址: 0x142506b70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_38

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_38, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_38)

int32_t var_28

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_28, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_28)

int32_t var_18

if (*(arg2 + 0x20) == 0)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &var_18, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_18)

int64_t rax_4 = *(arg2 + 0x20)
int32_t var_30
float zmm0[0x4] = var_30
float result_1
float result = result_1
int64_t rcx_3
rcx_3.b = rax_4 != 0
bool cond:4 = zmm0[0] < result
*(arg2 + 0x20) = rcx_3 + rax_4
float var_10

if (not(cond:4))
    result = _mm_min_ss(var_10, zmm0[0])
int32_t var_34
zmm0 = var_34
int32_t var_24
int64_t zmm1 = var_24
int32_t var_14

if (not(zmm0[0] f< zmm1.d))
    zmm1 = _mm_min_ss(var_14.d, zmm0[0])
int32_t zmm3 = var_38
zmm0 = var_28

if (not(zmm3 f< zmm0[0]))
    zmm0 = _mm_min_ss(var_18[0], zmm3)

*arg3 = (_mm_unpacklo_ps(zmm0, zmm1)).q
arg3[1].d = result
return result
