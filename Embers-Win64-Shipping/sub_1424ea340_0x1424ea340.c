// 函数: sub_1424ea340
// 地址: 0x1424ea340
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_18

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_18, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_18)

float var_28

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_28, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_28)

int64_t rax_3 = *(arg2 + 0x20)
float zmm1 = var_28
int64_t zmm0 = (zx.o(0)).q
int64_t rcx_2
rcx_2.b = rax_3 != 0
*(arg2 + 0x20) = rcx_2 + rax_3
float var_24
int32_t var_20

if (zmm1 f== zmm0.d || var_24 f== zmm0.d || var_20 f== zmm0.d)
    sub_1420d0d50()
    zmm1 = data_143dbb1fc
    var_28 = data_143dbb1f8.d
    zmm0 = data_143dbb200
else
    zmm0.d = var_18.d f/ zmm1
    var_28 = zmm0.d
    int32_t var_10
    zmm0.d = var_10.d f/ var_20
    float var_14
    zmm1 = var_14 / var_24

int32_t result = zmm0.d
float var_24_1 = zmm1
*arg3 = var_28.q
arg3[1].d = result
return result
