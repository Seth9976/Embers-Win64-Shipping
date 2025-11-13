// 函数: sub_14268a160
// 地址: 0x14268a160
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_98
int64_t rax_1 = __security_cookie ^ &var_98
void* rcx = *arg1
uint128_t zmm2 = zx.o(*(rcx + 0x26c))
int32_t rax_2 = *(rcx + 0x274)
float temp0[0x4] = _mm_max_ss((*(rcx + 0x480))[0], 0)
uint64_t var_58 = zmm2.q
int128_t* var_68 = nullptr
int32_t var_30 = _mm_shuffle_ps(zmm2, zmm2, 0x55).d
uint128_t zmm0 = *arg2
temp0[0] = temp0[0] f+ rax_2
int32_t var_38 = zmm2.d
int32_t var_48 = (zmm0 ^ 0x80000000).d
float var_34 = temp0[0]
int32_t var_44 = (*(arg2 + 8)).d
float var_40 = (*(arg2 + 4) ^ 0x80000000)[0]
var_58.d = (*arg3 ^ 0x80000000).d
float var_50_1 = (*(arg3 + 4) ^ 0x80000000)[0]
var_58:4.d = (*(arg3 + 8)).d
*arg7 = 0
sub_14260acd0(arg4, &var_48, &var_38, arg5, arg7, arg6, var_68)
int64_t result

if (*arg7 == 0)
    result.b = 0
else
    int128_t* var_68_1 = nullptr
    *arg9 = 0
    sub_14260acd0(arg4, &var_58, &var_38, arg5, arg9, arg8, var_68_1)
    
    if (*arg9 == 0)
        result.b = 0
    else
        result.b = 1

__security_check_cookie(rax_1 ^ &var_98)
return result
