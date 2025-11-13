// 函数: sub_1424e6d10
// 地址: 0x1424e6d10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_38

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_38, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_38)

bool cond:1 = *(arg2 + 0x20) == 0
int32_t arg_10 = 0

if (cond:1)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &arg_10, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

bool cond:2 = *(arg2 + 0x20) == 0
int32_t arg_18 = 0

if (cond:2)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &arg_18, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_18)

int32_t var_34
int64_t zmm4 = var_34
int64_t zmm5 = var_38
int32_t var_30
float zmm6[0x4] = var_30
int64_t rax_4 = *(arg2 + 0x20)
int64_t zmm2
zmm2.d = zmm4.d f* zmm4.d
int64_t zmm0
zmm0.d = zmm5.d f* zmm5.d
int64_t rcx_3
rcx_3.b = rax_4 != 0
zmm6[0] = zmm6[0] * zmm6[0]
*(arg2 + 0x20) = rcx_3 + rax_4
zmm2.d = zmm2.d f+ zmm0.d
zmm2.d = zmm2.d f+ zmm6[0]
int32_t zmm3 = _mm_sqrt_ss(0, zmm2.d)
int64_t var_28
float var_20

if (zmm3 f<= 9.99999994e-09f)
    var_28 = data_143dbb1f8.q
    var_20 = data_143dbb200
else
    zmm0.d = 1f f/ zmm3
    zmm5.d = zmm5.d f* zmm0.d
    zmm4.d = zmm4.d f* zmm0.d
    zmm6[0] = zmm6[0] f* zmm0.d
    var_28.d = zmm5.d
    var_28:4.d = zmm4.d
    var_20 = zmm6[0]

var_38.q = var_28
zmm0 = arg_10

if (zmm3 f< zmm0.d)
    zmm3 = zmm0.d
else
    zmm0 = arg_18
    
    if (not(zmm3 f< zmm0.d))
        zmm3 = zmm0.d

float zmm1[0x4] = var_38
zmm1[0] = zmm1[0] f* zmm3
zmm2.d = var_34.d f* zmm3
zmm0.d = var_20.d f* zmm3
*arg3 = (_mm_unpacklo_ps(zmm1, zmm2)).q
int32_t result = zmm0.d
arg3[1].d = result
return result
