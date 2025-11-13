// 函数: sub_142c44f00
// 地址: 0x142c44f00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* result = *(arg1 + 0x98)
int32_t rbx = *result

if (rbx != 0)
    int32_t r9_1 = 0
    int32_t rsi_1 = *(arg3 + 0x60)
    void* rdi_1 = *(arg3 + 0x70)
    
    if (rsi_1 != 0)
        result = nullptr
        
        do
            result = zx.q(result.d + 1)
            
            if (result.d u>= rsi_1)
                break
        while (*(rdi_1 + 0xf) == *(rdi_1 + result * 0x14 + 0xf))
        
        if (rsi_1 != 0)
            do
                if (r9_1 u< result.d)
                    void* r8_3 = rdi_1 + ((zx.q(r9_1) * 5 + 3) << 2)
                    
                    while ((*(r8_3 - 8) & rbx) != 0)
                        if ((*r8_3 u>> 4 & 1) != 0)
                            *(rdi_1 + zx.q(r9_1) * 0x14 + 0x12) = 0x12
                            break
                        
                        r9_1 += 1
                        r8_3 += 0x14
                        
                        if (r9_1 u>= result.d)
                            break
                
                int64_t r10_1 = *(arg3 + 0x70)
                r9_1 = result.d
                char i = *(r10_1 + result * 0x14 + 0xf)
                
                do
                    result = zx.q(result.d + 1)
                    
                    if (result.d u>= *(arg3 + 0x60))
                        break
                while (i == *(r10_1 + result * 0x14 + 0xf))
            while (r9_1 u< rsi_1)

return result
