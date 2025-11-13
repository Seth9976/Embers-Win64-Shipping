// 函数: sub_14064ef20
// 地址: 0x14064ef20
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
void* rdi = &var_18

if (rax_2 != 0)
    rdi = rax_2

float var_28

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_28, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_28)

int32_t arg_10 = (zx.o(0)).d

if (*(arg2 + 0x20) == 0)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &arg_10, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

int64_t result = *(arg2 + 0x20)
float zmm0_1 = var_28
int32_t var_24
uint32_t zmm2[0x4] = var_24
int64_t rsi
rsi.b = result != 0
*(arg2 + 0x20) = rsi + result
zmm2[0] = zmm2[0] f* *(rdi + 4)
float var_20
float zmm1 = var_20 f* *(rdi + 8)
zmm2[0] = zmm2[0] f+ zmm0_1 f* *rdi
zmm0_1 = arg_10
zmm2[0] = zmm2[0] f+ zmm1
zmm2[0] = zmm2[0] f- *(rdi + 0xc)
result.b = zmm0_1 f> __andps_xmmxud_memxud(zmm2, data_142d3f770)[0]
*arg3 = result.b
return result
