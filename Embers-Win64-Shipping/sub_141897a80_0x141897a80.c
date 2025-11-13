// 函数: sub_141897a80
// 地址: 0x141897a80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_98
int64_t rax_1 = __security_cookie ^ &var_98
int64_t var_68 = arg1
void*** var_48 = nullptr
int64_t var_78
int64_t* var_60 = &var_78
var_78 = 0
int128_t var_30 = arg4.o
int64_t* var_20 = var_60
void** const var_38 = &data_142e345d8
int64_t (* var_58)(int64_t** arg1, uint128_t* arg2, int64_t* arg3, int64_t* arg4) = sub_14187b000
int64_t* result = sub_141884840(arg3, arg2, &var_58)

if (var_58 != 0)
    void** const* rcx_1 = &var_38
    
    if (var_48 != 0)
        rcx_1 = var_48
    
    result = (*rcx_1)[2](rcx_1)

__security_check_cookie(rax_1 ^ &var_98)
return result
