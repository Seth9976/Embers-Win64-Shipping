// 函数: sub_14146f360
// 地址: 0x14146f360
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(arg2 - 2)
uint64_t result = zx.q((temp1 - temp0) s>> 1)
int32_t rbp = result.d
char r11

if (result.d s>= 0)
    int32_t r15_1 = ((result << 1) + 1).d
    int32_t temp2_1
    
    do
        int32_t rdi_1 = rbp
        
        if (r15_1 s< arg2)
            do
                int32_t rbx_1 = rdi_1 * 2
                uint64_t rdx_1 = zx.q(rbx_1 + 1)
                
                if ((rdx_1 + 1).d s< arg2)
                    void* r8_1 = arg1[sx.q(rdx_1.d)]
                    void* r10_1 = arg1[sx.q(rbx_1) + 2]
                    int32_t rcx = *(r10_1 + 0x570)
                    
                    if ((rcx.b & 0x40) == 0 || *(r10_1 + 0x534) s< 0 || (rcx.b & 0x10) == 0)
                        r11 = 0
                    else
                        r11 = 1
                    
                    int32_t rax_6 = *(r8_1 + 0x570)
                    int32_t r9_2 = rax_6 & 0x40
                    
                    if (r11 == 0)
                        if (r9_2 == 0 || *(r8_1 + 0x534) s< 0 || (rax_6.b & 0x10) == 0)
                            rax_6.b = *(r8_1 + 0x54c) * *(r8_1 + 0x548)
                                u< *(r10_1 + 0x54c) * *(r10_1 + 0x548)
                        else
                            rax_6.b = 0
                    else if (r9_2 == 0)
                        rax_6.b = 1
                    else
                        int32_t r9_3 = *(r8_1 + 0x534)
                        
                        if (r9_3 s< 0 || (rax_6.b & 0x10) == 0)
                            rax_6.b = 1
                        else
                            int32_t rcx_2 = rcx u>> 9 & 1
                            rax_6 = rax_6 u>> 9 & 1
                            
                            if (rcx_2 == rax_6)
                                rax_6.b = r9_3 s< *(r10_1 + 0x534)
                            else if (rcx_2 != 0)
                                if (rax_6 != 0)
                                    rax_6.b = r9_3 s< *(r10_1 + 0x534)
                            else if (rax_6 == 0)
                                rax_6.b = r9_3 s< *(r10_1 + 0x534)
                            else
                                rax_6.b = 1
                    
                    if (rax_6.b != 0)
                        rdx_1 = zx.q(rbx_1)
                    
                    rdx_1 = zx.q(rdx_1.d + 1)
                
                int64_t rax_9 = sx.q(rdx_1.d)
                void* r9_4 = arg1[rax_9]
                int64_t rax_10 = sx.q(rdi_1)
                void* r10_2 = arg1[rax_10]
                int32_t rcx_5 = *(r10_2 + 0x570)
                
                if ((rcx_5.b & 0x40) == 0 || *(r10_2 + 0x534) s< 0 || (rcx_5.b & 0x10) == 0)
                    r11 = 0
                else
                    r11 = 1
                
                result = zx.q(*(r9_4 + 0x570))
                int32_t r8_3 = result.d & 0x40
                
                if (r11 == 0)
                    if (r8_3 != 0 && *(r9_4 + 0x534) s>= 0 && (result.b & 0x10) != 0)
                        break
                    
                    result.b =
                        *(r9_4 + 0x54c) * *(r9_4 + 0x548) u< *(r10_2 + 0x54c) * *(r10_2 + 0x548)
                    goto label_14146f539
                
                if (r8_3 != 0)
                    int32_t r8_4 = *(r9_4 + 0x534)
                    
                    if (r8_4 s>= 0 && (result.b & 0x10) != 0)
                        result = zx.q(result.d u>> 9) & 1
                        int32_t rcx_7 = rcx_5 u>> 9 & 1
                        
                        if (rcx_7 == result.d)
                        label_14146f4fe:
                            result.b = r8_4 s< *(r10_2 + 0x534)
                        label_14146f539:
                            
                            if (result.b == 0)
                                break
                        else
                            if (rcx_7 != 0)
                                if (result.d == 0)
                                    break
                                
                                goto label_14146f4fe
                            
                            if (result.d == 0)
                                goto label_14146f4fe
                
                arg1[rax_10] = r9_4
                result = zx.q(((rdx_1 << 1) + 1).d)
                arg1[rax_9] = r10_2
                rdi_1 = rdx_1.d
            while (result.d s< arg2)
        
        r15_1 -= 2
        temp2_1 = rbp
        rbp -= 1
    while (temp2_1 - 1 s>= 0)

