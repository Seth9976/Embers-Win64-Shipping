// 函数: sub_1424e6a70
// 地址: 0x1424e6a70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_20

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &arg_20, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_20)

bool cond:1 = *(arg2 + 0x20) == 0
int32_t arg_18 = 0

if (cond:1)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &arg_18, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_18)

bool cond:2 = *(arg2 + 0x20) == 0
int32_t arg_10 = 0

if (cond:2)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &arg_10, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

int64_t result = *(arg2 + 0x20)
int64_t zmm1 = arg4
float zmm0[0x4] = arg_18
int32_t zmm3 = arg_10
int64_t rcx_3
rcx_3.b = result != 0
bool cond:4 = zmm1.d f>= zmm0[0]
*(arg2 + 0x20) = rcx_3 + result

if (cond:4)
    zmm1 = _mm_min_ss(zmm1.d, zmm3)
else
    zmm1 = zmm0[0].q

float zmm2[0x4] = arg_20

if (not(zmm2[0] < zmm0[0]))
    zmm0 = _mm_min_ss(zmm2[0], zmm3)

*arg3 = (_mm_unpacklo_ps(zmm0, zmm1)).q
return result
