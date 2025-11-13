// 函数: sub_142105190
// 地址: 0x142105190
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(arg2 - 2)
uint64_t result = zx.q((temp1 - temp0) s>> 1)
int32_t rbp = result.d
int64_t* r9
int64_t* r10

if (result.d s>= 0)
    int32_t r14_1 = ((result << 1) + 1).d
    int32_t temp2_1
    
    do
        int32_t rdi_1 = rbp
        
        if (r14_1 s< arg2)
            do
                int32_t r11_1 = rdi_1 * 2
                uint64_t rbx_1 = zx.q(r11_1 + 1)
                
                if ((rbx_1 + 1).d s< arg2)
                    r10.b = 0
                    void* j = &data_143f48af0
                    int64_t* r8_3 = &arg1[sx.q(r11_1) + 2]
                    
                    while (j s< &data_143f48b28)
                        int64_t rax_4 = *j
                        r10.b = *r8_3 == rax_4
                        j += 8
                        
                        if (*r8_3 == rax_4)
                            break
                    
                    r8_3.b = 0
                    void* j_1 = &data_143f48af0
                    r9 = &arg1[sx.q(rbx_1.d)]
                    
                    while (j_1 s< &data_143f48b28)
                        int64_t rax_6 = *j_1
                        r8_3.b = *r9 == rax_6
                        j_1 += 8
                        
                        if (*r9 == rax_6)
                            break
                    
                    if (r10.b u> r8_3.b)
                        rbx_1 = zx.q(r11_1)
                    
                    rbx_1 = zx.q(rbx_1.d + 1)
                
                r11_1.b = 0
                void* j_2 = &data_143f48af0
                r10 = &arg1[sx.q(rdi_1)]
                
                while (j_2 s< &data_143f48b28)
                    int64_t rax_8 = *j_2
                    r11_1.b = *r10 == rax_8
                    j_2 += 8
                    
                    if (*r10 == rax_8)
                        break
                
                result = sx.q(rbx_1.d)
                r9.b = 0
                void* j_3 = &data_143f48af0
                int64_t* r8_4 = &arg1[result]
                
                while (j_3 s< &data_143f48b28)
                    result = *j_3
                    r9.b = *r8_4 == result
                    j_3 += 8
                    
                    if (*r8_4 == result)
                        break
                
                if (r11_1.b u<= r9.b)
                    break
                
                rdi_1 = rbx_1.d
                int64_t rcx = *r10
                *r10 = *r8_4
                result = zx.q(((rbx_1 << 1) + 1).d)
                *r8_4 = rcx
            while (result.d s< arg2)
        
        r14_1 -= 2
        temp2_1 = rbp
        rbp -= 1
    while (temp2_1 - 1 s>= 0)

int32_t j_4 = arg2 - 1
int64_t i = sx.q(j_4)

if (j_4 s> 0)
    do
        result = arg1[i]
        int32_t rdi_2 = 0
        int64_t rcx_1 = *arg1
        *arg1 = result
        arg1[i] = rcx_1
        
        if (j_4 s> 1)
            do
                int32_t r11_2 = rdi_2 * 2
                uint64_t rbx_2 = zx.q(r11_2 + 1)
                
                if ((rbx_2 + 1).d s< j_4)
                    r10.b = 0
                    void* k = &data_143f48af0
                    void* r8_7 = &arg1[sx.q(r11_2) + 2]
                    
                    while (k s< &data_143f48b28)
                        int64_t rax_11 = *k
                        r10.b = *r8_7 == rax_11
                        k += 8
                        
                        if (*r8_7 == rax_11)
                            break
                    
                    r8_7.b = 0
                    void* k_1 = &data_143f48af0
                    r9 = &arg1[sx.q(rbx_2.d)]
                    
                    while (k_1 s< &data_143f48b28)
                        int64_t rax_13 = *k_1
                        r8_7.b = *r9 == rax_13
                        k_1 += 8
                        
                        if (*r9 == rax_13)
                            break
                    
                    if (r10.b u> r8_7.b)
                        rbx_2 = zx.q(r11_2)
                    
                    rbx_2 = zx.q(rbx_2.d + 1)
                
                r11_2.b = 0
                r10 = &arg1[sx.q(rdi_2)]
                void* k_2 = &data_143f48af0
                
                while (k_2 s< &data_143f48b28)
                    int64_t rcx_2 = *k_2
                    r11_2.b = *r10 == rcx_2
                    k_2 += 8
                    
                    if (*r10 == rcx_2)
                        break
                
                result = sx.q(rbx_2.d)
                r9.b = 0
                void* k_3 = &data_143f48af0
                int64_t* r8_8 = &arg1[result]
                
                while (k_3 s< &data_143f48b28)
                    result = *k_3
                    r9.b = *r8_8 == result
                    k_3 += 8
                    
                    if (*r8_8 == result)
                        break
                
                if (r11_2.b u<= r9.b)
                    break
                
                rdi_2 = rbx_2.d
                int64_t rcx_3 = *r10
                *r10 = *r8_8
                result = zx.q(((rbx_2 << 1) + 1).d)
                *r8_8 = rcx_3
            while (result.d s< j_4)
        
        j_4 -= 1
        i -= 1
    while (i s> 0)

return result
