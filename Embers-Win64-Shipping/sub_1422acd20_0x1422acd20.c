// 函数: sub_1422acd20
// 地址: 0x1422acd20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_98
int64_t rax_1 = __security_cookie ^ &var_98
EnterCriticalSection(arg1 + 0x10)
int128_t zmm1 = arg3[1]
int64_t var_28 = data_143de5458
int128_t var_58 = *arg3
int128_t zmm0 = arg3[2]
int64_t var_70
int64_t* var_68 = &var_70
int128_t* var_60 = &var_58
int128_t var_48 = zmm1
int128_t var_38 = zmm0
var_70 = arg2
int32_t var_78
int32_t* result = sub_142284a80(arg1 + 0x38, &var_78, &var_68, nullptr)

if (arg1 != -0x10)
    result = LeaveCriticalSection(arg1 + 0x10)

__security_check_cookie(rax_1 ^ &var_98)
return result
