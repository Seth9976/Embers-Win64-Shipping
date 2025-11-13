// 函数: sub_140bce2e0
// 地址: 0x140bce2e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_b8
int64_t rax_1 = __security_cookie ^ &var_b8
void*** result = j_sub_140a82f30(0x80)

if (result != 0)
    *result = &data_142e5d058
    result[4] = 0
    result[6] = 0
    char r8 = 0
    result[0xc].d = 0
    *(result + 0x64) = 0
    *(result + 0x65) = arg5 != 0
    
    if (arg4 != 0)
        sub_140a3c510(&result[4], arg4)
        r8 = *(result + 0x64)
    
    int64_t rax_3 = -1
    
    if (r8 == 0)
        rax_3 = arg5
    
    result[2] = rax_3
    *result = &data_142e86880
    void* rcx
    
    if (arg5 == 0)
        int64_t rax_4
        rax_4, rcx = sub_140a82f30(arg3, 0, r8)
        result[2] = rax_4
    
    rcx.b = 1
    void*** rax_5 = sub_140a491d0(rcx.b)
    result[0xf] = rax_5
    void** rdx_1 = *rax_5
    rdx_1[3](rax_5, rdx_1)
    void* rcx_3 = data_143e1a8d8
    int64_t var_88_1 = result[2]
    int64_t var_98 = arg2
    void** const var_58 = &data_142e347e8
    int64_t (* var_78)(int64_t* arg1, int32_t* arg2) = sub_140bc34e0
    int64_t var_90_1 = arg3
    int32_t var_80_1 = 0
    void*** var_68_1 = nullptr
    void*** result_1 = result
    sub_140abd8c0(rcx_3, arg1 + 8, &var_98, &var_78)
    
    if (var_78 != 0)
        void** const* rcx_4 = &var_58
        
        if (var_68_1 != 0)
            rcx_4 = var_68_1
        
        void** const rdx_4 = *rcx_4
        rdx_4[2](rcx_4, rdx_4)

__security_check_cookie(rax_1 ^ &var_b8)
return result
