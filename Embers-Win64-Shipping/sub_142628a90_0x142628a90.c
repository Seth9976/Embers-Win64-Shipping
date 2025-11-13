// 函数: sub_142628a90
// 地址: 0x142628a90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t arg_18 = arg3
int32_t rdi = arg2 - 1
int32_t rbp = -1
int64_t r15 = arg4
int64_t* rbx = arg1
int32_t rsi = -1

if (rdi s>= 0)
    int64_t rax_1 = sx.q(arg5)
    int32_t r12_1 = (rax_1 - 1).d
    int64_t* r11_2 = &arg1[sx.q(rdi)]
    int32_t temp0_1
    
    do
        arg3.b = 0
        int32_t rax_2 = r12_1
        
        if (r12_1 s>= 0)
            int64_t r9 = *r11_2
            int64_t* r10_1 = r15 + ((rax_1 - 1) << 3)
            int32_t temp3_1
            
            do
                int64_t temp1_1 = *r10_1
                r10_1 = &r10_1[-1]
                int32_t rcx = rax_2
                arg3 = zx.d(arg3.b)
                
                if (r9 != temp1_1)
                    rcx = rsi
                
                if (r9 == temp1_1)
                    arg3 = 1
                
                rsi = rcx
                int32_t rcx_1 = rdi
                
                if (r9 != temp1_1)
                    rcx_1 = rbp
                
                temp3_1 = rax_2
                rax_2 -= 1
                rbp = rcx_1
            while (temp3_1 - 1 s>= 0)
            r15 = arg4
            
            if (arg3.b != 0)
                break
        
        r11_2 -= 8
        temp0_1 = rdi
        rdi -= 1
    while (temp0_1 - 1 s>= 0)
    
    if (rbp != 0xffffffff && rsi s>= 1)
        int32_t r14_1 = arg2 - rbp
        int64_t rdi_1 = 0
        
        if (arg2 - rbp s< 0)
            r14_1 = 0
        
        int32_t r12_3 = arg_18 - rsi
        
        if (r14_1 + rsi s<= arg_18)
            r12_3 = r14_1
        
        int64_t r14_2 = sx.q(rsi)
        
        if (r12_3 != 0)
            memmove(&rbx[r14_2], &rbx[sx.q(rbp)], r12_3 << 3)
        
        if (rsi s> 0)
            int64_t* r15_1 = r15 - rbx
            
            do
                rdi_1 += 1
                *rbx = *(r15_1 + rbx)
                rbx = &rbx[1]
            while (rdi_1 s< r14_2)
        
        return zx.q(r12_3 + rsi)

return zx.q(arg2)
