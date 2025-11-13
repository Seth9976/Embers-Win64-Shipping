// 函数: sub_142508300
// 地址: 0x142508300
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
int32_t arg_10 = (zx.o(0)).d

if (rax_2 != 0)
    rdi = rax_2

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &arg_10, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

int64_t result = *(arg2 + 0x20)
int64_t rsi
rsi.b = result != 0
*(arg2 + 0x20) = rsi + result
int32_t zmm0_1 = *(rdi + 4)
uint32_t zmm1[0x4] = *(rdi + 8)
float zmm2 = *rdi
zmm1[0] = zmm1[0] f* zmm1[0]
zmm2 = zmm2 * zmm2 f+ zmm0_1 f* zmm0_1
zmm0_1 = arg_10
zmm2 = zmm2 f+ zmm1[0]
zmm1 = 0x3f800000
zmm1[0] = 1f - zmm2
result.b = zmm0_1 f> __andps_xmmxud_memxud(zmm1, data_142d3f770)[0]
*arg3 = result.b
return result
