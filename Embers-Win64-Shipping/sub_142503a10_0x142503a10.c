// 函数: sub_142503a10
// 地址: 0x142503a10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float arg_20

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &arg_20, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_20)

*(arg2 + 0x38) = 0
void var_18

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_18, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_18)

void* rax_3 = *(arg2 + 0x38)
void* rdi = &var_18
*(arg2 + 0x38) = 0

if (rax_3 != 0)
    rdi = rax_3

int32_t arg_10 = (zx.o(0)).d

if (*(arg2 + 0x20) == 0)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &arg_10, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

float zmm2 = arg_20
int32_t* rcx_3 = &arg_10
int32_t* rax_5 = *(arg2 + 0x38)

if (rax_5 != 0)
    rcx_3 = rax_5

int64_t result = *(arg2 + 0x20)
int64_t rsi
rsi.b = result != 0
*(arg2 + 0x20) = rsi + result
int32_t temp0 = _mm_sqrt_ss((zx.o(0)).d, arg3 * arg3 + zmm2 * zmm2)
*rcx_3 = temp0

if (temp0 f<= 9.99999994e-09f)
    *rdi = data_143dbb1f0.d
    *(rdi + 4) = data_143dbb1f0:4.d
    return result

float zmm0_1 = 1f f/ temp0
*rdi = zmm2 * zmm0_1
*(rdi + 4) = arg3 * zmm0_1
return result
