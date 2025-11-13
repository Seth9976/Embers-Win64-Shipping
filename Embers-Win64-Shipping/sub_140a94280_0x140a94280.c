// 函数: sub_140a94280
// 地址: 0x140a94280
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_138
int64_t rax_1 = __security_cookie ^ &var_138
void*** result_1 = j_sub_140a82f30(0x40)
void*** result

if (result_1 == 0)
    result = nullptr
else
    result_1[1].d = 1
    *(result_1 + 0xc) = 1
    *result_1 = &data_142e667b8
    result_1[2] = 0
    result_1[3] = 0
    __builtin_wcscpy(&result_1[4], u"`{}|")
    void** const var_f8 = &data_142da2668
    result_1[6] = 0
    result_1[7] = 0
    void* (* var_118)(void* arg1, int64_t* arg2, void* arg3) = sub_140aa3c20
    void*** var_108_1 = nullptr
    void* var_f0_1 = &result_1[2]
    sub_140b12e30(&result_1[5], &var_118)
    
    if (var_118 != 0)
        void** const* rcx_2 = &var_f8
        
        if (var_108_1 != 0)
            rcx_2 = var_108_1
        
        (*rcx_2)[2](rcx_2)
    
    void*** var_c8_1 = nullptr
    void** const var_b8 = &data_142da2668
    void* var_b0_1 = &result_1[2]
    void* (* var_d8)(void* arg1, int64_t* arg2, int64_t* arg3) = sub_140aa3a80
    sub_140b12e30(&result_1[5], &var_d8)
    
    if (var_d8 != 0)
        void** const* rcx_4 = &var_b8
        
        if (var_c8_1 != 0)
            rcx_4 = var_c8_1
        
        (*rcx_4)[2](rcx_4)
    
    void*** var_88_1 = nullptr
    void** const var_78 = &data_142da2668
    void* var_70_1 = &result_1[2]
    void* (* var_98)(void* arg1, int64_t* arg2, void* arg3) = sub_140aa3b10
    sub_140b12e30(&result_1[5], &var_98)
    
    if (var_98 != 0)
        void** const* rcx_6 = &var_78
        
        if (var_88_1 != 0)
            rcx_6 = var_88_1
        
        (*rcx_6)[2](rcx_6)
    
    void*** var_48_1 = nullptr
    void** const var_38 = &data_142da2668
    void* var_30_1 = &result_1[2]
    void* (* var_58)(void* arg1, int64_t* arg2, void* arg3) = sub_140aa3900
    sub_140b12e30(&result_1[5], &var_58)
    
    if (var_58 != 0)
        void** const* rcx_8 = &var_38
        
        if (var_48_1 != 0)
            rcx_8 = var_48_1
        
        (*rcx_8)[2](rcx_8)
    
    result = result_1

__security_check_cookie(rax_1 ^ &var_138)
return result
