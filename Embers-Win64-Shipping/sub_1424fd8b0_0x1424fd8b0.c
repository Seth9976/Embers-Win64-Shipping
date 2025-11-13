// 函数: sub_1424fd8b0
// 地址: 0x1424fd8b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg2 + 0x38) = 0
void var_18

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_18, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_18)

void* rax_2 = *(arg2 + 0x38)
void* rcx_1 = &var_18

if (rax_2 != 0)
    rcx_1 = rax_2

int64_t rax_3 = *(arg2 + 0x20)
int64_t rsi
rsi.b = rax_3 != 0
*(arg2 + 0x20) = rsi + rax_3
int64_t zmm0 = *(rcx_1 + 0xc)
zmm0.d = zmm0.d f* zmm0.d
int32_t temp0_1 = _mm_sqrt_ss(0, _mm_max_ss(1f f- zmm0.d, 0))
int64_t var_28
int32_t result

if (temp0_1 f< 9.99999975e-05f)
    var_28 = 0x3f800000
    result = 0
else
    int64_t zmm2
    zmm2.d = 1f f/ temp0_1
    zmm0.d = zmm2.d f* *rcx_1
    float zmm1 = zmm2.d f* *(rcx_1 + 4)
    zmm2.d = zmm2.d f* *(rcx_1 + 8)
    var_28.d = zmm0.d
    var_28:4.d = zmm1
    result = zmm2.d

*arg3 = var_28
arg3[1].d = result
return result
