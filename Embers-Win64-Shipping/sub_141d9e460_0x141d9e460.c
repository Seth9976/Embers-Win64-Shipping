// 函数: sub_141d9e460
// 地址: 0x141d9e460
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_128
void* result = __security_cookie ^ &var_128
void* result_1 = result
int32_t rsi = arg2

if (*(arg1 + 0x3a8) s> 1)
    for (int64_t* i = *(arg1 + 0x180); i != &i[sx.q(*(arg1 + 0x188)) * 2]; i = &i[2])
        result = *i
        
        if (*(result + 0x18) == 1)
            goto label_141d9e742
    
    result = *(arg1 + 0x190)
    
    if ((result == 0 || *(result + 0x18) != 1) && *(arg1 + 0x2e0) != 0)
        *(arg1 + 0x14c) = arg2
        void** const var_98 = &data_142da2668
        void* r12_1 = arg1
        int32_t r13_1 = *(arg1 + 0x148)
        *(arg1 + 0x148) = arg2
        int64_t (* var_b8)(int64_t* arg1, int32_t* arg2) = sub_141d9bc20
        int64_t performanceCount_1 = *(arg1 + 0x2d8)
        *(arg1 + 0x2d8) = 0
        int64_t performanceCount = performanceCount_1
        int32_t rax_1 = *(arg1 + 0x2e0)
        int32_t var_108_1 = rax_1
        int32_t rax_2 = *(arg1 + 0x2e4)
        *(arg1 + 0x2e0) = 0
        uint32_t count = *(arg1 + 0xf8)
        int64_t r15_1 = *(arg1 + 0xf0)
        void*** var_a8_1 = nullptr
        void* var_90_1 = arg1
        int32_t var_104_1 = rax_2
        int64_t var_d0 = 0
        int32_t var_100_1
        int64_t r15_2
        
        if (count != 0)
            sub_1405da9e0(&var_d0, count, 0)
            r15_2 = var_d0
            memcpy(r15_2, r15_1, count)
            rsi = arg2
            r12_1 = arg1
            int32_t var_c4
            var_100_1 = var_c4
            var_104_1 = rax_2
            var_108_1 = rax_1
            performanceCount = performanceCount_1
        else
            var_100_1 = 0
            r15_2 = 0
        
        int64_t* rax_7 = sub_140a82f30(0x38, 8)
        int64_t performanceCount_2 = performanceCount
        rax_7[1] = r12_1
        rax_7[2].d = r13_1
        *(rax_7 + 0x14) = rsi
        rax_7[3] = performanceCount_2
        rax_7[4].d = var_108_1
        *(rax_7 + 0x24) = var_104_1
        rax_7[5] = r15_2
        *(rax_7 + 0x34) = var_100_1
        rax_7[6].d = count
        *rax_7 = &data_143239830
        int64_t (* var_78)(int64_t* arg1, int64_t* arg2)
        int64_t (* rax_8)(int64_t* arg1, int64_t* arg2) = var_78
        
        if (rax_7 != -8)
            rax_8 = j_sub_141d99c80
        
        var_78 = rax_8
        sub_141d92760(arg1, 3, &var_78, &var_b8)
        
        if (var_78 != 0)
            void var_58
            int64_t* rcx_7 = &var_58
            
            if (rax_7 != 0)
                rcx_7 = rax_7
            
            (*(*rcx_7 + 0x10))(rcx_7)
        
        if (var_b8 != 0)
            void** const* rcx_8 = &var_98
            
            if (var_a8_1 != 0)
                rcx_8 = var_a8_1
            
            (*rcx_8)[2](rcx_8)
        
        *(arg1 + 0x2e0) = 0
        
        if (*(arg1 + 0x2e4) != 0)
            sub_1405c5510(arg1 + 0x2d8, 0)
        
        int32_t rax_13 = *(arg1 + 0x14c)
        *(arg1 + 0x158) += 1
        *(arg1 + 0x148) = rax_13
        *(arg1 + 0x2e8) = 0
        result = QueryPerformanceCounter(&performanceCount)
        *(arg1 + 0x160) = float.d(performanceCount) f* data_143d796f8 f+ 16777216.0

label_141d9e742:
__security_check_cookie(result_1 ^ &var_128)
return result
