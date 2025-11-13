// 函数: sub_142508110
// 地址: 0x142508110
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

int64_t result = *(arg2 + 0x20)
int64_t rdi
rdi.b = result != 0
*(arg2 + 0x20) = rdi + result
uint32_t zmm0[0x4] = *(rcx_1 + 4)
float zmm2 = *rcx_1
float zmm1 = *(rcx_1 + 8)
zmm0[0] = zmm0[0] f* zmm0[0]
zmm2 = zmm2 * zmm2 f+ zmm0[0]
zmm0 = 0x3f800000
zmm0[0] = 1f - (zmm2 + zmm1 * zmm1)
uint32_t temp0[0x4] = __andps_xmmxud_memxud(zmm0, data_142d3f770)
temp0[0] f- 0.00999999978f
result.b = temp0[0] f< 0.00999999978f
*arg3 = result.b
return result
