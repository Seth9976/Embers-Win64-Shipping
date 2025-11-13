// 函数: sub_1403e8940
// 地址: 0x1403e8940
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_18 = arg3
int64_t r15 = sx.q(arg3)
int32_t r13 = 0
int32_t r12 = arg3 - 1
int64_t arg_20 = r15
int32_t result

while (true)
    int32_t rbp_1 = sx.d(*arg2)
    int32_t rdx = 1
    int32_t rdi_1 = 0
    int64_t r10_1 = 0
    int32_t r11_2 = sx.d(*arg1) - rbp_1
    int64_t r9_1 = 1
    
    if (r12 s>= 1)
        void* r8 = &arg1[1]
        
        do
            int32_t rcx_2 = sx.d(*r8) - sx.d(*(arg2 - arg1 + r8)) - sx.d(*(r8 - 2))
            
            if (rcx_2 s< r11_2)
                r11_2 = rcx_2
                rdi_1 = rdx
                r10_1 = r9_1
            
            rdx += 1
            r9_1 += 1
            r8 += 2
        while (rdx s<= r12)
        
        arg3 = arg_18
    
    int32_t rdx_1 = sx.d(arg2[r15])
    result = sx.d(arg1[r15 - 1])
    int32_t rcx_4 = 0x8000 - rdx_1 - result
    
    if (rcx_4 s< r11_2)
        r11_2 = rcx_4
        rdi_1 = arg3
        r10_1 = r15
    
    if (r11_2 s>= 0)
        break
    
    if (rdi_1 == 0)
        *arg1 = rbp_1.w
    else if (rdi_1 != arg3)
        int32_t rax_3 = 0
        int64_t rdx_2 = 0
        
        if (r10_1 s> 0)
            do
                int32_t rcx_5 = sx.d(arg2[rdx_2])
                rdx_2 += 1
                rax_3 += rcx_5
            while (rdx_2 s< r10_1)
        
        int64_t rdx_3 = arg_20
        int32_t r9_2 = 0x8000
        int32_t rsi_3 = sx.d(arg2[r10_1])
        int32_t r8_2 = rsi_3 s>> 1
        result = rax_3 + r8_2
        
        while (rdx_3 s> r10_1)
            int32_t rcx_6 = sx.d(arg2[rdx_3])
            rdx_3 -= 1
            r9_2 -= rcx_6
        
        void* r11_4 = &arg1[r10_1]
        int32_t r9_3 = r9_2 - r8_2
        int32_t rdi_2 = sx.d(*(r11_4 - 2))
        int32_t r10_2 = sx.d(*r11_4)
        int32_t r8_3 = rdi_2 + r10_2
        int32_t rcx_8 = r8_3 s>> 1
        int32_t rdx_4 = (r8_3 & 1) + rcx_8
        
        if (result s<= r9_3)
            if (rdx_4 s> r9_3)
                result = zx.d(r9_3.w)
            else if (rdx_4 s>= result)
                result.w = (rdi_2 + r10_2).w & 1
                result.w += rcx_8.w
        else if (rdx_4 s<= result)
            if (rdx_4 s>= r9_3)
                result.w = (rdi_2 + r10_2).w & 1
                result.w += rcx_8.w
            else
                result = zx.d(r9_3.w)
        
        rsi_3.w s>>= 1
        result.w -= rsi_3.w
        *(r11_4 - 2) = result.w
        result.w += arg2[r10_1]
        r15 = arg_20
        *r11_4 = result.w
    else
        result.w = 0x8000 - rdx_1.w
        arg1[r15 - 1] = result.w
    
    arg3 = arg_18
    r13 += 1
    
    if (r13 s>= 0x14)
        if (r13 == 0x14)
            sub_1403e8ed0(arg1, arg3)
            int32_t rcx_10 = sx.d(*arg2)
            int32_t rax_4 = sx.d(*arg1)
            
            if (rax_4 s> rcx_10)
                rcx_10.w = rax_4.w
            
            *arg1 = rcx_10.w
            
            if (r15 s> 1)
                void* rdx_6 = &arg1[1]
                int64_t i_1 = r15 - 1
                int64_t i
                
                do
                    void* rax_5 = rdx_6 + arg2 - arg1
                    rdx_6 += 2
                    int32_t rcx_12 = sx.d(*(rax_5 + arg1 - arg2 - 2)) + sx.d(*rax_5)
                    int32_t rax_7 = sx.d(*(rdx_6 - 2))
                    
                    if (rax_7 s> rcx_12)
                        rcx_12.w = rax_7.w
                    
                    *(rdx_6 - 2) = rcx_12.w
                    i = i_1
                    i_1 -= 1
                while (i != 1)
            
            int32_t rsi_4 = 0x8000 - sx.d(arg2[r15])
            int32_t rax_9 = sx.d(arg1[r15 - 1])
            
            if (rax_9 s< rsi_4)
                rsi_4.w = rax_9.w
            
            result = arg3 - 2
            arg1[r15 - 1] = rsi_4.w
            int64_t result_1 = sx.q(result)
            
            if (result s>= 0)
                void* rdx_7 = &arg1[result_1]
                int64_t result_2
                
                do
                    int16_t* rax_10 = arg2 - arg1 + 2 + rdx_7
                    rdx_7 -= 2
                    int32_t rcx_14 = sx.d(*(rax_10 + arg1 - arg2)) - sx.d(*rax_10)
                    result = sx.d(*(rdx_7 + 2))
                    
                    if (result s< rcx_14)
                        rcx_14.w = result.w
                    
                    result_2 = result_1
                    result_1 -= 1
                    *(rdx_7 + 2) = rcx_14.w
                while (result_2 - 1 s>= 0)
        
        break

return result
