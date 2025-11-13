// 函数: sub_140b3f0c0
// 地址: 0x140b3f0c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_208
int64_t rax_1 = __security_cookie ^ &var_208
uint64_t rbx = zx.q(arg2)
uint64_t r8 = zx.q(arg2)
int32_t var_1e8
int128_t var_188
int32_t result
void var_168
int32_t result_1
int128_t zmm0

if (arg2 u<= 0x40)
    int128_t var_118
    int128_t* rcx_2 = &var_118
    
    if (arg2 u>= 0x40)
        memcpy(rcx_2, arg1, r8.d)
    else
        memcpy(rcx_2, arg1, r8.d)
        memset(&var_118 + rbx, 0, zx.q(0x40 - rbx.d))
    
    zmm0 = var_118
else
    __builtin_memcpy(&var_1e8, 
        "\x01\x23\x45\x67\x89\xab\xcd\xef\xfe\xdc\xba\x98\x76\x54\x32\x10\xf0\xe1\xd2\xc3", 0x14)
    void* var_128_1 = &var_168
    int64_t var_1d4_1 = 0
    sub_140b4ad80(&var_1e8, arg1, r8)
    sub_140b39010(&var_1e8)
    zmm0 = var_188
    result_1 = result
    int64_t var_104
    __builtin_memset(&var_104, 0, 0x2c)

int128_t zmm13 = *"\\\\\\\\\\\\\\\\"
int128_t zmm9 = (*"6666666666666666")[0].o
int128_t* rax_3 = j_sub_140a82f30(arg4 + 0x40)
*rax_3 = zmm9 ^ zmm0
rax_3[1] = zmm9 ^ result_1.o
int64_t var_fc
rax_3[2] = zmm9 ^ var_fc:4.o
int64_t var_ec
rax_3[3] = zmm9 ^ var_ec:4.o
memcpy(&rax_3[4], arg3, arg4.d)
__builtin_memcpy(&var_1e8, 
    "\x01\x23\x45\x67\x89\xab\xcd\xef\xfe\xdc\xba\x98\x76\x54\x32\x10\xf0\xe1\xd2\xc3", 0x14)
void* var_128_2 = &var_168
int64_t var_1d4_2 = 0
sub_140b4ad80(&var_1e8, rax_3, arg4 + 0x40)
sub_140b39010(&var_1e8)
j_sub_140a74f90(rax_3)
var_1e8 = 0x67452301
void* var_128_3 = &var_168
int32_t var_1e4 = 0xefcdab89
int32_t var_1e0 = 0x98badcfe
int32_t var_1dc = 0x10325476
int32_t var_1d8 = 0xc3d2e1f0
int64_t var_1d4_3 = 0x2a0
int128_t var_1c8 = zmm13 ^ zmm0
int128_t var_1b8 = zmm13 ^ result_1.o
int128_t var_1a8 = zmm13 ^ var_fc:4.o
int128_t var_198 = zmm13 ^ var_ec:4.o
sub_140b49300(&var_1e8, &var_1e8, &var_1c8)
var_1b8.d = result
var_1c8 = var_188
sub_140b39010(&var_1e8)
*arg5 = var_188
arg5[1].d = result
__security_check_cookie(rax_1 ^ &var_208)
return result
