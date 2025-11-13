// 函数: sub_140961fb0
// 地址: 0x140961fb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rsi = 0
int32_t i = 0

if (*(arg1 + 0x60) s> 0)
    int64_t r15_1 = 0
    
    do
        int32_t* rbx_2 = *(arg1 + 0x58) + r15_1
        
        if (*rbx_2 == arg2)
            int32_t j = 0
            
            if (rbx_2[0xe] s> 0)
                int64_t rdi_1 = 0
                
                do
                    int64_t* rcx_1 = *(rdi_1 + *(rbx_2 + 0x30) + 8)
                    
                    if (rcx_1 == 0)
                        rcx_1.b = 0
                    else
                        char rax_2
                        rax_2, rcx_1 = (*(*rcx_1 + 0x28))(rcx_1)
                        
                        if (rax_2 == 0)
                            rcx_1.b = 0
                        else
                            rcx_1.b = 1
                    
                    int32_t rax_3 = rsi + 1
                    
                    if (rcx_1.b == 0)
                        rax_3 = rsi
                    
                    j += 1
                    rdi_1 += 0x50
                    rsi = rax_3
                while (j s< rbx_2[0xe])
        
        i += 1
        r15_1 += 0x50
    while (i s< *(arg1 + 0x60))

return zx.q(rsi)
