// 函数: sub_14188c4b0
// 地址: 0x14188c4b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_10 = arg2
void var_98
int64_t rax_1 = __security_cookie ^ &var_98
int64_t r9
int64_t var_68 = r9
int64_t var_78
int64_t* var_60 = &var_78
void*** var_48 = nullptr
int128_t var_30 = (&arg_10).o
var_78 = 0
int64_t* var_20 = var_60
void** const var_38 = &data_142e345d8
int64_t (* var_58)(int64_t* arg1, int64_t* arg2, int64_t* arg3, int64_t* arg4) = sub_14187aff0
int64_t* result = sub_141884840(arg1, arg3, &var_58)

if (var_58 != 0)
    void** const* rcx = &var_38
    
    if (var_48 != 0)
        rcx = var_48
    
    result = (*rcx)[2](rcx)

__security_check_cookie(rax_1 ^ &var_98)
return result
