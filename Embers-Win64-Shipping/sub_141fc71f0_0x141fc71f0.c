// 函数: sub_141fc71f0
// 地址: 0x141fc71f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1a8
int64_t rax_1 = __security_cookie ^ &var_1a8
float var_150
void var_140
(*(*arg1 + 0x6f8))(arg1, &var_150, &var_140)
void var_118
memset(&var_118, 0, 0x88)
char var_168 = var_168
int32_t var_110 = 0x3f800000
int64_t var_160 = 0
void var_88
sub_141eb54c0(&var_88, 0, &var_168, 1, arg1)
void var_130
int32_t* rax_4 = sub_140ae4210(&var_140, &var_130)
var_160.d = *rax_4 * 100000f + var_150
float var_148
float var_158 = var_148 + rax_4[2] f* 100000f
float var_14c
var_160:4.d = var_14c + rax_4[1] f* 100000f
int64_t* var_188
var_188.d = 2
char result = sub_141ec6a20((*(*arg1 + 0x150))(arg1), &var_118, &var_150, &var_160, var_188.b, 
    &var_88, &data_143f3a660)

if (result != 0)
    result = (*(*arg1 + 0xdd8))(arg1, &var_118)

int64_t var_28

if (var_28 != 0)
    result = sub_140a74f90(var_28)

int64_t var_48

if (var_48 != 0)
    result = sub_140a74f90(var_48)

__security_check_cookie(rax_1 ^ &var_1a8)
return result
