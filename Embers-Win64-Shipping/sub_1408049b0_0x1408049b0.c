// 函数: sub_1408049b0
// 地址: 0x1408049b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result

if (*(arg1 + 0x38) != 0)
    void* rcx = *(arg1 + 0x60)
    
    if (rcx != 0)
        if (*(arg1 + 0xd8) != 0)
        label_140804a3b:
            
            if (*(arg1 + 0xd8) == 1)
                result = sub_140857020(*(arg1 + 0x1f0), 1)
            
            if (*(arg1 + 0xd8) != 1 || result.b == 0)
                result.b = 1
                return result
        else if (sub_140857020(rcx, 0).b == 0 && sub_140857020(*(arg1 + 0x38), 0).b == 0)
            result = *(arg1 + 0x1d8)
            
            if (result != 0)
                int32_t i = 0
                
                if (result s> 0)
                    int64_t* rsi_1 = nullptr
                    
                    do
                        result = sub_140857020(*(rsi_1 + *(arg1 + 0x1d0)), 0)
                        
                        if (result.b != 0)
                            goto label_140804a66
                        
                        i += 1
                        rsi_1 = &rsi_1[0xb]
                    while (i s< *(arg1 + 0x1d8))
            
            goto label_140804a3b

label_140804a66:
result.b = 0
return result
