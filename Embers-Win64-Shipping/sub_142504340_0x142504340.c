// 函数: sub_142504340
// 地址: 0x142504340
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_68
int64_t rax_1 = __security_cookie ^ &var_68
uint32_t zmm3[0x4] = data_143f65c20
int128_t var_38 = zx.o(0)
uint32_t temp0[0x4] = __andps_xmmxud_memxud(zmm3, data_143f65be0)
zmm3[0].q = zx.o(0) u>> 0x40
float var_48[0x4] = _mm_shuffle_ps(zx.o(0), zmm3, 0xc4)
uint32_t var_28[0x4] = temp0
*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_48, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_48)

float (* rax_3)[0x4] = *(arg2 + 0x38)
float (* rcx_1)[0x4] = &var_48

if (rax_3 != 0)
    rcx_1 = rax_3

int64_t rax_4 = *(arg2 + 0x20)
int64_t rdi
rdi.b = rax_4 != 0
*(arg2 + 0x20) = rdi + rax_4
int64_t result
int32_t zmm0_1
zmm0_1, result = sub_1420d6560(rcx_1)
*arg3 = zmm0_1
__security_check_cookie(rax_1 ^ &var_68)
return result
