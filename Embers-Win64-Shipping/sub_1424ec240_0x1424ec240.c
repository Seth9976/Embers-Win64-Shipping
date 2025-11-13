// 函数: sub_1424ec240
// 地址: 0x1424ec240
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool cond:0 = *(arg2 + 0x20) == 0
float arg_10 = 0f

if (cond:0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &arg_10, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

bool cond:1 = *(arg2 + 0x20) == 0
float arg_18 = 0f

if (cond:1)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &arg_18, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_18)

bool cond:2 = *(arg2 + 0x20) == 0
float arg_20 = 0f

if (cond:2)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &arg_20, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_20)

int64_t result = *(arg2 + 0x20)
float zmm1 = arg_10
float zmm0 = arg_18
int64_t rcx_3
rcx_3.b = result != 0
*(arg2 + 0x20) = rcx_3 + result

if (not(zmm1 < zmm0))
    zmm0 = _mm_min_ss(arg_20, zmm1)

*arg3 = zmm0
return result
