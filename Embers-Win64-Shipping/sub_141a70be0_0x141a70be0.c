// 函数: sub_141a70be0
// 地址: 0x141a70be0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_3 = arg1[1].d
uint64_t result

if (i_3 == arg2[1].d)
    int32_t* r9_1 = *arg2
    
    if (i_3 != 0)
        void* r8_2 = *arg1 + 8
        int32_t i
        
        do
            if (*(r8_2 - 8) != *r9_1)
                goto label_141a70d31
            
            if (*(r8_2 - 4) != r9_1[1])
                goto label_141a70d31
            
            if (*r8_2 != r9_1[2])
                goto label_141a70d31
            
            r9_1 = &r9_1[3]
            r8_2 += 0xc
            i = i_3
            i_3 -= 1
        while (i != 1)
    
    int32_t i_2 = arg1[3].d
    
    if (i_2 == arg2[3].d)
        char* r8_3 = arg2[2]
        
        if (i_2 != 0)
            void* rdx = &r8_3[0x14]
            result = arg1[2] + 0x14
            int32_t i_1
            
            do
                char rcx = *(result - 0x14)
                
                if (rcx == 2)
                label_141a70cc4:
                    
                    if (rcx != *r8_3)
                        goto label_141a70d31
                    
                    if (rcx != 2 && *(result - 0x10) != *(rdx - 0x10))
                        goto label_141a70d31
                    
                    char rcx_2 = *(result - 0xc)
                    
                    if (rcx_2 != *(rdx - 0xc))
                        goto label_141a70d31
                    
                    if (rcx_2 != 2 && *(result - 8) != *(rdx - 8))
                        goto label_141a70d31
                else
                    char r9_2 = *(result - 0xc)
                    
                    if (r9_2 == 2)
                        goto label_141a70cc4
                    
                    int32_t r10 = *(result - 0x10)
                    int32_t temp1_1 = *(result - 8)
                    
                    if (r10 s<= temp1_1 && (r10 != temp1_1 || (rcx != 0 && r9_2 != 0)))
                        goto label_141a70cc4
                    
                    char r9_3 = *r8_3
                    
                    if (r9_3 == 2)
                        goto label_141a70cc4
                    
                    char r10_1 = *(rdx - 0xc)
                    
                    if (r10_1 == 2)
                        goto label_141a70cc4
                    
                    int32_t r11_1 = *(rdx - 0x10)
                    int32_t temp2_1 = *(rdx - 8)
                    
                    if (r11_1 s<= temp2_1)
                        if (r11_1 != temp2_1)
                            goto label_141a70cc4
                        
                        if (r9_3 != 0 && r10_1 != 0)
                            goto label_141a70cc4
                
                if (*(result - 4) != *(rdx - 4))
                    goto label_141a70d31
                
                if (*result != *rdx)
                    goto label_141a70d31
                
                if (*(result + 4) != *(rdx + 4))
                    goto label_141a70d31
                
                if (*(result + 8) != *(rdx + 8))
                    goto label_141a70d31
                
                r8_3 = &r8_3[0x20]
                rdx += 0x20
                result += 0x20
                i_1 = i_2
                i_2 -= 1
            while (i_1 != 1)
        
        result.b = 1
        return result

label_141a70d31:
result.b = 0
return result
