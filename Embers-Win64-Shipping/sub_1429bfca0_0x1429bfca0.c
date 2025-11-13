// 函数: sub_1429bfca0
// 地址: 0x1429bfca0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* rbp = arg2
int32_t** result = arg1
int32_t* r15_1 = &arg2[(arg3 - arg2) s>> 3]
int64_t rax_5 = (arg3 - 4 - arg2) s>> 2

if (rax_5 s<= 0x28)
    sub_1429bfbb0(rbp, r15_1, arg3 - 4, arg4)
else
    int64_t rax_7 = (rax_5 + 1) s>> 3
    int64_t rsi_1 = rax_7 << 2
    int32_t* rbp_1 = &rbp[rax_7]
    sub_1429bfbb0(arg2, rbp_1, &arg2[rax_7 * 2], arg4)
    sub_1429bfbb0(r15_1 - rsi_1, r15_1, &r15_1[rax_7], arg4)
    int32_t* rdi_2 = arg3 - 4 - rsi_1
    sub_1429bfbb0(arg3 - 4 - (rax_7 << 3), rdi_2, arg3 - 4, arg4)
    sub_1429bfbb0(rbp_1, r15_1, rdi_2, arg4)
    rbp = arg2
    result = arg1

void* i_1 = &r15_1[1]
int32_t zmm0_1
int32_t zmm1_1
int32_t zmm2
int32_t zmm3

if (rbp u< r15_1)
    int64_t rdi_3 = *arg4
    int32_t* rcx_7 = r15_1
    
    do
        int64_t r8_5 = sx.q(*r15_1)
        int64_t r9_3 = sx.q(r15_1[-1])
        zmm1_1 = *(rdi_3 + (r8_5 << 2))
        zmm0_1 = *(rdi_3 + (r9_3 << 2))
        
        if (zmm1_1 f> zmm0_1)
            break
        
        if (zmm0_1 f> zmm1_1)
            break
        
        int64_t rax_8 = arg4[1]
        zmm2 = *(rax_8 + (r9_3 << 2))
        zmm3 = *(rax_8 + (r8_5 << 2))
        
        if (zmm3 f> zmm2)
            break
        
        if (not(zmm2 f> zmm3) && r9_3.d s< r8_5.d)
            break
        
        if (zmm0_1 f> zmm1_1)
            break
        
        if (not(zmm1_1 f> zmm0_1))
            int64_t rax_9 = arg4[1]
            zmm0_1 = *(rax_9 + (r8_5 << 2))
            zmm1_1 = *(rax_9 + (r9_3 << 2))
            
            if (zmm1_1 f> zmm0_1)
                break
            
            if (not(zmm0_1 f> zmm1_1) && r8_5.d s< r9_3.d)
                break
        
        r15_1 = &rcx_7[-1]
        rcx_7 = r15_1
    while (rbp u< r15_1)

if (i_1 u< arg3)
    int64_t r9_4 = sx.q(*r15_1)
    int64_t r11_1 = *arg4
    zmm1_1 = *(r11_1 + (r9_4 << 2))
    
    do
        int64_t rcx_8 = sx.q(*i_1)
        zmm0_1 = *(r11_1 + (rcx_8 << 2))
        
        if (zmm1_1 f> zmm0_1)
            break
        
        if (zmm0_1 f> zmm1_1)
            break
        
        int64_t rax_10 = arg4[1]
        zmm2 = *(rax_10 + (rcx_8 << 2))
        zmm3 = *(rax_10 + (r9_4 << 2))
        
        if (zmm3 f> zmm2)
            break
        
        if (not(zmm2 f> zmm3) && rcx_8.d s< r9_4.d)
            break
        
        if (zmm0_1 f> zmm1_1)
            break
        
        if (not(zmm1_1 f> zmm0_1))
            int64_t rax_11 = arg4[1]
            zmm0_1 = *(rax_11 + (r9_4 << 2))
            zmm2 = *(rax_11 + (rcx_8 << 2))
            
            if (zmm2 f> zmm0_1)
                break
            
            if (not(zmm0_1 f> zmm2) && r9_4.d s< rcx_8.d)
                break
        
        i_1 += 4
    while (i_1 u< arg3)

void* i = i_1
int32_t* r9_5 = r15_1

