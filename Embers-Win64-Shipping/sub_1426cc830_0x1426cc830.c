// 函数: sub_1426cc830
// 地址: 0x1426cc830
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r9 = *(arg1 + 0x48)
int32_t r8 = 0
int64_t* rax

if (r9 s> 0)
    rax = *(arg1 + 0x40)
    
    do
        void* rdx = *rax
        
        if (*(rdx + 0x30) == arg2 && *(rdx + 0x28) == 0)
            *(rdx + 0x28) = 3
            void* rcx = rax[1]
            void* rdx_1 = *rax
            void* var_18 = rdx_1
            void* var_10 = rcx
            
            if (rcx != 0)
                *(rcx + 8) += 1
                rdx_1 = *rax
            
            sub_140eb9770(rdx_1 + 0x60, &var_18)
            *(arg1 + 0x50) += 1
            int64_t rax_1
            rax_1.b = 1
            return rax_1
        
        r8 += 1
        rax = &rax[2]
    while (r8 s< r9)

rax.b = 0
return rax
