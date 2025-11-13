// 函数: sub_141f250d0
// 地址: 0x141f250d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_58
int64_t rax_1 = __security_cookie ^ &var_58
int128_t zmm0 = *arg3
int128_t* var_38 = nullptr
int32_t var_30 = 4
sub_140638750(&var_38, 4, 0)
int128_t* rsi = var_38
*rsi = zmm0
int64_t result = sub_141f24e50(arg1, arg2, &var_38)

if (rsi != 0)
    result = sub_140a74f90(rsi)

__security_check_cookie(rax_1 ^ &var_58)
return result
