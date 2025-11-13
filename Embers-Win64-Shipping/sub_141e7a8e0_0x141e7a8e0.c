// 函数: sub_141e7a8e0
// 地址: 0x141e7a8e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_e8
int64_t rax_1 = __security_cookie ^ &var_e8
uint64_t result

if (*arg3 != 0xff)
    int64_t rax_5 = *arg2
    void* var_68 = nullptr
    
    if (rax_5 != 0)
        void* rax_6 = arg2[2]
        void* rcx_2 = &arg2[4]
        
        if (rax_6 != 0)
            rcx_2 = rax_6
        
        (**rcx_2)(rcx_2, &var_68)
    
    void*** rax_8 = sub_140a82f30(0x60, 0x10)
    *rax_8 = &data_142d577c0
    rax_8[2] = rax_5
    rax_8[4] = 0
    void var_58
    
    if (rax_8[2] != 0)
        void* r8 = var_68
        void* rcx_4 = &var_58
        
        if (r8 != 0)
            rcx_4 = r8
        
        (**rcx_4)(rcx_4)
    
    rax_8[0xa].b = arg1
    *rax_8 = &data_143251948
    int64_t (* var_b8)(void* arg1)
    int64_t (* rax_11)(void* arg1) = var_b8
    
    if (rax_8 != -0x10)
        rax_11 = sub_141e766b0
    
    void*** var_a8_1 = rax_8
    int32_t rcx_5 = *arg3
    var_b8 = rax_11
    result = sub_140a20e40(rcx_5, &var_b8)
    
    if (rax_5 != 0)
        void* rax_12 = var_68
        void* rcx_6 = &var_58
        
        if (rax_12 != 0)
            rcx_6 = rax_12
        
        result = (*(*rcx_6 + 0x10))(rcx_6)
else
    void* rax_2 = arg2[2]
    char var_c8 = arg1
    void* rcx = &arg2[4]
    
    if (rax_2 != 0)
        rcx = rax_2
    
    result = (*arg2)((*(*rcx + 8))(rcx), &var_c8)

__security_check_cookie(rax_1 ^ &var_e8)
return result
