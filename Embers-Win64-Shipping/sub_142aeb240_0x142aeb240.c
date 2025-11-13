// 函数: sub_142aeb240
// 地址: 0x142aeb240
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax

if (*arg3 s<= 0)
    if (arg2 s>= 0)
        int32_t rdi = *(arg1 + 0xc)
        
        if (rdi s< arg2)
            int32_t rax_1 = *(arg1 + 0x10)
            
            if (rax_1 s> 0 && arg2 s> rax_1)
                rax_1.b = 0
                *arg3 = 0xf
                return rax_1
            
            int32_t rdi_1
            
            if (rdi s<= 0x3fffffff)
                rdi_1 = rdi * 2
                
                if (rdi_1 s< arg2)
                    rdi_1 = arg2
                
                if (rax_1 s> 0 && rdi_1 s> rax_1)
                    rdi_1 = rax_1
            
            if (rdi s> 0x3fffffff || rdi_1 s> 0xfffffff)
                rax_1.b = 0
                *arg3 = 1
                return rax_1
            
            rax = sub_142a7dd30(*(arg1 + 0x18), sx.q(rdi_1) << 3)
            
            if (rax == 0)
                *arg3 = 7
                return rax
            
            *(arg1 + 0x18) = rax
            *(arg1 + 0xc) = rdi_1
        
        rax.b = 1
        return rax
    
    *arg3 = 1

rax.b = 0
return rax
