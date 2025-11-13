// 函数: sub_1403cc0f0
// 地址: 0x1403cc0f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result
result.b = arg1[4].b

if ((result.b & 2) != 0)
    int32_t r9_1 = *arg1
    arg1.b = *(arg1 + 0x11)
    
    if (arg1.b == 0x10)
        int32_t r8_5
        
        if (result.b == 2)
            if (r9_1 != 0)
                r8_5 = r9_1 & 1
                
                if (r9_1 != 1)
                    result = zx.q(r8_5 - r9_1)
                    int32_t i
                    
                    do
                        int16_t r9_5 = *arg2
                        *arg2 = *(arg2 + 4)
                        *(arg2 + 4) = r9_5
                        int16_t r9_6 = *(arg2 + 6)
                        *(arg2 + 6) = *(arg2 + 0xa)
                        *(arg2 + 0xa) = r9_6
                        arg2 += 0xc
                        i = result.d
                        result = zx.q(result.d + 2)
                    while (i != 0xfffffffe)
                
            label_1403cc2fb:
                
                if (r8_5 != 0)
                    result = zx.q(*arg2)
                    *arg2 = *(arg2 + 4)
                    *(arg2 + 4) = result.w
        else if (result.b == 6 && r9_1 != 0)
            r8_5 = r9_1 & 1
            
            if (r9_1 != 1)
                result = zx.q(r8_5 - r9_1)
                int32_t i_1
                
                do
                    int16_t r9_3 = *arg2
                    *arg2 = *(arg2 + 4)
                    *(arg2 + 4) = r9_3
                    int16_t r9_4 = *(arg2 + 8)
                    *(arg2 + 8) = *(arg2 + 0xc)
                    *(arg2 + 0xc) = r9_4
                    arg2 += 0x10
                    i_1 = result.d
                    result = zx.q(result.d + 2)
                while (i_1 != 0xfffffffe)
            
            goto label_1403cc2fb
    else if (arg1.b == 8)
        if (result.b == 2)
            if (r9_1 != 0)
                int32_t r10_6 = r9_1 & 3
                
                if (r9_1 - 1 u>= 3)
                    int32_t i_6 = r10_6 - r9_1
                    int32_t i_2
                    
                    do
                        char r8_6 = *arg2
                        *arg2 = *(arg2 + 2)
                        *(arg2 + 2) = r8_6
                        char r8_7 = *(arg2 + 3)
                        *(arg2 + 3) = *(arg2 + 5)
                        *(arg2 + 5) = r8_7
                        char r8_8 = *(arg2 + 6)
                        *(arg2 + 6) = *(arg2 + 8)
                        *(arg2 + 8) = r8_8
                        char r8_9 = *(arg2 + 9)
                        result = zx.q(*(arg2 + 0xb))
                        *(arg2 + 9) = result.b
                        *(arg2 + 0xb) = r8_9
                        arg2 += 0xc
                        i_2 = i_6
                        i_6 += 4
                    while (i_2 != 0xfffffffc)
                
                if (r10_6 != 0)
                    int32_t i_7 = neg.d(r10_6)
                    int32_t i_3
                    
                    do
                        result = zx.q(*arg2)
                        *arg2 = *(arg2 + 2)
                        *(arg2 + 2) = result.b
                        arg2 += 3
                        i_3 = i_7
                        i_7 += 1
                    while (i_3 != 0xffffffff)
        else if (result.b == 6 && r9_1 != 0)
            result = zx.q(r9_1 - 1)
            int32_t r8_2 = r9_1 & 3
            
            if (result.d u>= 3)
                int32_t i_5 = r8_2 - r9_1
                int32_t i_4
                
                do
                    char r10_1 = *arg2
                    *arg2 = *(arg2 + 2)
                    *(arg2 + 2) = r10_1
                    char r10_2 = *(arg2 + 4)
                    *(arg2 + 4) = *(arg2 + 6)
                    *(arg2 + 6) = r10_2
                    char r10_3 = *(arg2 + 8)
                    *(arg2 + 8) = *(arg2 + 0xa)
                    *(arg2 + 0xa) = r10_3
                    char r10_4 = *(arg2 + 0xc)
                    result = zx.q(*(arg2 + 0xe))
                    *(arg2 + 0xc) = result.b
                    *(arg2 + 0xe) = r10_4
                    arg2 += 0x10
                    i_4 = i_5
                    i_5 += 4
                while (i_4 != 0xfffffffc)
            
            if (r8_2 != 0)
                result = 0
                
                do
                    char r8_3 = *(arg2 + (result << 2))
                    *(arg2 + (result << 2)) = *(arg2 + (result << 2) + 2)
                    *(arg2 + (result << 2) + 2) = r8_3
                    result += 1
                while ((r9_1 & 3) != result.d)

return result
