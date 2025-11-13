// 函数: sub_141da3750
// 地址: 0x141da3750
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_e8
int64_t rax_1 = __security_cookie ^ &var_e8
uint64_t result = sub_141da10e0(arg1, arg2)

if (*(arg1 + 0x170) == 0)
    result = zx.q(*(arg1 + 0x398))
    uint128_t zmm6
    uint128_t var_18_1 = zmm6
    int64_t performanceCount
    
    if (result.d != 1)
        if (result.d == 2)
            for (uint64_t* i = *(arg1 + 0x180); i != &i[sx.q(*(arg1 + 0x188)) * 2]; i = &i[2])
                result = *i
                
                if (*(result + 0x18) == 5)
                    goto label_141da3a1e
            
            result = *(arg1 + 0x190)
            
            if (result == 0 || *(result + 0x18) != 5)
                int32_t rax_3 = *(arg1 + 0x174)
                
                if (rax_3 != 0)
                    int32_t rcx_2 = *(arg1 + 0x148)
                    int32_t rdx_5 = *(arg1 + 0x14c)
                    
                    if (rcx_2 u<= rdx_5 && rax_3 u>= rcx_2 && rax_3 u<= rdx_5)
                        *(arg1 + 0x174) = 0
                
                if (*(arg1 + 0x158) s>= *(arg1 + 0x140) && *(arg1 + 0xe8) == 0)
                    *(arg1 + 0x2ec) = 1
                
                result = sub_141d9c730(arg1)
                
                if (*(arg1 + 0x190) == 0 && *(arg1 + 0x188) s<= 0 && *(arg1 + 0xe8) != 0)
                    result = QueryPerformanceCounter(&performanceCount)
                    zmm6 = 0x4170000000000000
                    
                    if (not(float.d(performanceCount) f* data_143d796f8 f+ zmm6.q f- *(arg1 + 0x168)
                            <= 10.0))
                        int64_t rbx_1 = *(arg1 + 0xe0)
                        int64_t var_b8
                        sub_141d9ef80(arg1, &var_b8, arg1 + 0x3a0)
                        performanceCount = arg1
                        void** const var_48 = &data_142d42ed8
                        int64_t var_c0_1 = rbx_1
                        int128_t zmm0_3 = performanceCount.o
                        void (* var_68)(int64_t* arg1, int32_t* arg2) = sub_141d9bc60
                        void*** var_58_1 = nullptr
                        void** const var_88 = &data_142da2668
                        void*** var_98_1 = nullptr
                        int64_t (* var_a8)(int64_t* arg1, int64_t* arg2) = sub_141d9b980
                        int128_t var_40_1 = zmm0_3
                        int64_t var_80_1 = arg1
                        sub_141d92760(arg1, 0x10, &var_a8, &var_68)
                        
                        if (var_a8 != 0)
                            void** const* rcx_7 = &var_88
                            
                            if (var_98_1 != 0)
                                rcx_7 = var_98_1
                            
                            (*rcx_7)[2](rcx_7)
                        
                        if (var_68 != 0)
                            void** const* rcx_8 = &var_48
                            
                            if (var_58_1 != 0)
                                rcx_8 = var_58_1
                            
                            (*rcx_8)[2](rcx_8)
                        
                        result = QueryPerformanceCounter(&performanceCount)
                        int64_t rcx_10 = var_b8
                        *(arg1 + 0x168) = float.d(performanceCount) f* data_143d796f8 f+ zmm6.q
                        
                        if (rcx_10 != 0)
                            result = sub_140a74f90(rcx_10)
    else if (*(arg1 + 0x190) == 0 && *(arg1 + 0x188) s<= 0)
        zmm6 = *data_143f38800
        result = QueryPerformanceCounter(&performanceCount)
        int64_t zmm1 = float.d(performanceCount)
        int64_t temp0_1 = _mm_cvtps_pd(zmm6.q)
        
        if (not(zmm1 f* data_143d796f8 f+ 16777216.0 f- *(arg1 + 0x160) f<= temp0_1))
            result = sub_141d9e460(arg1, *(arg1 + 0xb8))

label_141da3a1e:
__security_check_cookie(rax_1 ^ &var_e8)
return result
