// 函数: sub_1403c8b70
// 地址: 0x1403c8b70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result
result.b = *(arg1 + 0x11)

if (result.b u>= 8)
    char r9 = arg1[4].b
    
    if ((r9 & 2) == 0)
        uint64_t result_1 = zx.q(*arg1)
        
        if (r9 == 0)
            if (result.b != 8)
                if (result_1.d == 0)
                    result_1 = 0
                else
                    int32_t r10_5 = result_1.d & 1
                    void* r9_6
                    
                    if (result_1.d != 1)
                        void* rax_6 = result_1 * 6 - 1
                        void* r9_8 = result_1 * 2 - 1
                        int32_t i_5 = r10_5 - result_1.d
                        int32_t i
                        
                        do
                            *(arg2 + rax_6) = *(arg2 + r9_8)
                            *(arg2 + rax_6 - 1) = *(arg2 + r9_8 - 1)
                            *(arg2 + rax_6 - 2) = *(arg2 + r9_8)
                            *(arg2 + rax_6 - 3) = *(arg2 + r9_8 - 1)
                            *(arg2 + rax_6 - 4) = *(arg2 + r9_8)
                            *(arg2 + rax_6 - 5) = *(arg2 + r9_8 - 1)
                            *(arg2 + rax_6 - 6) = *(arg2 + r9_8 - 2)
                            *(arg2 + rax_6 - 7) = *(arg2 + r9_8 - 3)
                            *(arg2 + rax_6 - 8) = *(arg2 + r9_8 - 2)
                            *(arg2 + rax_6 - 9) = *(arg2 + r9_8 - 3)
                            *(arg2 + rax_6 - 0xa) = *(arg2 + r9_8 - 2)
                            *(arg2 + rax_6 - 0xb) = *(arg2 + r9_8 - 3)
                            rax_6 -= 0xc
                            r9_8 -= 4
                            i = i_5
                            i_5 += 2
                        while (i != 0xfffffffe)
                        result = rax_6 + arg2
                        r9_6 = r9_8 + arg2
                        
                        if (r10_5 != 0)
                            goto label_1403c8ec5
                    else
                        r9_6 = &arg2[(result_1 << 1) - 1]
                        result = r9_6 + (result_1 << 2)
                        
                        if (r10_5 != 0)
                        label_1403c8ec5:
                            arg2.b = *r9_6
                            *result = arg2.b
                            arg2.b = *(r9_6 - 1)
                            *(result - 1) = arg2.b
                            arg2.b = *r9_6
                            *(result - 2) = arg2.b
                            arg2.b = *(r9_6 - 1)
                            *(result - 3) = arg2.b
                            arg2.b = *r9_6
                            *(result - 4) = arg2.b
                            arg2.b = *(r9_6 - 1)
                            *(result - 5) = arg2.b
            else if (result_1.d == 0)
                result_1 = 0
            else
                int32_t r9_4 = result_1.d & 1
                void* r10_3
                
                if (result_1.d != 1)
                    void* r10_8 = result_1 * 3 - 1
                    void* rax_3 = result_1 - 1
                    int32_t i_4 = r9_4 - result_1.d
                    int32_t i_1
                    
                    do
                        *(arg2 + r10_8) = *(arg2 + rax_3)
                        *(arg2 + r10_8 - 1) = *(arg2 + rax_3)
                        *(arg2 + r10_8 - 2) = *(arg2 + rax_3)
                        *(arg2 + r10_8 - 3) = *(arg2 + rax_3 - 1)
                        *(arg2 + r10_8 - 4) = *(arg2 + rax_3 - 1)
                        *(arg2 + r10_8 - 5) = *(arg2 + rax_3 - 1)
                        r10_8 -= 6
                        rax_3 -= 2
                        i_1 = i_4
                        i_4 += 2
                    while (i_1 != 0xfffffffe)
                    r10_3 = r10_8 + arg2
                    result = rax_3 + arg2
                    
                    if (r9_4 != 0)
                        goto label_1403c8df5
                else
                    result = &arg2[result_1 - 1]
                    r10_3 = result + (result_1 << 1)
                    
                    if (r9_4 != 0)
                    label_1403c8df5:
                        arg2.b = *result
                        *r10_3 = arg2.b
                        arg2.b = *result
                        *(r10_3 - 1) = arg2.b
                        result.b = *result
                        *(r10_3 - 2) = result.b
        else if (r9 == 4)
            if (result.b != 8)
                if (result_1.d == 0)
                    result_1 = 0
                else
                    result = result_1
                    
                    do
                        arg2[(result << 3) - 1] = arg2[(result << 2) - 1]
                        arg2[(result << 3) - 2] = arg2[(result << 2) - 2]
                        arg2[(result << 3) - 3] = arg2[(result << 2) - 3]
                        arg2[(result << 3) - 4] = arg2[(result << 2) - 4]
                        arg2[(result << 3) - 5] = arg2[(result << 2) - 3]
                        arg2[(result << 3) - 6] = arg2[(result << 2) - 4]
                        arg2[(result << 3) - 7] = arg2[(result << 2) - 3]
                        arg2[(result << 3) - 8] = arg2[(result << 2) - 4]
                        result -= 1
                    while (result.d != 0)
            else if (result_1.d == 0)
                result_1 = 0
            else
                uint64_t r10_1 = result_1 * 2
                int32_t r9_2 = result_1.d & 1
                void* r10_2
                char* r11_2
                
                if (result_1.d != 1)
                    void* rax_1 = (result_1 << 2) + -ffffffffffffffff
                    void* r10_6 = r10_1 - 1
                    int32_t i_3 = r9_2 - result_1.d
                    int32_t i_2
                    
                    do
                        *(arg2 + rax_1) = *(arg2 + r10_6)
                        *(arg2 + rax_1 - 1) = *(arg2 + r10_6 - 1)
                        *(arg2 + rax_1 - 2) = *(arg2 + r10_6 - 1)
                        *(arg2 + rax_1 - 3) = *(arg2 + r10_6 - 1)
                        *(arg2 + rax_1 - 4) = *(arg2 + r10_6 - 2)
                        *(arg2 + rax_1 - 5) = *(arg2 + r10_6 - 3)
                        *(arg2 + rax_1 - 6) = *(arg2 + r10_6 - 3)
                        *(arg2 + rax_1 - 7) = *(arg2 + r10_6 - 3)
                        rax_1 -= 8
                        r10_6 -= 4
                        i_2 = i_3
                        i_3 += 2
                    while (i_2 != 0xfffffffe)
                    r11_2 = r10_6 + arg2
                    r10_2 = rax_1 + arg2
                    
                    if (r9_2 != 0)
                        goto label_1403c8d61
                else
                    r11_2 = &arg2[(result_1 << 1) - 1]
                    r10_2 = &r11_2[r10_1]
                    
                    if (r9_2 != 0)
                    label_1403c8d61:
                        result.b = *r11_2
                        *r10_2 = result.b
                        result.b = r11_2[-1]
                        *(r10_2 - 1) = result.b
                        result.b = r11_2[-1]
                        *(r10_2 - 2) = result.b
                        result.b = r11_2[-1]
                        *(r10_2 - 3) = result.b
        
        result.b = *(arg1 + 0x11)
        arg2.b = *(arg1 + 0x12)
        arg2.b += 2
        *(arg1 + 0x12) = arg2.b
        arg1[4].b |= 2
        result.w = mulu.dp.b(result.b, arg2.b)
        *(arg1 + 0x13) = result.b
        uint64_t rdx = zx.q(result.b)
        uint64_t rdx_2
        
        if (result.b u< 8)
            rdx_2 = (result_1 * rdx + 7) u>> 3
        else
            rdx_2 = (rdx u>> 3) * result_1
        
        *(arg1 + 8) = rdx_2

return result
