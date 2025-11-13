// 函数: sub_140de74e0
// 地址: 0x140de74e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_118
int64_t rax_1 = __security_cookie ^ &var_118
void* rdi = *arg2
int128_t zmm6 = data_1439ae708
int32_t rax_2 = arg2[6].d
bool cond:0 = *(rdi + 0x20) != 1
float zmm0[0x4] = *(rdi + 0x48)
zmm0[0] = zmm0[0] f/ arg2[9].d
char r13 = *(arg2 + 0x4d)
zmm6.d = zmm6.d f+ _mm_max_ss(zmm0[0], 0x3f800000)[0]
zmm6.d = zmm6.d f* 0.5f
zmm6.d = zmm6.d f+ 1f
float var_b8[0x4]
int32_t r15
int32_t zmm6_1
int32_t zmm7

if (cond:0)
    char r8_1 = arg1[5].b
    var_b8 = *(rdi + 8)
    int32_t var_c4
    zmm6_1, zmm7 = sub_140ae16d0(&var_b8, &var_c4, r8_1)
    r15 = var_c4
else
    int32_t var_c8
    zmm6_1, zmm7 = sub_140ae16d0(*(rdi + 0x18) + 8, &var_c8, arg1[5].b)
    r15 = var_c8

int128_t zmm1 = data_142d3f660
char var_e0 = 0
char var_f0 = 4
char var_f8 = 2
var_b8[0] = *(rdi + 0x48)
var_b8[1].q = 0x3f800000
var_b8[3] = 0
int128_t var_a8 = zmm1
int128_t* rax_3 = sub_140e0db30(arg1, rax_2, &var_b8, 0, var_f8, var_f0, r13, var_e0, arg2)
int32_t zmm2 = *(rdi + 0x28)
int32_t zmm3 = *(rdi + 0x2c)
int32_t zmm0_2 = data_143dbb1f0.d
int32_t zmm1_1 = data_143dbb1f0:4.d
int128_t* var_98 = rax_3
int32_t var_80 = zmm2
int32_t var_7c = zmm3
int32_t var_88 = zmm2
int32_t var_84 = zmm3
int32_t var_78 = zmm0_2
int32_t var_74 = zmm1_1
int32_t var_70 = zmm6_1
void* var_90 = &arg2[1]
int32_t var_6c = 1
int32_t var_68 = r15
int64_t result

if (*(rdi + 0x20) s> 1)
    var_e0.q = arg1
    char var_e8
    var_e8.q = rdi + 0x40
    var_f0.q = rdi + 0x38
    var_f8.q = rdi + 0x30
    result = sub_140de8800(&var_98, rdi + 0x18, 1, rdi + 0x28, var_f8, var_f0, var_e8, var_e0)
else
    var_f0.d = zmm7
    var_f8.q = &var_98
    sub_140e25c20(rdi + 0x28, rdi + 0x30, rdi + 0x38, rdi + 0x40, var_f8, var_f0)
    result = sub_140e10e60(&var_98, rdi + 0x40, &var_68)

__security_check_cookie(rax_1 ^ &var_118)
return result
