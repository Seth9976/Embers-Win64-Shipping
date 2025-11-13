// 函数: sub_1417b10e0
// 地址: 0x1417b10e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char r11 = arg4
int32_t rdi = arg1[1].d
int32_t result
int32_t r13_2

if (rdi == 0)
    result = arg1[0x30].d
    r13_2 = *(arg1 + 0x184)
else
    int32_t rdi_1 = rdi - 1
    int64_t rsi_1 = sx.q(rdi_1) * 0xc
    int32_t r13 = *(rsi_1 + *arg1)
    arg1[0x30].d = r13
    
    if (rdi - 1 s>= 0)
        int64_t r14_1 = rsi_1
        int64_t r15_1 = rsi_1
        int32_t temp1_1
        
        do
            int64_t r9 = *arg1
            int32_t rax_2 = arg1[0x30].d
            int32_t rcx = *(r15_1 + r9)
            
            if (rax_2 s<= rcx)
                rcx = rax_2
            
            arg1[0x30].d = rcx
            int32_t rax_3 = *(r15_1 + r9)
            int32_t rdx = *(r15_1 + r9 + 4)
            
            if (r13 s>= rax_3)
                rax_3 = r13
            
            if (rcx s<= rdx)
                rdx = rcx
            
            arg1[0x30].d = rdx
            int32_t rcx_1 = *(r15_1 + r9 + 4)
            
            if (rax_3 s>= rcx_1)
                rcx_1 = rax_3
            
            int32_t rax_4 = *(r15_1 + r9 + 8)
            
            if (rdx s<= rax_4)
                rax_4 = rdx
            
            arg1[0x30].d = rax_4
            r13 = *(r15_1 + r9 + 8)
            
            if (rcx_1 s>= r13)
                r13 = rcx_1
            
            if (r11 != 0)
                int32_t rdx_1 = *(rsi_1 + r9 + 4)
                int32_t rax_5 = *(rsi_1 + r9)
                int32_t rcx_2
                
                if (rax_5 != rdx_1)
                    rcx_2 = *(rsi_1 + r9 + 8)
                
                if (rax_5 == rdx_1 || rax_5 == rcx_2 || rdx_1 == rcx_2)
                    int32_t rdx_2 = arg1[1].d
                    int32_t rax_8 = rdx_2 - rdi_1 - 1
                    
                    if (rax_8 s>= 1)
                        rax_8 = 1
                    
                    if (rax_8 != 0)
                        memcpy(r14_1 + r9, r9 + sx.q(rdx_2 - rax_8) * 0xc, rax_8 * 0xc)
                        rdx_2 = arg1[1].d
                    
                    arg1[1].d = rdx_2 - 1
                    sub_140775970(arg1)
                    r11 = arg4
            
            r14_1 -= 0xc
            r15_1 -= 0xc
            rsi_1 -= 0xc
            temp1_1 = rdi_1
            rdi_1 -= 1
        while (temp1_1 - 1 s>= 0)
    
    result = arg1[0x30].d
    r13_2 = r13 - result + 1
    *(arg1 + 0x184) = r13_2

if (arg2 s<= result && arg3 s>= r13_2 - 1 + result)
    arg1[0x30].d = arg2
    *(arg1 + 0x184) = arg3 - arg2 + 1

return result
