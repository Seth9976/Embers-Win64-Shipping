// 函数: sub_142508c30
// 地址: 0x142508c30
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
int64_t rdi
rdi.b = rax_3 != 0
*(arg2 + 0x20) = rdi + rax_3
int32_t zmm2 = *rcx_1
int32_t var_28
int64_t zmm0_1

if (zmm2 f== 0f)
    var_28 = 0x7f7fc99e
else
    zmm0_1.d = 1f f/ zmm2
    var_28 = zmm0_1.d

zmm2 = *(rcx_1 + 4)

if (zmm2 f== 0f)
    int32_t var_24_1 = 0x7f7fc99e
else
    zmm0_1.d = 1f f/ zmm2
    int32_t var_24 = zmm0_1.d

zmm0_1 = *(rcx_1 + 8)
float result

if (zmm0_1.d f== 0f)
    result = 3.39999995e+38f
else
    result = 1f f/ zmm0_1.d

*arg3 = var_28.q
arg3[1].d = result
return result
