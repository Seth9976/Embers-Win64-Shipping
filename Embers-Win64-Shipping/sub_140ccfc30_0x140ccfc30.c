// 函数: sub_140ccfc30
// 地址: 0x140ccfc30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_b8
int64_t rax_1 = __security_cookie ^ &var_b8
uint64_t result

if (*(arg1 + 0x329) != 0)
    result = 1
else
    int64_t performanceCount[0x2]
    QueryPerformanceCounter(&performanceCount)
    int64_t zmm0 = float.d(performanceCount[0]) f* data_143d796f8
    *(arg1 + 0x32c) = arg3
    *(arg1 + 0x334) = arg2.o.d
    *(arg1 + 0x32b) = 0
    *(arg1 + 0x32d) = arg4
    *(arg1 + 0x338) = zmm0 f+ 0x4170000000000000
    int32_t result_1
    
    while (true)
        if (data_143de5452 == 0)
            void*** var_78_1 = nullptr
            void** const var_68 = &data_142d42d18
            int64_t (* var_88)() = sub_140594850
            int32_t result_2
            result_2, arg2, arg5, arg6 = GSI1::updateDataAddr(arg1, &var_88, arg5, arg6)
            result_1 = result_2
            
            if (var_88 != 0)
                void** const* rcx_2 = &var_68
                
                if (var_78_1 != 0)
                    rcx_2 = var_78_1
                
                (*rcx_2)[2](rcx_2)
        
        if (data_143de5452 != 0 || result_1 == 1)
            int32_t result_3
            result_3, arg2, arg5, arg6 = sub_140ccebc0(arg1, arg2)
            result_1 = result_3
            
            if (result_3 == 1)
                int32_t result_4
                int64_t zmm7_1
                result_4, arg2, arg5, arg6, zmm7_1 = sub_140ccea20(arg1, arg2)
                result_1 = result_4
                
                if (result_4 == 1)
                    int32_t result_5
                    result_5, arg2 = sub_140cce680(arg1, arg2)
                    result_1 = result_5
                    
                    if (result_5 == 1)
                        int32_t result_6
                        result_6, arg2 = sub_140cce490(arg1, arg2)
                        result_1 = result_6
                        
                        if (result_6 == 1)
                            if (*(arg1 + 0x327) == 0)
                                *(arg1 + 0x327) = result_6.b
                            
                            *(arg1 + 0x330) += 1
                            bool rax_4 = *(arg1 + 0x32b)
                            
                            if (rax_4 == 0 && *(arg1 + 0x32c) != 0)
                                QueryPerformanceCounter(&performanceCount)
                                arg2.o = zx.o(0)
                                arg2.q = float.d(performanceCount[0])
                                float zmm0_1[0x2] = _mm_cvtps_pd(*(arg1 + 0x334))
                                arg2.q = arg2.q f* data_143d796f8
                                arg2.q = arg2.q f+ zmm7_1
                                arg2.q = arg2.q f- *(arg1 + 0x338)
                                rax_4 = arg2.q f> zmm0_1
                                *(arg1 + 0x32b) = rax_4
                            
                            int32_t rbx_1
                            rbx_1.b = rax_4 != 0
                            result_1 = rbx_1 + 1
                            
                            if (rax_4 == 0)
                                int32_t result_7
                                result_7, arg2, arg5 = sub_140cb5b90(arg1)
                                result_1 = result_7
                                
                                if (result_7 == 1)
                                    if (*(arg1 + 0x328) == 0)
                                        *(arg1 + 0x328) = result_7.b
                                    
                                    char rax_5
                                    rax_5, arg2 = sub_140cc1900(arg1, finding existing exports", 1)
                                    int32_t rbx_2
                                    rbx_2.b = rax_5 != 0
                                    result_1 = rbx_2 + 1
                                    
                                    if (rax_5 == 0)
                                        int32_t result_8
                                        result_8, arg2 = sub_140ccedd0(arg1, arg2)
                                        result_1 = result_8
                                        
                                        if (result_8 == 1)
                                            int32_t result_9
                                            result_9, arg2, arg5, arg6 = sub_140cb9e30(arg1, arg7)
                                            result_1 = result_9
        
        if (result_1 != 2)
            if (result_1 == 0)
                *(*(arg1 + 0xa0) + 0x68) = 0
            
            break
        
        if (*(arg1 + 0x32c) != 0)
            if (*(arg1 + 0x32d) == 0)
                break
            
            char rax_6
            rax_6, arg2 = sub_140cc1900(arg1, u"Checking Full Timer", result_1 - 1)
            
            if (rax_6 != 0)
                break
    
    result = zx.q(result_1)

__security_check_cookie(rax_1 ^ &var_b8)
return result
