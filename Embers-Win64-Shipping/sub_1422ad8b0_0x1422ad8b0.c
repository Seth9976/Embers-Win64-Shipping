// 函数: sub_1422ad8b0
// 地址: 0x1422ad8b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_328
int64_t rax_1 = __security_cookie ^ &var_328
int32_t var_1ac
int32_t var_1ac_1 = var_1ac & 0xfffffff0
int32_t rsi = 0
int32_t var_4c
int32_t var_4c_1 = var_4c & 0xfffffff0
int128_t var_2e8
__builtin_memset(&var_2e8, 0, 0x30)
int128_t var_1a8
__builtin_memcpy(&var_1a8, 
    "\x00\x00\x00\x41\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x80\x3f", 0x14)
int128_t var_48
__builtin_memcpy(&var_48, 
    "\x00\x00\x00\x41\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x80\x3f\x00\x00\x80\x3f", 0x14)
int64_t var_1f8 = 0
int32_t var_1f0 = 0
int64_t var_1ec = 0x10
int64_t var_1e0
__builtin_memset(&var_1e0, 0, 0x20)
int64_t var_1c0 = -1
int32_t var_1b8 = 0xffffffff
int32_t var_1b4 = 0
int32_t var_1b0 = 0x42000000
int128_t var_188
__builtin_memset(&var_188, 0, 0x30)
int64_t var_98 = 0
int32_t var_90 = 0
int64_t var_8c = 0x10
int64_t var_80
__builtin_memset(&var_80, 0, 0x20)
int64_t var_60 = -1
int32_t var_58 = 0xffffffff
int32_t var_54 = 0
int32_t var_50 = 0x42000000
sub_1422a3ab0(&var_2e8)
sub_1422a3ab0(&var_188)
uint128_t zmm2 = zx.o(*arg3)
int64_t zmm0 = *arg2
int32_t rax_2 = arg3[1].d
uint128_t zmm1 = zmm2
zmm2.d = zmm2.d f* *arg2
int32_t rax_3 = arg2[1].d
zmm1.d = _mm_shuffle_ps(zmm1, zmm1, 0x55).d f* *(arg2 + 4)
int32_t var_2f0 = rax_3
int64_t var_2f8 = zmm0
zmm0.d = rax_2.d f* arg2[1].d
zmm1.d = zmm1.d f+ zmm2.d
zmm1.d = zmm1.d f+ zmm0.d
int32_t var_2ec = zmm1.d
int32_t rax_4 = sub_1422adac0(arg1, &var_2f8, &var_2e8, &var_188)

if (rax_4 != 2)
    if (rax_4 == 3)
        sub_14228a5e0(arg1, &var_2e8)
    
    rsi = arg1[0x1f].d

if (var_98 != 0)
    sub_140a74f90(var_98)

if (var_1f8 != 0)
    sub_140a74f90(var_1f8)

__security_check_cookie(rax_1 ^ &var_328)
return zx.q(rsi)
