// 函数: sub_140bd0f10
// 地址: 0x140bd0f10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_168
int64_t rax_1 = __security_cookie ^ &var_168
void*** result = j_sub_140a82f30(0x70)

if (result != 0)
    *result = &data_142e5d058
    void** const rax_2
    rax_2.b = 1
    result[4] = 0
    result[6] = 0
    result[0xc].d = 0
    *(result + 0x64) = 1
    
    if (arg2 != 0)
        sub_140a3c510(&result[4], arg2)
        rax_2 = zx.q(*(result + 0x64))
    
    char temp0_1 = rax_2.b
    rax_2.b = neg.b(rax_2.b)
    result[2] = sbb.q(rax_2, rax_2, temp0_1 != 0)
    *result = &data_142e86868
    int32_t var_138[0x42]
    sub_140ab1d30(data_143e1a8d8, &var_138, arg1 + 8)
    int64_t var_30
    
    if (var_138[0] == 0)
        result[2] = var_30
    result[0xc].b = 1
    
    if (result[4] != 0)
        void* rcx_2 = &result[8]
        char var_148 = *(result + 0x63)
        void* rax_6 = result[6]
        void*** result_1 = result
        
        if (rax_6 != 0)
            rcx_2 = rax_6
        
        result[4]((*(*rcx_2 + 8))(rcx_2), &var_148, &result_1)
    
    *(result + 0x61) = 1
    sub_140a99e90(&var_138, 1)

__security_check_cookie(rax_1 ^ &var_168)
return result
