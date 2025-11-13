// 函数: sub_1424ea0d0
// 地址: 0x1424ea0d0
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

int64_t rax_3 = *(arg2 + 0x20)
int64_t zmm0 = arg_10
int64_t rcx_2
rcx_2.b = rax_3 != 0
*(arg2 + 0x20) = rcx_2 + rax_3
int32_t var_38
float zmm1

if (zmm0.d f!= 0f)
    float zmm2 = 1f f/ zmm0.d
    zmm0.d = var_28.d f* zmm2
    float var_24
    zmm1 = var_24 * zmm2
    var_38 = zmm0.d
    int32_t var_20
    zmm0.d = var_20.d f* zmm2
else
    sub_1420d0d10()
    zmm1 = data_143dbb1fc
    var_38 = data_143dbb1f8.d
    zmm0 = data_143dbb200

int32_t result = zmm0.d
float var_34 = zmm1
*arg3 = var_38.q
arg3[1].d = result
return result
