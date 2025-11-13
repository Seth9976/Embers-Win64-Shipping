// 函数: sub_1426bdb00
// 地址: 0x1426bdb00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = &arg1[2]
int64_t r13 = 0
void* r11 = arg2
uint64_t rax

if (*rbx != 0)
label_1426bdbe0:
    int32_t r8_1 = *(r11 + 0x40)
    int32_t rdx_2 = 0
    uint64_t rcx_2
    
    if (r8_1 s<= 0)
    label_1426bdc07:
        rcx_2 = *(r11 + 0x30)
        
        if (rcx_2 == 0)
            rcx_2.b = 0xff
        else
            r11 = arg2
            rcx_2 = zx.q(sub_1426b5dd0(rcx_2, rbx, 0).b)
    else
        while (true)
            if (*(*(r11 + 0x38) + sx.q(rdx_2) * 0x18) == *rbx)
                rcx_2.b = *(r11 + 0x4c) + rdx_2.b
                break
            
            rdx_2 += 1
            
            if (rdx_2 s>= r8_1)
                goto label_1426bdc07
    
    arg1[4].b = rcx_2.b
    
    if (rcx_2.b != 0xff)
        char rax_2 = *(r11 + 0x4c)
        
        if (rcx_2.b u< rax_2)
            rax = *(r11 + 0x30)
            
            if (rax != 0)
                rax = sub_1426b21a0(rax, rcx_2.b)
                goto label_1426bdc78
        else
            rax = *(r11 + 0x38) + (zx.q(rcx_2.b) - zx.q(rax_2)) * 0x18
        label_1426bdc78:
            
            if (rax != 0)
                void* rcx_7 = *(rax + 8)
                
                if (rcx_7 != 0)
                    r13 = *(rcx_7 + 0x10)
    
    arg1[3] = r13
else if ((*(arg1 + 0x24) & 1) == 0)
    void* i = arg2
    
    if (arg2 != 0)
        do
            int32_t rbp_1 = 0
            
            if (*(i + 0x40) s> 0)
                int64_t r12_1 = 0
                
                while (true)
                    rax = *(i + 0x38)
                    uint64_t* r14_1 = r12_1 + rax
                    
                    if (*(r12_1 + rax + 8) != 0)
                        int32_t temp0_1 = arg1[1].d
                        
                        if (temp0_1 == 0)
                        label_1426bdc28:
                            rbx = &arg1[2]
                            *rbx = *r14_1
                            break
                        
                        int32_t rbx_1 = 0
                        
                        if (temp0_1 s> 0)
                            int64_t* rdi_1 = nullptr
                            
                            while (true)
                                int64_t* rcx = r14_1[1]
                                
                                if ((*(*rcx + 0x268))(rcx, *(rdi_1 + *arg1)).b != 0)
                                    break
                                
                                rbx_1 += 1
                                rdi_1 = &rdi_1[1]
                                
                                if (rbx_1 s>= arg1[1].d)
                                    goto label_1426bdba9
                            
                            goto label_1426bdc28
                    
                label_1426bdba9:
                    rbp_1 += 1
                    r12_1 += 0x18
                    
                    if (rbp_1 s>= *(i + 0x40))
                        rbx = &arg1[2]
                        break
            
            i = *(i + 0x30)
        while (i != 0)
        
        r11 = arg2
    
    goto label_1426bdbe0
