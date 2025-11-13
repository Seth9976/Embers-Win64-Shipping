// 函数: sub_140a1c480
// 地址: 0x140a1c480
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = arg4
int16_t* rsi = arg3
int32_t rbx = arg2
int16_t* r14 = arg1
int16_t i

if (arg4 != 0)
    while (true)
        int16_t rdx = *rsi
        
        if (rdx == 0x2a || rdx == 0x3f)
            void* r8 = &r14[sx.q(rbx) - 1]
            i = rsi[sx.q(rdi) - 1]
            void* rcx_1 = &rsi[sx.q(rdi) - 1]
            
            if (i != 0x2a)
                while (i != 0x3f)
                    if (*r8 != i)
                        goto label_140a1c593
                    
                    rdi -= 1
                    int32_t temp1_1 = rbx
                    rbx -= 1
                    
                    if (temp1_1 == 1)
                        break
                    
                    i = *(rcx_1 - 2)
                    rcx_1 -= 2
                    r8 -= 2
                    
                    if (i == 0x2a)
                        break
            
            if (rdi == 1 && (rdx == 0x2a || rbx s< 2))
                i.b = 1
                return i
            
            int32_t r15_1 = rbx
            
            if (rdx == 0x3f && rbx s> 1)
                r15_1 = 1
            
            int32_t rbp_1 = 0
            
            if (r15_1 s>= 0)
                while (sub_140a1c480(&r14[sx.q(rbp_1)], zx.q(rbx), &rsi[1], zx.q(rdi - 1)).b == 0)
                    rbp_1 += 1
                    rbx -= 1
                    
                    if (rbp_1 s> r15_1)
                        goto label_140a1c593
                
                i.b = 1
                return i
        else if (*r14 == rdx)
            r14 = &r14[1]
            rsi = &rsi[1]
            rbx -= 1
            int32_t temp0_1 = rdi
            rdi -= 1
            
            if (temp0_1 == 1)
                break
            
            continue
        
    label_140a1c593:
        i.b = 0
        return i

i.b = rbx == 0
return i
