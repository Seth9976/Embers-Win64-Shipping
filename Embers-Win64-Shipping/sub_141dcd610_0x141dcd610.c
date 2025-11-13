// 函数: sub_141dcd610
// 地址: 0x141dcd610
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = *(arg1 + 0x48)

if ((result.b & 1) == 0)
    result |= 1
    int32_t i = 0
    *(arg1 + 0x48) = result
    
    if (*(arg1 + 0x30) s> 0)
        int64_t rsi_1 = 0
        
        do
            void* rdi_1 = *(arg1 + 0x28)
            void* const rdx_1
            
            if (*(rdi_1 + rsi_1 + 0x20) == 0)
                rdx_1 = nullptr
            else
                void* rax = sub_1425492f0()
                
                if (rax == 0)
                    rdx_1 = nullptr
                else
                    rdx_1 = *(rdi_1 + rsi_1 + 0x20)
                    int64_t rax_1 = sx.q(*(rax + 0x38))
                    
                    if (rax_1.d s> *(rdx_1 + 0x38)
                            || *(*(rdx_1 + 0x30) + (rax_1 << 3)) != rax + 0x30)
                        rdx_1 = nullptr
            
            result = sub_140d3a3a0(rdi_1 + 0x28 + rsi_1, rdx_1)
            i += 1
            rsi_1 += 0x48
        while (i s< *(arg1 + 0x30))
    
    int32_t i_1 = 0
    
    if (*(arg1 + 0x40) s> 0)
        int64_t rsi_2 = 0
        
        do
            void* rdi_2 = *(arg1 + 0x38)
            void* const rdx_2
            
            if (*(rdi_2 + rsi_2 + 0x20) == 0)
                rdx_2 = nullptr
            else
                void* rax_3 = sub_1425492f0()
                
                if (rax_3 == 0)
                    rdx_2 = nullptr
                else
                    rdx_2 = *(rdi_2 + rsi_2 + 0x20)
                    int64_t rax_4 = sx.q(*(rax_3 + 0x38))
                    
                    if (rax_4.d s> *(rdx_2 + 0x38)
                            || *(*(rdx_2 + 0x30) + (rax_4 << 3)) != rax_3 + 0x30)
                        rdx_2 = nullptr
            
            result = sub_140d3a3a0(rdi_2 + 0x28 + rsi_2, rdx_2)
            i_1 += 1
            rsi_2 += 0x60
        while (i_1 s< *(arg1 + 0x40))

return result
