// 函数: sub_141abcb70
// 地址: 0x141abcb70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1b8
int64_t rax_1 = __security_cookie ^ &var_1b8
int128_t var_158
__builtin_memset(&var_158, 0, 0x20)
float zmm0[0x4] = data_143f2b810
zmm0[0].q = zx.o(0) u>> 0x40
float var_88[0x4] = __shufps_xmmps_memps_immb(zx.o(0), zmm0, 0xc4)
int128_t var_e8
__builtin_memset(&var_e8, 0, 0x20)
int128_t var_78 = zx.o(0)
float var_b8[0x4] = __andps_xmmxud_memxud(data_143f2b810, data_143f2b820)
float var_68[0x4] = var_b8

if (arg5 != 3)
    float var_78_2[0x4] = _mm_unpacklo_ps(_mm_unpacklo_ps((*arg6)[0], (*(arg6 + 8))[0]), 
        _mm_unpacklo_ps((*(arg6 + 4))[0], 0)[0].q)
    int32_t var_198_1 = arg5
    void var_168
    sub_141de5f60(arg2, arg3, &var_88, *sub_141ab9ed0(arg4, &var_168))
else
    int32_t var_198
    var_198.q = arg2
    void var_58
    int128_t* rax_3 = sub_141a89330(arg4, &var_58, arg6, arg3, var_198)
    var_88 = *rax_3
    float var_78_1[0x4] = rax_3[1]
    float var_68_1[0x4] = rax_3[2]

__builtin_memcpy(arg1, &var_88, 0x30)
__security_check_cookie(rax_1 ^ &var_1b8)
return arg1
