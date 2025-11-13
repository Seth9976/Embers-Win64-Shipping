// 函数: sub_142775ef0
// 地址: 0x142775ef0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_10 = arg2
void var_98
int32_t* result = __security_cookie ^ &var_98
int32_t* result_1 = result

if (arg2 != 0)
    int64_t rax_1 = *arg3
    int64_t var_58 = rax_1
    void* var_48 = nullptr
    
    if (rax_1 != 0)
        void* rax_2 = arg3[2]
        void* rcx = &arg3[4]
        
        if (rax_2 != 0)
            rcx = rax_2
        
        (**rcx)(rcx, &var_48)
    
    int64_t* var_70 = &arg_10
    int64_t* var_68_1 = &var_58
    void var_78
    result = sub_1427748a0(arg1 + 0x218, &var_78, &var_70, nullptr)
    
    if (var_58 != 0)
        void* rax_4 = var_48
        void var_38
        void* rcx_2 = &var_38
        
        if (rax_4 != 0)
            rcx_2 = rax_4
        
        result = (*(*rcx_2 + 0x10))(rcx_2)

if (*arg3 != 0)
    void* rax_6 = arg3[2]
    void* rcx_3 = &arg3[4]
    
    if (rax_6 != 0)
        rcx_3 = rax_6
    
    result = (*(*rcx_3 + 0x10))(rcx_3)

__security_check_cookie(result_1 ^ &var_98)
return result
