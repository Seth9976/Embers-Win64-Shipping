// 函数: sub_141df42a0
// 地址: 0x141df42a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_128
int64_t rax_1 = __security_cookie ^ &var_128
uint32_t zmm3[0x4] = data_143f393b0
float var_e8 = (*arg3)[0]
char var_ec = arg6
int32_t rax_6 = *(arg1 + 0x280)
float var_f8 = arg7[0]
uint32_t var_e4 = (*(arg3 + 4))[0]
uint32_t temp0[0x4] = __andps_xmmxud_memxud(zmm3, data_143f393c0)
int32_t var_78 = rax_6
int64_t var_70
__builtin_memset(&var_70, 0, 0x38)
int64_t* var_108 = arg2
zmm3[0].q = zx.o(0) u>> 0x40
float var_a8[0x4] = _mm_shuffle_ps(zx.o(0), zmm3, 0xc4)
int64_t* var_38 = &data_143f39940
float var_30 = arg8[0]
int32_t var_f0 = 0x3f800000
char var_c8 = 0
int32_t var_c4 = 0
int32_t var_f4 = 0x3f800000
char var_b8 = 0
int32_t var_b4 = 0
int128_t var_98 = zx.o(0)
uint32_t var_88[0x4] = temp0
int64_t var_2c = 0
int32_t var_24 = 0
int16_t var_20 = 0x100
char var_1e = 1
int64_t result = (*(*arg2 + 0x260))(arg2, &var_108, arg1 + 0x210, &var_b8, var_108, arg9, var_f8, 
    var_f0, var_e8, arg5, arg4, arg10, var_c8)
int64_t rcx_1 = var_70

if (rcx_1 != 0)
    result = sub_140a74f90(rcx_1)

__security_check_cookie(rax_1 ^ &var_128)
return result
