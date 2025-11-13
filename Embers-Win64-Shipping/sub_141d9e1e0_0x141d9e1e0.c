// 函数: sub_141d9e1e0
// 地址: 0x141d9e1e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_128
uint64_t result = __security_cookie ^ &var_128
uint64_t result_1 = result

if (*(arg1 + 0x3a8) s<= 1 || *(arg1 + 0x398) != 1 || *(arg1 + 0x388) == 0)
    *(arg1 + 0x388) = 0
    
    if (*(arg1 + 0x38c) != 0)
        result = sub_1405c5510(arg1 + 0x380, 0)
    
    *(arg1 + 0x390) = 0
else
    int32_t rax_1 = *(arg1 + 0xb8)
    void* r12_1 = arg1
    int32_t var_108_1 = rax_1
    int64_t rax_2 = *(arg1 + 0x380)
    int32_t r13_1 = *(arg1 + 0x14c)
    *(arg1 + 0x380) = 0
    int64_t var_f8_1 = rax_2
    int32_t rax_3 = *(arg1 + 0x388)
    void* var_90_1 = arg1
    int32_t var_104_1 = rax_3
    int32_t rax_4 = *(arg1 + 0x38c)
    *(arg1 + 0x388) = 0
    uint32_t count = *(arg1 + 0xf8)
    void** const var_98 = &data_142da2668
    int64_t r15_1 = *(arg1 + 0xf0)
    void*** var_a8_1 = nullptr
    int64_t (* var_b8)(int64_t* arg1, int32_t* arg2) = sub_141d9bc20
    int32_t var_100_1 = rax_4
    int64_t var_d0 = 0
    int32_t var_fc_1
    int64_t r15_2
    
    if (count != 0)
        sub_1405da9e0(&var_d0, count, 0)
        r15_2 = var_d0
        memcpy(r15_2, r15_1, count)
        r12_1 = arg1
        int32_t var_c4
        var_fc_1 = var_c4
        var_100_1 = rax_4
        var_104_1 = rax_3
        var_f8_1 = rax_2
        var_108_1 = rax_1
    else
        var_fc_1 = 0
        r15_2 = 0
    
    int64_t* rax_10 = sub_140a82f30(0x38, 8)
    *(rax_10 + 0x14) = var_108_1
    rax_10[1] = r12_1
    rax_10[2].d = r13_1
    rax_10[3] = var_f8_1
    rax_10[4].d = var_104_1
    *(rax_10 + 0x24) = var_100_1
    rax_10[5] = r15_2
    *(rax_10 + 0x34) = var_fc_1
    rax_10[6].d = count
    *rax_10 = &data_143239830
    int64_t (* var_78)(int64_t* arg1, int64_t* arg2)
    int64_t (* rax_11)(int64_t* arg1, int64_t* arg2) = var_78
    
    if (rax_10 != -8)
        rax_11 = j_sub_141d996d0
    
    var_78 = rax_11
    result = sub_141d92760(arg1, 9, &var_78, &var_b8)
    
    if (var_78 != 0)
        void var_58
        int64_t* rcx_4 = &var_58
        
        if (rax_10 != 0)
            rcx_4 = rax_10
        
        result = (*(*rcx_4 + 0x10))(rcx_4)
    
    if (var_b8 != 0)
        void** const* rcx_5 = &var_98
        
        if (var_a8_1 != 0)
            rcx_5 = var_a8_1
        
        result = (*rcx_5)[2](rcx_5)
    
    *(arg1 + 0x388) = 0
    
    if (*(arg1 + 0x38c) != 0)
        result = sub_1405c5510(arg1 + 0x380, 0)
    
    *(arg1 + 0x390) = 0

__security_check_cookie(result_1 ^ &var_128)
return result
