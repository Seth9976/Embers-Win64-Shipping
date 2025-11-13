// 函数: sub_142ae7900
// 地址: 0x142ae7900
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 s< 0)
    return 

int64_t rbp_1 = sx.q(arg2)
int32_t rdi_1 = *(arg1 + 8)

if (rbp_1.d s<= rdi_1)
    int32_t i = rdi_1 - 1
    
    if (i s>= rbp_1.d)
        int64_t rsi_1 = sx.q(i) << 3
        
        do
            if (i s>= 0)
                int32_t rcx_1 = *(arg1 + 8)
                
                if (i s< rcx_1)
                    int32_t j = i
                    int64_t r9_1 = *(rsi_1 + *(arg1 + 0x10))
                    
                    if (i s< rcx_1 - 1)
                        int64_t rdx_2 = rsi_1
                        
                        do
                            int64_t* rcx_2 = *(arg1 + 0x10)
                            rdx_2 += 8
                            j += 1
                            *(rcx_2 + rdx_2 - 8) = *(rcx_2 + rdx_2)
                        while (j s< *(arg1 + 8) - 1)
                    
                    *(arg1 + 8) -= 1
                    
                    if (r9_1 != 0)
                        void* rax = *(arg1 + 0x18)
                        
                        if (rax != 0)
                            rax(r9_1)
            
            i -= 1
            rsi_1 -= 8
        while (i s>= rbp_1.d)
    
    *(arg1 + 8) = rbp_1.d
else if (sub_142ae7310(arg1, rbp_1.d, arg3).b != 0)
    int64_t rdx_1 = sx.q(*(arg1 + 8))
    
    if (rdx_1 s< rbp_1)
        do
            *(*(arg1 + 0x10) + (rdx_1 << 3)) = 0
            rdx_1 += 1
        while (rdx_1 s< rbp_1)
        
        *(arg1 + 8) = rbp_1.d
        return 
    
    *(arg1 + 8) = rbp_1.d
