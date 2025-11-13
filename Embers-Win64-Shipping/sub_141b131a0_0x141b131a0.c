// 函数: sub_141b131a0
// 地址: 0x141b131a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_178
int64_t rax_1 = __security_cookie ^ &var_178
int32_t rax_2 = *(arg3 + 0x24)
int32_t var_148 = 0
int64_t rdx

if (rax_2 == 0x80000000)
    int64_t* rdx_1 = 0x10
    
    if (*(arg3 + 0x20) != 0)
        rdx_1 = 4
    
    rdx = *(rdx_1 + arg3)
else
    int32_t var_140_1 = 0
    rdx = rax_2.q

char result = sub_141a467f0(arg1 + 0x38, rdx, &var_148)

if (result != 0)
    int32_t rcx_1 = *(arg1 + 0xdc)
    char var_f8
    char result_1 = var_f8 | 3
    int64_t zmm0_1 = *(arg1 + 0x30)
    uint8_t var_111_1 = (rcx_1 u>> 1).b & 1
    char var_114_1 = *(arg1 + 0xd8)
    char var_113_1 = *(arg1 + 0xd9)
    char var_112_1 = *(arg1 + 0xdc) & 1
    uint8_t var_110_1 = (rcx_1 u>> 2).b & 1
    int128_t var_130_1 = *(arg1 + 0x20)
    void** const var_138
    int128_t* var_158_1 = &var_138
    int32_t var_118_1 = var_148
    var_138 = &data_143051308
    int64_t var_120_1 = zmm0_1
    void var_f0
    int128_t* rax_5 = sub_1405ab790(&var_f0, &arg4[0x22], arg4 + 0x124, &arg4[0x27], var_158_1)
    int64_t rdi_1 = sx.q(arg4[1].d)
    int32_t rcx_4 = (rdi_1 + 1).d
    arg4[1].d = rcx_4
    
    if (rcx_4 s> *(arg4 + 0xc))
        sub_1405c5190(arg4)
    
    sub_1405ab620(rdi_1 * 0xc8 + *arg4, rax_5)
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
    
    result = result_1
    
    if ((result & 1) != 0)
        void** const rcx_11 = &var_138
        
        if ((result & 2) == 0)
            rcx_11 = var_138
        
        char var_f8_1 = result & 0xfe
        result = (**rcx_11)(rcx_11, 0)
        
        if ((var_f8_1 & 2) == 0)
            result = sub_140a74f90(var_138)

__security_check_cookie(rax_1 ^ &var_178)
return result
