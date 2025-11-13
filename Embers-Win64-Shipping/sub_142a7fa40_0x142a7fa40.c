// 函数: sub_142a7fa40
// 地址: 0x142a7fa40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbp = *(arg1 + 0x78)

if ((*(arg1 + 0xbc) & 0x7ddb80) == 0)
    return 

int64_t i_1 = sx.q(*(arg1 + 0xc4))
int64_t i = i_1
char r14_1 = *(arg1 + 0x8c)

if (i_1.d s<= 0)
    return 

int64_t r15_1 = *(arg1 + 0x70) - rbp

do
    char* rdi_1 = i + rbp
    uint64_t rax
    
    while (true)
        char rcx = rdi_1[r15_1 - 1]
        rdi_1 = &rdi_1[-1]
        i_1 = zx.q(i_1.d - 1)
        rax = zx.q(1 << rcx)
        i -= 1
        
        if ((rax.d & 0x7ddb80) == 0)
            break
        
        if (r14_1 == 0 || rax.b s>= 0)
            int32_t* rbx_1
            
            if (*(arg1 + 0x8e) != 0)
                rbx_1 = *(arg1 + 0xd0)
            
            char rcx_2
            
            if (*(arg1 + 0x8e) == 0 || i_1.d s< *rbx_1)
                rcx_2 = *(arg1 + 0x8d)
            else
                int64_t r11_1 = sx.q(*(arg1 + 0xc8))
                int32_t rcx_1 = 0
                int64_t rdx_1 = 0
                
                if (r11_1.d s> 0)
                    int32_t* rax_1 = rbx_1
                    
                    while (i_1.d s>= *rax_1)
                        rcx_1 += 1
                        rdx_1 += 1
                        rax_1 = &rax_1[2]
                        
                        if (rdx_1 s>= r11_1)
                            break
                
                if (rcx_1 s>= r11_1.d)
                    rcx_1 = (r11_1 - 1).d
                
                rcx_2 = rbx_1[sx.q(rcx_1) * 2 + 1].b
            
            *rdi_1 = rcx_2
        else
            *rdi_1 = 0
        
        if (i s<= 0)
            return 
    
    if (i s<= 0)
        break
    
    char* rdx_2 = i + rbp
    
    while (true)
        char rcx_3 = rdx_2[r15_1 - 1]
        rdx_2 = &rdx_2[-1]
        i_1 = zx.q(i_1.d - 1)
        rax = zx.q(1 << rcx_3)
        i -= 1
        
        if ((rax.d & 0x5d800) == 0)
            if (r14_1 != 0 && rax.b s< 0)
                *(i + rbp) = 0
                break
            
            if ((rax.d & 0x180) != 0)
                int32_t* rbx_2
                
                if (*(arg1 + 0x8e) != 0)
                    rbx_2 = *(arg1 + 0xd0)
                
                char rcx_5
                
                if (*(arg1 + 0x8e) == 0 || i_1.d s< *rbx_2)
                    rcx_5 = *(arg1 + 0x8d)
                else
                    int64_t r11_2 = sx.q(*(arg1 + 0xc8))
                    int32_t rcx_4 = 0
                    int64_t rdx_3 = 0
                    
                    if (r11_2.d s> 0)
                        int32_t* rax_2 = rbx_2
                        
                        while (i_1.d s>= *rax_2)
                            rcx_4 += 1
                            rdx_3 += 1
                            rax_2 = &rax_2[2]
                            
                            if (rdx_3 s>= r11_2)
                                break
                    
                    if (rcx_4 s>= r11_2.d)
                        rcx_4 = (r11_2 - 1).d
                    
                    rcx_5 = rbx_2[sx.q(rcx_4) * 2 + 1].b
                
                *(i + rbp) = rcx_5
                break
        else
            *rdx_2 = *(i + rbp + 1)
        
        if (i s<= 0)
            return 
while (i s> 0)