while (true)
    for (; i u< arg3; i += 4)
        int64_t rax_12 = *arg4
        int64_t rcx_9 = sx.q(*i)
        int64_t r10_1 = sx.q(*r15_1)
        zmm1_1 = *(rax_12 + (rcx_9 << 2))
        zmm0_1 = *(rax_12 + (r10_1 << 2))
        
        if (not(zmm1_1 f> zmm0_1))
            if (zmm0_1 f> zmm1_1)
                break
            
            int64_t rax_13 = arg4[1]
            zmm2 = *(rax_13 + (r10_1 << 2))
            zmm3 = *(rax_13 + (rcx_9 << 2))
            
            if (not(zmm3 f> zmm2) && (zmm2 f> zmm3 || r10_1.d s>= rcx_9.d))
                if (zmm0_1 f> zmm1_1)
                    break
                
                if (not(zmm1_1 f> zmm0_1))
                    int64_t rax_14 = arg4[1]
                    zmm0_1 = *(rax_14 + (rcx_9 << 2))
                    zmm1_1 = *(rax_14 + (r10_1 << 2))
                    
                    if (zmm1_1 f> zmm0_1)
                        break
                    
                    if (not(zmm0_1 f> zmm1_1) && rcx_9.d s< r10_1.d)
                        break
                
                if (i_1 != i)
                    int32_t rax_15 = *i_1
                    *i_1 = rcx_9.d
                    *i = rax_15
                
                i_1 += 4
    
    bool cond:0_1 = r9_5 != rbp
    
    if (r9_5 u> rbp)
        void* rcx_10 = &r9_5[-1]
        
        do
            int64_t rax_16 = *arg4
            int64_t r11_2 = sx.q(*r15_1)
            int64_t r10_2 = sx.q(*rcx_10)
            zmm1_1 = *(rax_16 + (r11_2 << 2))
            zmm0_1 = *(rax_16 + (r10_2 << 2))
            
            if (not(zmm1_1 f> zmm0_1))
                if (zmm0_1 f> zmm1_1)
                    break
                
                int64_t rax_17 = arg4[1]
                zmm2 = *(rax_17 + (r10_2 << 2))
                zmm3 = *(rax_17 + (r11_2 << 2))
                
                if (not(zmm3 f> zmm2) && (zmm2 f> zmm3 || r10_2.d s>= r11_2.d))
                    if (zmm0_1 f> zmm1_1)
                        break
                    
                    if (not(zmm1_1 f> zmm0_1))
                        int64_t rax_18 = arg4[1]
                        zmm0_1 = *(rax_18 + (r11_2 << 2))
                        zmm1_1 = *(rax_18 + (r10_2 << 2))
                        
                        if (zmm1_1 f> zmm0_1)
                            break
                        
                        if (not(zmm0_1 f> zmm1_1) && r11_2.d s< r10_2.d)
                            break
                    
                    r15_1 -= 4
                    
                    if (r15_1 != rcx_10)
                        int32_t rax_19 = *r15_1
                        *r15_1 = r10_2.d
                        *rcx_10 = rax_19
            
            r9_5 -= 4
            rcx_10 -= 4
        while (rbp u< r9_5)
        
        cond:0_1 = r9_5 != rbp
    
    if (cond:0_1)
        r9_5 = &r9_5[-1]
        
        if (i != arg3)
            int32_t rcx_15 = *i
            *i = *r9_5
            i += 4
            *r9_5 = rcx_15
        else
            r15_1 -= 4
            
            if (r9_5 != r15_1)
                int32_t rcx_13 = *r9_5
                *r9_5 = *r15_1
                *r15_1 = rcx_13
            
            int32_t rax_23 = *(i_1 - 4)
            i_1 -= 4
            int32_t rcx_14 = *r15_1
            *r15_1 = rax_23
            *i_1 = rcx_14
    else
        if (i == arg3)
            break
        
        if (i_1 != i)
            int32_t rcx_11 = *r15_1
            *r15_1 = *i_1
            *i_1 = rcx_11
        
        int32_t rcx_12 = *r15_1
        i_1 += 4
        *r15_1 = *i
        r15_1 = &r15_1[1]
        *i = rcx_12
        i += 4

*result = r15_1
result[1] = i_1
return result
