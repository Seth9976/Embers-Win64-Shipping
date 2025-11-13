// 函数: sub_142c452d0
// 地址: 0x142c452d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* result = *(arg1 + 0x98)
int32_t rbx = *result

if (rbx != 0)
    int32_t r8_1 = 0
    void* rsi_1 = *(arg2 + 0x70)
    int32_t rdi_1 = *(arg2 + 0x60)
    
    if (rdi_1 != 0)
        result = nullptr
        
        do
            result = zx.q(result.d + 1)
            
            if (result.d u>= rdi_1)
                break
        while (*(rsi_1 + 0xf) == *(rsi_1 + result * 0x14 + 0xf))
        
        if (rdi_1 != 0)
            do
                uint64_t rdx_1 = zx.q(r8_1) * 5
                int32_t rcx_1
                
                if (*(rsi_1 + (rdx_1 << 2) + 0x12) != 0x12)
                    rcx_1 = result.d - r8_1
                    
                    if (rcx_1 u> 3)
                        rcx_1 = 3
                else
                    rcx_1 = 1
                
                int32_t rdx_2 = rcx_1 + r8_1
                
                if (r8_1 u< rdx_2)
                    void* rcx_3 = rsi_1 + (rdx_1 << 2) + 4
                    uint64_t i_2 = zx.q(rdx_2 - r8_1)
                    uint64_t i
                    
                    do
                        *rcx_3 |= rbx
                        rcx_3 += 0x14
                        i = i_2
                        i_2 -= 1
                    while (i != 1)
                
                int64_t r10_1 = *(arg2 + 0x70)
                r8_1 = result.d
                char i_1 = *(r10_1 + result * 0x14 + 0xf)
                
                do
                    result = zx.q(result.d + 1)
                    
                    if (result.d u>= *(arg2 + 0x60))
                        break
                while (i_1 == *(r10_1 + result * 0x14 + 0xf))
            while (r8_1 u< rdi_1)

return result
