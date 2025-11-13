// 函数: sub_14277f9e0
// 地址: 0x14277f9e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_b8
int64_t rax_1 = __security_cookie ^ &var_b8
bool cond:0 = *(arg2 + 0x20) == 0
int32_t var_94 = 0

if (cond:0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_94, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_94)

bool cond:1 = *(arg2 + 0x20) == 0
int32_t var_98 = 0

if (cond:1)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_98, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_98)

bool cond:2 = *(arg2 + 0x20) == 0
uint32_t zmm3[0x4] = data_143f87db0
float zmm1[0x4] = zmm3
float var_48[0x4] = zx.o(0)
uint32_t temp0[0x4] = __andps_xmmxud_memxud(zmm3, data_143f87dc0)
zmm1[0].q = zx.o(0) u>> 0x40
float var_58[0x4] = _mm_shuffle_ps(zx.o(0), zmm1, 0xc4)

if (cond:2)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &var_58, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_58)

int64_t rax_5 = *(arg2 + 0x20)
int32_t zmm2 = var_98
int64_t rdx_6
rdx_6.b = rax_5 != 0
uint32_t var_88[0x4] = var_58
float var_78[0x4] = var_48
zmm1 = var_94
*(arg2 + 0x20) = rdx_6 + rax_5
uint32_t var_68[0x4] = temp0
void* result = sub_14277b700(arg1, zmm1, zmm2, &var_88)
*arg3 = result
__security_check_cookie(rax_1 ^ &var_b8)
return result
