// 函数: sub_1424f1430
// 地址: 0x1424f1430
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_b8
int64_t rax_1 = __security_cookie ^ &var_b8
int64_t var_88

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_88, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_88)

uint32_t zmm3[0x4] = data_143f65c20
int128_t var_48 = zx.o(0)
uint32_t temp0[0x4] = __andps_xmmxud_memxud(zmm3, data_143f65be0)
zmm3[0].q = zx.o(0) u>> 0x40
float var_58[0x4] = _mm_shuffle_ps(zx.o(0), zmm3, 0xc4)
uint32_t var_38[0x4] = temp0
*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_58, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_58)

float (* rax_4)[0x4] = *(arg2 + 0x38)
float (* rdi)[0x4] = &var_58

if (rax_4 != 0)
    rdi = rax_4

int64_t var_98

if (*(arg2 + 0x20) == 0)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &var_98, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_98)

int64_t rax_6 = *(arg2 + 0x20)
int64_t var_78 = var_98
int64_t rsi
rsi.b = rax_6 != 0
int64_t var_68 = var_88
int32_t var_90
int32_t var_70 = var_90
int32_t var_80
int32_t var_60 = var_80
*(arg2 + 0x20) = rsi + rax_6
char result = sub_1420c8160(&var_68, rdi, &var_78)
*arg3 = result
__security_check_cookie(rax_1 ^ &var_b8)
return result
