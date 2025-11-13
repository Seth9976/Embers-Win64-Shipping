// 函数: sub_141068f00
// 地址: 0x141068f00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_88
int64_t rax_1 = __security_cookie ^ &var_88
int32_t rbx = arg2
int128_t var_38 = data_142f04060
int64_t* var_60 = nullptr
int32_t result

if (Ordinal_d3d12_101(arg1, arg5, &data_142efcae0, &var_60) s< 0)
    result.b = 0
else
    int64_t var_58
    __builtin_memset(&var_58, 0, 0x14)
    int128_t* var_50_1 = &var_38
    var_58.d = 4
    int64_t* rcx = var_60
    int32_t var_48
    
    if ((*(*rcx + 0x68))(rcx, 2, &var_58, 0x18) s>= 0)
        rbx = var_48
    *arg3 = rbx
    int64_t* rcx_1 = var_60
    *arg4 = (*(*rcx_1 + 0x38))(rcx_1)
    int64_t* rcx_2 = var_60
    (*(*rcx_2 + 0x10))(rcx_2)
    result.b = 1

__security_check_cookie(rax_1 ^ &var_88)
return result
