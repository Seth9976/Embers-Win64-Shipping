// 函数: sub_14195b960
// 地址: 0x14195b960
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result

if (arg2 - 1 u> 5)
label_14195baea:
    result.b = 0
    return result

switch (arg2)
    case 1
        return sub_141965330(arg1, arg3) __tailcall
    case 2
        result = 0
        int32_t* rdx_3 = arg3
        int32_t r9_2 = 0
        int32_t* rcx_1 = arg1 - arg3
        
        while (true)
            int32_t r10_2 = *(rcx_1 + rdx_3)
            int32_t temp0_1 = *rdx_3
            
            if (r10_2 u> temp0_1)
                break
            
            if (r10_2 u>= temp0_1)
                r9_2 += 1
                rdx_3 = &rdx_3[1]
                
                if (r9_2 u< 6)
                    continue
            
            while (true)
                int32_t rdx_4 = *arg3
                int32_t temp7_1 = *(rcx_1 + arg3)
                
                if (rdx_4 u> temp7_1)
                    break
                
                if (rdx_4 u< temp7_1)
                    goto label_14195baea
                
                result += 1
                arg3 = &arg3[1]
                
                if (result u>= 6)
                    result.b = 0
                    return result
            
            break
        
    label_14195b9cd:
        result.b = 1
        return result
    case 3
        result = 0
        int32_t* rcx_2 = arg1 - arg3
        
        while (true)
            int32_t rdx_5 = *(rcx_2 + arg3)
            int32_t temp1_1 = *arg3
            
            if (rdx_5 u> temp1_1)
                break
            
            if (rdx_5 u< temp1_1)
                goto label_14195baea
            
            result += 1
            arg3 = &arg3[1]
            
            if (result u>= 6)
                result.b = 0
                return result
        
        goto label_14195b9cd
    case 4
        result = 0
        int32_t* rdx_6 = arg3
        int32_t r9_3 = 0
        int32_t* rcx_3 = arg1 - arg3
        
        while (true)
            int32_t r10_3 = *(rcx_3 + rdx_6)
            int32_t temp2_1 = *rdx_6
            
            if (r10_3 u> temp2_1)
                break
            
            if (r10_3 u>= temp2_1)
                r9_3 += 1
                rdx_6 = &rdx_6[1]
                
                if (r9_3 u< 6)
                    continue
            
            int32_t r9_4 = 0
            int32_t* rdx_7 = arg3
            
            while (true)
                int32_t r10_4 = *rdx_7
                int32_t temp8_1 = *(rcx_3 + rdx_7)
                
                if (r10_4 u> temp8_1)
                    break
                
                if (r10_4 u< temp8_1)
                    goto label_14195b9cd
                
                r9_4 += 1
                rdx_7 = &rdx_7[1]
                
                if (r9_4 u>= 6)
                    result.b = 1
                    return 1
            
            break
        
        while (true)
            int32_t rdx_8 = *(rcx_3 + arg3)
            int32_t temp5_1 = *arg3
            
            if (rdx_8 u> temp5_1)
                break
            
            if (rdx_8 u< temp5_1)
                goto label_14195baea
            
            result += 1
            arg3 = &arg3[1]
            
            if (result u>= 6)
                result.b = 0
                return result
        
        goto label_14195b9cd
    case 5
        result = 0
        int32_t* rcx_4 = arg1 - arg3
        
        while (true)
            int32_t rdx_9 = *arg3
            int32_t temp3_1 = *(rcx_4 + arg3)
            
            if (rdx_9 u> temp3_1)
                break
            
            if (rdx_9 u< temp3_1)
                goto label_14195baea
            
            result += 1
            arg3 = &arg3[1]
            
            if (result u>= 6)
                result.b = 0
                return result
        
        goto label_14195b9cd
    case 6
        result = 0
        int32_t* rdx_10 = arg3
        int32_t r9_5 = 0
        int32_t* rcx_5 = arg1 - arg3
        
        while (true)
            int32_t r10_5 = *(rcx_5 + rdx_10)
            int32_t temp4_1 = *rdx_10
            
            if (r10_5 u> temp4_1)
                break
            
            if (r10_5 u>= temp4_1)
                r9_5 += 1
                rdx_10 = &rdx_10[1]
                
                if (r9_5 u< 6)
                    continue
            
            int32_t r9_6 = 0
            int32_t* rdx_11 = arg3
            
            while (true)
                int32_t r10_6 = *rdx_11
                int32_t temp9_1 = *(rcx_5 + rdx_11)
                
                if (r10_6 u> temp9_1)
                    break
                
                if (r10_6 u< temp9_1)
                    goto label_14195b9cd
                
                r9_6 += 1
                rdx_11 = &rdx_11[1]
                
                if (r9_6 u>= 6)
                    result.b = 1
                    return 1
            
            break
        
        while (true)
            int32_t rdx_12 = *arg3
            int32_t temp6_1 = *(rcx_5 + arg3)
            
            if (rdx_12 u> temp6_1)
                break
            
            if (rdx_12 u< temp6_1)
                goto label_14195baea
            
            result += 1
            arg3 = &arg3[1]
            
            if (result u>= 6)
                goto label_14195baea
        
        goto label_14195b9cd
