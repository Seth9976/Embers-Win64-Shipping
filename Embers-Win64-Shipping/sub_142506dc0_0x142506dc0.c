// 函数: sub_142506dc0
// 地址: 0x142506dc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_28

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_28, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_28)

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

int32_t var_24
int64_t zmm3 = var_24
uint128_t zmm4 = var_28
int64_t rax_4 = *(arg2 + 0x20)
int32_t var_20
uint128_t zmm5 = var_20
int64_t zmm1
zmm1.d = zmm3.d f* zmm3.d
uint128_t zmm0
zmm0.d = zmm4.d f* zmm4.d
int64_t rcx_3
rcx_3.b = rax_4 != 0
*(arg2 + 0x20) = rcx_3 + rax_4
zmm1.d = zmm1.d f+ zmm0.d
int32_t zmm2 = _mm_sqrt_ss(0, zmm1.d)
int32_t var_20_1

if (zmm2 f<= 9.99999994e-09f)
    var_28.q = data_143dbb1f8.q
    var_20_1 = data_143dbb200
else
    zmm1.d = 1f f/ zmm2
    zmm4.d = zmm4.d f* zmm1.d
    zmm3.d = zmm3.d f* zmm1.d
    zmm0.d = zmm5.d f* zmm1.d
    var_28 = zmm4.d
    int32_t var_24_1 = zmm3.d
    var_20_1 = zmm0.d

uint64_t var_18 = var_28.q
zmm0 = arg_10
int32_t var_10 = var_20_1

if (zmm2 f< zmm0.d)
    zmm2 = zmm0.d
else
    zmm0 = arg_18
    
    if (not(zmm2 f< zmm0.d))
        zmm2 = zmm0.d

zmm0.d = var_18.d.d f* zmm2
zmm1.d = var_18:4.d.d f* zmm2
int32_t result = zmm5.d
*arg3 = (_mm_unpacklo_ps(zmm0, zmm1)).q
arg3[1].d = result
return result
