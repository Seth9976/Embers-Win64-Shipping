// 函数: sub_1408c0250
// 地址: 0x1408c0250
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t zmm1

if (*(arg1 + 0x280) == 0 && *(arg1 + 0x282) == 0)
    zmm1 = *(arg1 + 0xd0)

int64_t result

if (*(arg1 + 0x280) != 0 || *(arg1 + 0x282) != 0 || zmm1 f<= *(arg1 + 0xc) || not(zmm1 f> 0f))
    int32_t i = 0
    
    if (*(arg1 + 0xc8) s> 0)
        int64_t rsi_1 = 0
        
        do
            result = *(arg1 + 0xc0)
            int32_t j = 0
            
            if (*(rsi_1 + result + 0x18) s> 0)
                int64_t* rdi_1 = nullptr
                
                do
                    if (sub_1408c0250(*(rdi_1 + *(rsi_1 + result + 0x10))).b == 0)
                        goto label_1408c0313
                    
                    result = *(arg1 + 0xc0)
                    j += 1
                    rdi_1 = &rdi_1[1]
                while (j s< *(rsi_1 + result + 0x18))
            
            i += 1
            rsi_1 += 0x50
        while (i s< *(arg1 + 0xc8))
    
    result.b = 1
else
label_1408c0313:
    result.b = 0

return result
