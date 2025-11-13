// 函数: sub_140978290
// 地址: 0x140978290
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_88
int64_t rax_1 = __security_cookie ^ &var_88
sub_1407473e0(arg1 + 0x10, arg2)
void*** var_48 = nullptr
void** const var_38 = &data_142e347e8
void* var_30 = arg1
int64_t (* var_58)(int64_t* arg1, int64_t* arg2) = sub_140955280
void var_68
int64_t rbx_1 = *sub_140b58170(&var_68, "OnlineSubsystem", 1)
j_sub_140b3db50()
int64_t* result = sub_14093ee80(sub_140b3da90(&data_143de7d78, rbx_1), &var_58)

if (var_58 != 0)
    void** const* rcx_3 = &var_38
    
    if (var_48 != 0)
        rcx_3 = var_48
    
    result = (*rcx_3)[2](rcx_3)

__security_check_cookie(rax_1 ^ &var_88)
return result
