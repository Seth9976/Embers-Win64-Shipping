// 函数: sub_142aba980
// 地址: 0x142aba980
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result

if (*arg1 == 0)
    if (*arg2 == 0)
        result.b = *(arg1 + 4) == *(arg2 + 4)
        goto label_142aba9b5
    
    result.b = 0
else
    result = zx.q(*arg2)
label_142aba9b5:
    
    if (result.b == 0)
        result.b = 0
    else if (*(arg1 + 8) == 0)
        if (arg2[8] == 0)
            result.b = (*(*(arg1 + 0x10) + 0x18))(arg1 + 0x10, &arg2[0x10]).b != 0
            goto label_142aba9e7
        
        result.b = 0
    else
        result = zx.q(arg2[8])
    label_142aba9e7:
        
        if (result.b == 0 || *(arg1 + 0x30) != *(arg2 + 0x30))
            result.b = 0
        else if (*(arg1 + 0x38) == 0)
            if (arg2[0x38] == 0)
                result.b = *(arg1 + 0x3c) == *(arg2 + 0x3c)
                goto label_142abaa1c
            
            result.b = 0
        else
            result = zx.q(arg2[0x38])
        label_142abaa1c:
            
            if (result.b == 0 || *(arg1 + 0x41) != arg2[0x41] || *(arg1 + 0x42) != arg2[0x42]
                    || *(arg1 + 0x43) != arg2[0x43] || *(arg1 + 0x44) != *(arg2 + 0x44)
                    || *(arg1 + 0x50) != *(arg2 + 0x50) || *(arg1 + 0x5c) != *(arg2 + 0x5c)
                    || *(arg1 + 0x60) != *(arg2 + 0x60) || *(arg1 + 0x68) != *(arg2 + 0x68)
                    || *(arg1 + 0x70) != *(arg2 + 0x70) || *(arg1 + 0x74) != *(arg2 + 0x74)
                    || *(arg1 + 0x78) != *(arg2 + 0x78))
                result.b = 0
            else
                bool cond:2_1
                
                if ((*(arg1 + 0x88) & 1) == 0)
                    int16_t rax_1 = *(arg1 + 0x88)
                    int32_t r8_1
                    
                    if (rax_1 s< 0)
                        r8_1 = *(arg1 + 0x8c)
                    else
                        r8_1 = sx.d(rax_1) s>> 5
                    
                    int16_t rax_2 = *(arg2 + 0x88)
                    
                    if (rax_2 s< 0)
                        result = zx.q(*(arg2 + 0x8c))
                    else
                        result = zx.q(sx.d(rax_2) s>> 5)
                    
                    if ((arg2[0x88] & 1) == 0 && r8_1 == result.d)
                        cond:2_1 = sub_142a490e0(arg1 + 0x80, &arg2[0x80], r8_1).b == 0
                        goto label_142abab0a
                    
                    result.b = 0
                else
                    result.b = arg2[0x88] & 1
                    cond:2_1 = result.b == 0
                label_142abab0a:
                    
                    if (cond:2_1)
                        result.b = 0
                    else
                        bool cond:4_1
                        
                        if ((*(arg1 + 0x108) & 1) == 0)
                            int16_t rax_4 = *(arg1 + 0x108)
                            int32_t r8_3
                            
                            if (rax_4 s< 0)
                                r8_3 = *(arg1 + 0x10c)
                            else
                                r8_3 = sx.d(rax_4) s>> 5
                            
                            int16_t rax_5 = *(arg2 + 0x108)
                            
                            if (rax_5 s< 0)
                                result = zx.q(*(arg2 + 0x10c))
                            else
                                result = zx.q(sx.d(rax_5) s>> 5)
                            
                            if ((arg2[0x108] & 1) == 0 && r8_3 == result.d)
                                cond:4_1 = sub_142a490e0(arg1 + 0x100, &arg2[0x100], r8_3).b == 0
                                goto label_142abab6f
                            
                            result.b = 0
                        else
                            result.b = arg2[0x108] & 1
                            cond:4_1 = result.b == 0
                        label_142abab6f:
                            
                            if (cond:4_1)
                                result.b = 0
                            else if (*(arg1 + 0x180) == 0)
                                if (arg2[0x180] == 0)
                                    result.b = *(arg1 + 0x184) == *(arg2 + 0x184)
                                    goto label_142ababa3
                                
                                result.b = 0
                            else
                                result = zx.q(arg2[0x180])
                            label_142ababa3:
                                
                                if (result.b == 0)
                                    result.b = 0
                                else
                                    bool cond:6_1
                                    
                                    if ((*(arg1 + 0x190) & 1) == 0)
                                        int16_t rax_7 = *(arg1 + 0x190)
                                        int32_t r8_5
                                        
                                        if (rax_7 s< 0)
                                            r8_5 = *(arg1 + 0x194)
                                        else
                                            r8_5 = sx.d(rax_7) s>> 5
                                        
                                        int16_t rax_8 = *(arg2 + 0x190)
                                        
                                        if (rax_8 s< 0)
                                            result = zx.q(*(arg2 + 0x194))
                                        else
                                            result = zx.q(sx.d(rax_8) s>> 5)
                                        
                                        if ((arg2[0x190] & 1) == 0 && r8_5 == result.d)
                                            cond:6_1 =
                                                sub_142a490e0(arg1 + 0x188, &arg2[0x188], r8_5).b
                                                == 0
                                            goto label_142abac0a
                                        
                                        result.b = 0
                                    else
                                        result.b = arg2[0x190] & 1
                                        cond:6_1 = result.b == 0
                                    label_142abac0a:
                                        
                                        if (cond:6_1)
                                            result.b = 0
                                        else
                                            bool cond:8_1
                                            
                                            if ((*(arg1 + 0x1e8) & 1) == 0)
                                                int16_t rax_10 = *(arg1 + 0x1e8)
                                                int32_t r8_7
                                                
                                                if (rax_10 s< 0)
                                                    r8_7 = *(arg1 + 0x1ec)
                                                else
                                                    r8_7 = sx.d(rax_10) s>> 5
                                                
                                                int16_t rax_11 = *(arg2 + 0x1e8)
                                                
                                                if (rax_11 s< 0)
                                                    result = zx.q(*(arg2 + 0x1ec))
                                                else
                                                    result = zx.q(sx.d(rax_11) s>> 5)
                                                
                                                if ((arg2[0x1e8] & 1) == 0 && r8_7 == result.d)
                                                    cond:8_1 = sub_142a490e0(arg1 + 0x1e0, 
                                                        &arg2[0x1e0], r8_7).b == 0
                                                    goto label_142abac6f
                                                
                                                result.b = 0
                                            else
                                                result.b = arg2[0x1e8] & 1
                                                cond:8_1 = result.b == 0
                                            label_142abac6f:
                                                
                                                if (cond:8_1)
                                                    result.b = 0
                                                else
                                                    bool cond:10_1
                                                    
                                                    if ((*(arg1 + 0x268) & 1) == 0)
                                                        int16_t rax_13 = *(arg1 + 0x268)
                                                        int32_t r8_9
                                                        
                                                        if (rax_13 s< 0)
                                                            r8_9 = *(arg1 + 0x26c)
                                                        else
                                                            r8_9 = sx.d(rax_13) s>> 5
                                                        
                                                        int16_t rax_14 = *(arg2 + 0x268)
                                                        
                                                        if (rax_14 s< 0)
                                                            result = zx.q(*(arg2 + 0x26c))
                                                        else
                                                            result = zx.q(sx.d(rax_14) s>> 5)
                                                        
                                                        if ((arg2[0x268] & 1) == 0
                                                                && r8_9 == result.d)
                                                            cond:10_1 = sub_142a490e0(arg1 + 0x260, 
                                                                &arg2[0x260], r8_9).b == 0
                                                            goto label_142abaccc
                                                        
                                                        result.b = 0
                                                    else
                                                        result.b = arg2[0x268] & 1
                                                        cond:10_1 = result.b == 0
                                                    label_142abaccc:
                                                        
                                                        if (cond:10_1)
                                                            result.b = 0
                                                        else
                                                            double zmm0 = *(arg1 + 0x2e0)
                                                            double temp0_1 = *(arg2 + 0x2e0)
                                                            zmm0 - temp0_1
                                                            
                                                            if (is_unordered.q(zmm0, temp0_1)
                                                                    || zmm0 != temp0_1)
                                                                result.b = 0
                                                            else if (*(arg1 + 0x2e8) == 0)
                                                                if (arg2[0x2e8] == 0)
                                                                    result.b =
                                                                        *(arg1 + 0x2ec) == *(arg2 + 0x2ec)
                                                                    goto label_142abad0c
                                                                
                                                                result.b = 0
                                                            else
                                                                result = zx.q(arg2[0x2e8])
                                                            label_142abad0c:
                                                                
                                                                if (result.b == 0
                                                                        || *(arg1 + 0x2f0) != *(arg2 + 0x2f0)
                                                                        || *(arg1 + 0x2f4) != arg2[0x2f4])
                                                                    result.b = 0
                                                                else
                                                                    result.b = 1

