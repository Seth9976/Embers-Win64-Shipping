// 函数: sub_1420efae0
// 地址: 0x1420efae0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_88
int64_t rax_1 = __security_cookie ^ &var_88
uint32_t zmm3[0x4] = data_143f48200
float zmm1[0x4] = zmm3
uint32_t temp0[0x4] = __andps_xmmxud_memxud(zmm3, data_143f481e0)
zmm1[0].q = zx.o(0) u>> 0x40
float var_58[0x4] = _mm_shuffle_ps(zx.o(0), zmm1, 0xc4)
int128_t var_48 = zx.o(0)
uint32_t var_38[0x4] = temp0

if (arg3 != 0)
    uint32_t var_48_1[0x4] = _mm_unpacklo_ps(_mm_unpacklo_ps(*arg3, (*arg3)[2][0].q), 
        _mm_unpacklo_ps((*arg3)[1], 0)[0].q)

uint128_t zmm6
float zmm7[0x4]

if (arg4 != 0)
    float var_68[0x4]
    float (* rax_2)[0x4]
    rax_2, zmm6, zmm7 = sub_140ade170(arg4, &var_68)
    var_58 = *rax_2

float zmm9[0x4]
void* result = sub_1420eeee0(arg1, arg2, &var_58, arg5, zmm6, zmm7, zmm9)
__security_check_cookie(rax_1 ^ &var_88)
return result
