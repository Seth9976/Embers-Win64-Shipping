// 函数: sub_140662e40
// 地址: 0x140662e40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1c8
int64_t rax_1 = __security_cookie ^ &var_1c8
int64_t rdx = arg1[0xe]
int64_t* result

if (rdx != 0)
    (*(*arg1 + 0x270))(arg5, rdx)
    int64_t* var_70_1 = arg1
    void*** var_88_1 = nullptr
    void** const var_78 = &data_142d83c50
    void*** var_c8_1 = nullptr
    void (* var_98_1)(int64_t* arg1) = sub_140663070
    int64_t* var_b0_1 = arg1
    void** const var_b8 = &data_142d83c50
    uint64_t (* var_d8_1)(int64_t* arg1) = sub_1406630f0
    void** const var_38 = &data_142d83c50
    uint64_t (* var_58_1)(int64_t* arg1) = sub_1406630a0
    uint64_t (* var_198)(int64_t* arg1) = sub_1406630a0
    void*** var_48_1 = nullptr
    int64_t* var_30_1 = arg1
    int64_t var_188 = 0
    sub_1406633e0(&var_38, &var_188)
    uint64_t (* var_158)(int64_t* arg1) = var_d8_1
    int64_t var_148 = 0
    
    if (var_d8_1 != 0)
        void** const* rcx_1 = &var_b8
        
        if (var_c8_1 != 0)
            rcx_1 = var_c8_1
        
        (**rcx_1)(rcx_1, &var_148)
    
    void (* var_118)(int64_t* arg1) = var_98_1
    int64_t var_108 = 0
    
    if (var_98_1 != 0)
        void** const* rcx_2 = &var_78
        
        if (var_88_1 != 0)
            rcx_2 = var_88_1
        
        (**rcx_2)(rcx_2, &var_108)
    
    result = sub_140663bd0(arg1[0xc], &var_118, &var_158, &var_198, arg2, arg3, arg4)
    
    if (var_58_1 != 0)
        void** const* rcx_4 = &var_38
        
        if (var_48_1 != 0)
            rcx_4 = var_48_1
        
        result = (*rcx_4)[2](rcx_4)
    
    if (var_d8_1 != 0)
        void** const* rcx_5 = &var_b8
        
        if (var_c8_1 != 0)
            rcx_5 = var_c8_1
        
        result = (*rcx_5)[2](rcx_5)
    
    if (var_98_1 != 0)
        void** const* rcx_6 = &var_78
        
        if (var_88_1 != 0)
            rcx_6 = var_88_1
        
        result = (*rcx_6)[2](rcx_6)
else
    int64_t var_1a8_1 = 0
    rdx.b = 2
    result = sub_140d23f50(u"Invalid WorldContextObject. Cannot execute.", rdx.b)

__security_check_cookie(rax_1 ^ &var_1c8)
return result
