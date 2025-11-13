// 函数: sub_141b17cf0
// 地址: 0x141b17cf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_178
int64_t rax_1 = __security_cookie ^ &var_178
int32_t rax_2 = *(arg3 + 0x24)
int32_t var_148
int32_t rdx

if (rax_2 == 0x80000000)
    void* const rdx_1 = 0x10
    
    if (*(arg3 + 0x20) != 0)
        rdx_1 = 4
    
    rdx = (*(rdx_1 + arg3)).d
else
    var_148 = rax_2
    int32_t var_144_1 = 0
    rdx = (var_148.q).d

void* result = sub_141b17c70(arg1 + 0x48, rdx)

if (result != 0)
    int64_t* rax_3 = sub_140596d10(&var_148, result)
    int64_t rdi_1 = *rax_3
    *rax_3 = 0
    int32_t rsi_1 = rax_3[1].d
    int32_t rbp_1 = *(rax_3 + 0xc)
    rax_3[1] = 0
    int64_t rcx_2 = *rax_3
    
    if (rcx_2 != 0)
        sub_140a74f90(rcx_2)
    
    char var_f8
    char result_1 = var_f8 | 3
    void** const var_138 = &data_143059768
    int64_t var_130_1 = rdi_1
    int32_t var_128_1 = rsi_1
    int32_t var_124_1 = rbp_1
    void var_f0
    int128_t* rax_4 = sub_1405ab790(&var_f0, &arg4[0x22], arg4 + 0x124, &arg4[0x27], &var_138)
    int64_t rdi_2 = sx.q(arg4[1].d)
    int32_t rcx_4 = (rdi_2 + 1).d
    arg4[1].d = rcx_4
    
    if (rcx_4 s> *(arg4 + 0xc))
        sub_1405c5190(arg4)
    
    sub_1405ab620(rdi_2 * 0xc8 + *arg4, rax_4)
    char var_30
    
    if ((var_30 & 1) != 0)
        int64_t* var_70
        int64_t* rcx_8 = &var_70
        
        if ((var_30 & 2) == 0)
            rcx_8 = var_70
        
        (**rcx_8)(rcx_8, 0)
        
        if ((var_30 & 2) == 0)
            sub_140a74f90(var_70)
    
    int64_t var_90
    
    if (var_90 != 0)
        sub_140a74f90(var_90)
    
    result = zx.q(result_1)
    
    if ((result.b & 1) != 0)
        void** const rcx_11 = &var_138
        
        if ((result.b & 2) == 0)
            rcx_11 = var_138
        
        result.b &= 0xfe
        char var_f8_1 = result.b
        result = (**rcx_11)(rcx_11, 0)
        
        if ((var_f8_1 & 2) == 0)
            result = sub_140a74f90(var_138)

__security_check_cookie(rax_1 ^ &var_178)
return result
