// 函数: sub_1428f1b10
// 地址: 0x1428f1b10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x40)
void** result = sub_1428db530(&data_143517520)

if (result != 0)
    int32_t rbp_1 = 0
    
    if (sub_142898c70(arg3) s<= 0)
        return result
    
    while (true)
        int64_t* rax_1 = sub_142898ea0(arg3, rbp_1)
        char* _Str1 = rax_1[1]
        char* r14_1 = rax_1[2]
        int32_t rax_2 = sub_1428f2160(result, arg2, rax_1)
        
        if (rax_2 s<= 0)
            if (rax_2 s< 0)
                break
            
            int32_t rax_4
            
            if (strcmp(_Str1, "onlyuser") != 0)
                int64_t rcx_6 = 0
                
                while (true)
                    char rax_5 = _Str1[rcx_6]
                    rcx_6 += 1
                    
                    if (rax_5 != *(rcx_6 + 0x14351773b))
                        for (int64_t i = 0; i != 7; )
                            char rcx_8 = _Str1[i]
                            i += 1
                            
                            if (rcx_8 != *(i + 0x1435177e3))
                                if (strcmp(_Str1, "indirectCRL") == 0)
                                    rax_4 = sub_1428e8de0(rax_1, &result[3])
                                    goto label_1428f1c81
                                
                                if (strcmp(_Str1, "onlysomereasons") == 0)
                                    rax_4 = sub_1428f2350(&result[2], r14_1)
                                    goto label_1428f1c81
                                
                                int32_t var_48_1 = 0x18b
                                sub_1428a5670(0x22, 0x9d, 0x6a, "crypto\x509v3\v3_crld.c", 0x18b)
                                *rax_1
                                int64_t var_38_1 = rax_1[2]
                                char const* const var_40_1 = ",value:"
                                var_48_1.q = rax_1[1]
                                sub_1428a4880(6)
                                goto label_1428f1d21
                        
                        rax_4 = sub_1428e8de0(rax_1, result + 0x1c)
                        break
                    
                    if (rcx_6 == 7)
                        rax_4 = sub_1428e8de0(rax_1, result + 0xc)
                        break
            else
                rax_4 = sub_1428e8de0(rax_1, &result[1])
            
        label_1428f1c81:
            
            if (rax_4 == 0)
                break
        
        rbp_1 += 1
        
        if (rbp_1 s>= sub_142898c70(arg3))
            return result
else
    sub_1428a5670((result + 0x22).d, 0x9d, (result + 0x41).d, "crypto\x509v3\v3_crld.c", 0x193)

label_1428f1d21:
sub_1428c3d60(result, &data_143517520)
return nullptr