if (arg3 == 0)
    if (result.b != 0 && *(arg1 + 0x48) == *(arg2 + 0x48) && *(arg1 + 0x4c) == arg2[0x4c]
            && *(arg1 + 0x64) == *(arg2 + 0x64) && *(arg1 + 0x54) == *(arg2 + 0x54)
            && *(arg1 + 0x58) == *(arg2 + 0x58) && *(arg1 + 0x6c) == *(arg2 + 0x6c)
            && sub_142a48110(arg1 + 0xc0, &arg2[0xc0]).b != 0
            && sub_142a48110(arg1 + 0x140, &arg2[0x140]).b != 0
            && sub_142a48110(arg1 + 0x220, &arg2[0x220]).b != 0
            && sub_142a48110(arg1 + 0x2a0, &arg2[0x2a0]).b != 0 && *(arg1 + 0x40) == arg2[0x40]
            && *(arg1 + 0x1c8) == arg2[0x1c8] && *(arg1 + 0x1c9) == arg2[0x1c9])
        if (*(arg1 + 0x1cc) != arg3)
            result = zx.q(arg2[0x1cc])
        label_142abae4e:
            
            if (result.b != 0 && *(arg1 + 0x1d4) == arg2[0x1d4] && *(arg1 + 0x1d5) == arg2[0x1d5]
                    && *(arg1 + 0x1d8) == *(arg2 + 0x1d8))
                result.b = 1
                return result
        else if (arg2[0x1cc] == 0)
            result.b = *(arg1 + 0x1d0) == *(arg2 + 0x1d0)
            goto label_142abae4e
    
    result.b = 0

return result