int32_t j = arg2 - 1
int64_t i = sx.q(j)

if (j s> 0)
    do
        result = arg1[i]
        int32_t rdi_3 = 0
        int64_t rcx_10 = *arg1
        *arg1 = result
        arg1[i] = rcx_10
        
        if (j s> 1)
            do
                int32_t rbx_3 = rdi_3 * 2
                uint64_t rdx_2 = zx.q(rbx_3 + 1)
                
                if ((rdx_2 + 1).d s< j)
                    void* r8_5 = arg1[sx.q(rdx_2.d)]
                    void* r10_3 = arg1[sx.q(rbx_3) + 2]
                    int32_t rcx_11 = *(r10_3 + 0x570)
                    
                    if ((rcx_11.b & 0x40) == 0 || *(r10_3 + 0x534) s< 0 || (rcx_11.b & 0x10) == 0)
                        r11 = 0
                    else
                        r11 = 1
                    
                    int32_t rax_16 = *(r8_5 + 0x570)
                    int32_t r9_6 = rax_16 & 0x40
                    
                    if (r11 == 0)
                        if (r9_6 == 0 || *(r8_5 + 0x534) s< 0 || (rax_16.b & 0x10) == 0)
                            rax_16.b = *(r8_5 + 0x54c) * *(r8_5 + 0x548)
                                u< *(r10_3 + 0x54c) * *(r10_3 + 0x548)
                        else
                            rax_16.b = 0
                    else if (r9_6 == 0)
                        rax_16.b = 1
                    else
                        int32_t r9_7 = *(r8_5 + 0x534)
                        
                        if (r9_7 s< 0 || (rax_16.b & 0x10) == 0)
                            rax_16.b = 1
                        else
                            int32_t rcx_13 = rcx_11 u>> 9 & 1
                            rax_16 = rax_16 u>> 9 & 1
                            
                            if (rcx_13 == rax_16)
                                rax_16.b = r9_7 s< *(r10_3 + 0x534)
                            else if (rcx_13 != 0)
                                if (rax_16 != 0)
                                    rax_16.b = r9_7 s< *(r10_3 + 0x534)
                            else if (rax_16 == 0)
                                rax_16.b = r9_7 s< *(r10_3 + 0x534)
                            else
                                rax_16.b = 1
                    
                    if (rax_16.b != 0)
                        rdx_2 = zx.q(rbx_3)
                    
                    rdx_2 = zx.q(rdx_2.d + 1)
                
                int64_t rax_19 = sx.q(rdx_2.d)
                void* r9_8 = arg1[rax_19]
                int64_t rax_20 = sx.q(rdi_3)
                void* r10_4 = arg1[rax_20]
                int32_t rcx_16 = *(r10_4 + 0x570)
                
                if ((rcx_16.b & 0x40) == 0 || *(r10_4 + 0x534) s< 0 || (rcx_16.b & 0x10) == 0)
                    r11 = 0
                else
                    r11 = 1
                
                result = zx.q(*(r9_8 + 0x570))
                int32_t r8_7 = result.d & 0x40
                
                if (r11 == 0)
                    if (r8_7 != 0 && *(r9_8 + 0x534) s>= 0 && (result.b & 0x10) != 0)
                        break
                    
                    result.b =
                        *(r9_8 + 0x54c) * *(r9_8 + 0x548) u< *(r10_4 + 0x54c) * *(r10_4 + 0x548)
                    goto label_14146f739
                
                if (r8_7 != 0)
                    int32_t r8_8 = *(r9_8 + 0x534)
                    
                    if (r8_8 s>= 0 && (result.b & 0x10) != 0)
                        result = zx.q(result.d u>> 9) & 1
                        int32_t rcx_18 = rcx_16 u>> 9 & 1
                        
                        if (rcx_18 == result.d)
                        label_14146f6fe:
                            result.b = r8_8 s< *(r10_4 + 0x534)
                        label_14146f739:
                            
                            if (result.b == 0)
                                break
                        else
                            if (rcx_18 != 0)
                                if (result.d == 0)
                                    break
                                
                                goto label_14146f6fe
                            
                            if (result.d == 0)
                                goto label_14146f6fe
                
                arg1[rax_20] = r9_8
                result = zx.q(((rdx_2 << 1) + 1).d)
                arg1[rax_19] = r10_4
                rdi_3 = rdx_2.d
            while (result.d s< j)
        
        j -= 1
        i -= 1
    while (i s> 0)

return result
