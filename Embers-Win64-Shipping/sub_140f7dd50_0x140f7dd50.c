// 函数: sub_140f7dd50
// 地址: 0x140f7dd50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_a8
int64_t rax_1 = __security_cookie ^ &var_a8
int128_t zmm6 = *(arg1 + 0x630)
float zmm1 = 1f f/ zmm6.d
int64_t var_68 = 0x3f800000
int32_t var_60 = 0
int64_t var_84 = 0
int64_t var_78 = 0
int32_t var_88 = zmm6.d
int32_t var_7c = zmm6.d
float zmm0 = zmm1 * *arg2
zmm1 = zmm1 * arg2[1]
float var_70 = zmm0
float var_6c = zmm1
int32_t var_54[0x6]
sub_1408b8950(&var_54, &var_88, &arg2[7])
zmm6.d = zmm6.d f* arg2[2]
int64_t var_5c = 0
char var_3c
char var_3c_1 = var_3c ^ ((arg2[0xd].b ^ var_3c) & 1)
var_68:4.d = arg2[3]
float var_60_1 = arg2[4]
var_68.d = zmm6.d
int64_t* rcx_2 = **(arg1 + 0x2d8)
int64_t result = (*(*rcx_2 + 0x38))(rcx_2, &var_70, arg3)
__security_check_cookie(rax_1 ^ &var_a8)
return result
