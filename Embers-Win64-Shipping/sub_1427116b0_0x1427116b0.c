// 函数: sub_1427116b0
// 地址: 0x1427116b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* result = sub_140d3c6e0(arg2 + 0x34)

if (result != 0)
    arg2[6].d
    sub_1426cce30(arg1 + 0x88, result)
    int128_t zmm0_1 = sub_1426e2610(arg1 + 0x88)
    arg2[6].d
    sub_1426cce30(arg1 + 0xc0, result)
    int128_t zmm0_2 = sub_1426e2610(arg1 + 0xc0)
    int64_t** var_98
    result = sub_1426c5aa0(&var_98, arg1, arg2, 0xffffffff)
    int32_t i_1
    int32_t i = i_1
    int64_t** r8_4 = var_98
label_142711782:
    float var_80
    float zmm1_1 = var_80
    int16_t var_7c
    int16_t r10_1 = var_7c
    
    while (true)
        if (i s< r8_4[1].d && (*(r8_4 + 0x13e) & 1) == 0)
            double var_88
            
            if (var_88 < 0.0)
                goto label_1427117f3
            
            int64_t performanceCount
            result = QueryPerformanceCounter(&performanceCount)
            
            if (float.d(performanceCount) f* data_143d796f8 f+ 0x4170000000000000 >= var_88)
                i = i_1
                r8_4 = var_98
            else
                r10_1 = var_7c
                zmm1_1 = var_80
            label_1427117f3:
                int32_t rax_1 = data_143f7200c * 0xbb38435 + 0x3619636b
                data_143f7200c = rax_1
                double zmm0_3
                zmm0_3.d = (rax_1 u>> 9 | 0x3f800000).d f- 1f
                char var_76
                
                if ((var_76 & 2) == 0)
                    if (*(arg1 + 0x34) == 1)
                    label_142711852:
                        char var_77
                        uint32_t rcx_9 = zx.d(var_77)
                        
                        if (rcx_9 == 0)
                            var_80 = zmm1_1 f+ zmm0_3.d
                        else if (rcx_9 == 1)
                            if (r10_1 == 0 || not(zmm1_1 f<= zmm0_3.d))
                                var_80 = zmm0_3.d
                        else if (rcx_9 == 2)
                            if (r10_1 == 0)
                                var_80 = zmm0_3.d
                            else if (not(zmm1_1 f>= zmm0_3.d))
                                var_80 = zmm0_3.d
                        else if (rcx_9 == 3)
                            var_80 = zmm1_1 f* zmm0_3.d
                        
                        var_7c = r10_1 + 1
                    else
                        uint32_t rcx_7 = zx.d(*(arg1 + 0x4a))
                        bool cond:1_1
                        
                        if (rcx_7 == 0)
                            cond:1_1 = zmm0_3.d f>= zmm0_1.d
                        label_14271184b:
                            int32_t rax_3
                            rax_3.b = cond:1_1
                            
                            if (rax_3.b != 0)
                                goto label_142711852
                        else
                            if (rcx_7 == 1)
                                cond:1_1 = zmm0_2.d f>= zmm0_3.d
                                goto label_14271184b
                            
                            if (rcx_7 == 2 && not(zmm0_3.d f< zmm0_1.d)
                                    && not(zmm0_3.d f> zmm0_2.d))
                                goto label_142711852
                    
                    int16_t var_7a = var_7a + 1
                
                result = sub_1426ec620(&var_98)
                r8_4 = var_98
                i = i_1
                
                if ((*(r8_4 + 0x13e) & 1) != 0)
                    goto label_142711782
                
                i += 1
                result.b = var_76 & 0xfd
                var_7c.d = 0
                result.b |= 1
                i_1 = i
                zmm1_1 = (zx.o(0)).d
                var_76 = result.b
                var_80 = 0f
                r10_1 = 0
                
                if (i s< r8_4[1].d)
                    do
                        result = *r8_4
                        int32_t r9_1 = *(&result[sx.q(i)] + 4)
                        
                        if (not(test_bit(r9_1, 0x1e)) && r9_1 s>= 0)
                            break
                        
                        i += 1
                        i_1 = i
                    while (i s< r8_4[1].d)
                    
                    continue
        
        *(r8_4 + 0x124) = i
        break

return result
