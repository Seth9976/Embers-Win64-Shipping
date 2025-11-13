// 函数: sub_141d016c0
// 地址: 0x141d016c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_b8
int64_t rax_1 = __security_cookie ^ &var_b8
int32_t rdi = 0
int128_t var_88 = data_14321e0d0
int64_t result_1
__builtin_memset(&result_1, 0, 0x1c)
int64_t var_58
__builtin_memset(&var_58, 0, 0x1a)
int64_t result

if (sub_141d02260(arg1, arg2, nullptr, &var_88) == 0)
    int32_t rcx = 0
    int32_t var_8c_1 = 0
    result = -1
    int64_t var_98 = 0
    int32_t var_90_1 = 0
    
    if (arg2 != 0 && *arg2 != 0)
        int64_t rbx_1 = -1
        
        do
            rbx_1 += 1
        while (arg2[rbx_1] != 0)
        
        if (rbx_1.d + 1 s> 0)
            sub_1405947f0(&var_98, rbx_1.d + 1)
            rcx = var_8c_1
            rdi = var_90_1
        
        int32_t rax_3 = rdi + rbx_1.d + 1
        int32_t var_90_2 = rax_3
        
        if (rax_3 s> rcx)
            sub_140594770(&var_98)
        
        UnDecorator::getReferenceType(var_98, arg2, (rbx_1.d + 1) * 2)
    
    char rax_4 = sub_141d06c80(arg1, &var_98)
    int64_t rcx_5 = var_98
    
    if (rcx_5 != 0)
        sub_140a74f90(rcx_5)
    
    if (rax_4 != 0)
        int64_t* rcx_6 = *(arg1 + 8)
        result = (*(*rcx_6 + 0x78))(rcx_6, arg2)
else
    result = var_88:8.q
    int64_t var_48
    
    if (var_48:4.d != 0)
        result = result_1

sub_140a1d5c0(&var_58)
__security_check_cookie(rax_1 ^ &var_b8)
return result
