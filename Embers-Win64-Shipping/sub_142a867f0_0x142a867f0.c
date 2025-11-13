// 函数: sub_142a867f0
// 地址: 0x142a867f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = arg1[6].d
int64_t r15 = *arg1
int32_t rdi = *(arg1 + 0x34)
int32_t rdx = sx.d(arg1[9].b)
int32_t rdx_1

if (result s> arg1[7].d)
    rdx_1 = rdx + 1
    
    if (rdx_1 s< 0x1d)
    label_142a86837:
        result = sub_142a863b0(arg1, rdx_1, arg2)
        
        if (*arg2 s<= 0)
            int32_t rdi_1 = rdi - 1
            
            if (rdi - 1 s>= 0)
                int32_t* rbx_1 = r15 + sx.q(rdi_1) * 0x18
                int64_t* r14_1 = &rbx_1[4]
                int32_t temp2_1
                
                do
                    int32_t r8_2 = *rbx_1
                    
                    if (r8_2 s>= 0)
                        int32_t* rax_1 = sub_142a86530(arg1, *r14_1, r8_2)
                        *(rax_1 + 0x10) = *(rbx_1 + 0x10)
                        *(rax_1 + 8) = *(rbx_1 + 8)
                        *rax_1 = *rbx_1
                        arg1[6].d += 1
                    
                    r14_1 -= 0x18
                    rbx_1 -= 0x18
                    temp2_1 = rdi_1
                    rdi_1 -= 1
                while (temp2_1 - 1 s>= 0)
            
            return sub_142a7dcd0(r15)
        
        *arg1 = r15
        *(arg1 + 0x34) = rdi
else if (result s< *(arg1 + 0x3c))
    rdx_1 = rdx - 1
    
    if (rdx - 1 s>= 0)
        goto label_142a86837
return result
