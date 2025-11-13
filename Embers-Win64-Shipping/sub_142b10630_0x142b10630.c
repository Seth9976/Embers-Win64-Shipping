// 函数: sub_142b10630
// 地址: 0x142b10630
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbp = 0
int32_t rdi = arg3
int16_t* rbx = arg2
bool cond:0 = arg3 == 0

if (arg3 s< 0)
    cond:0 = *arg2 == 0

int32_t rax
rax.b = cond:0
void* rax_1 = *(arg1 + 0x10)
int32_t rax_2

if (rax == 0)
    if (rax_1 != 0)
        int32_t rdx = *(arg1 + 0x18)
    label_142b106a0:
        bool cond:2_1 = rdi == 0
        uint32_t r8
        
        if (rdi s>= 0)
            while (true)
                if (cond:2_1)
                label_142b107aa:
                    *(arg1 + 0x10) = rax_1
                    *(arg1 + 0x18) = rdx
                    
                    if (rdx s>= 0)
                        goto label_142b10673_1
                    
                    goto label_142b107b9
                
                r8 = zx.d(*rbx)
                rdi -= 1
                rbx = &rbx[1]
                
                if (rdx s< 0)
                label_142b106fa:
                    *(arg1 + 0x18) = rdx
                    uint32_t rdx_1 = zx.d(*rax_1)
                    void* rax_4 = rax_1 + 2
                    
                    while (true)
                        if (rdx_1 u< 0x30)
                            rax_2 = sub_142b10380(arg1, rax_4, rdx_1, r8)
                            
                            if (rax_2 == 0)
                                goto label_142b10678
                            
                            if (rdi s>= 0)
                                if (rdi == 0)
                                    break
                                
                                r8 = zx.d(*rbx)
                                rdi -= 1
                            else
                                r8 = zx.d(*rbx)
                                
                                if (r8 == 0)
                                    break
                            
                            if (rax_2 != 2)
                                int16_t* rax_5 = *(arg1 + 0x10)
                                rdx_1 = zx.d(*rax_5)
                                rax_4 = &rax_5[1]
                                rbx = &rbx[1]
                                continue
                        else if (rdx_1 u< 0x40)
                            if (r8 == zx.d(*rax_4))
                                rax_1 = rax_4 + 2
                                rdx = rdx_1 - 0x31
                                goto label_142b106a0
                        else if (not(test_bit(rdx_1, 0xf)))
                            if (rdx_1 u>= 0x4040)
                                if (rdx_1 u>= 0x7fc0)
                                    rax_4 += 4
                                else
                                    rax_4 += 2
                                    rdx_1 &= 0x3f
                                    continue
                            
                            rdx_1 &= 0x3f
                            continue
                        
                        *(arg1 + 0x10) = 0
                        return zx.q(rbp)
                    
                    goto label_142b1067a
                
                if (r8 != zx.d(*rax_1))
                    break
                
                rax_1 += 2
                rdx -= 1
                cond:2_1 = rdi == 0
        else
            while (true)
                r8 = zx.d(*rbx)
                rbx = &rbx[1]
                
                if (r8 == 0)
                    goto label_142b107aa
                
                if (rdx s< 0)
                    goto label_142b106fa
                
                if (r8 != zx.d(*rax_1))
                    break
                
                rax_1 += 2
                rdx -= 1
        *(arg1 + 0x10) = 0
else if (rax_1 != 0)
    if (*(arg1 + 0x18) s< 0)
    label_142b107b9:
        uint32_t rcx_4 = zx.d(*rax_1)
        
        if (rcx_4 u< 0x40)
        label_142b10673:
            rbp = 1
        else
            rbp = 3 - (rcx_4 u>> 0xf)
    else
    label_142b10673_1:
        rbp = 1

label_142b10678:
rax_2 = rbp
label_142b1067a:
return zx.q(rax_2)
