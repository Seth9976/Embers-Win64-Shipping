// 函数: sub_1408048d0
// 地址: 0x1408048d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result

if (*(arg1 + 0x24) != 4)
    void* rbx_1 = *(arg1 + 0x788)
    
    if (*(rbx_1 + 0x38) == 0)
    label_14080497f:
        result.b = 0
        return result
    
    void* rcx = *(rbx_1 + 0x60)
    
    if (rcx == 0)
        goto label_14080497f
    
    if (*(rbx_1 + 0xd8) == 0)
        if (sub_140857020(rcx, 0).b != 0)
            goto label_14080497f
        
        if (sub_140857020(*(rbx_1 + 0x38), 0).b != 0)
            goto label_14080497f
        
        result = *(rbx_1 + 0x1d8)
        
        if (result != 0)
            int32_t i = 0
            
            if (result s> 0)
                int64_t* rsi_1 = nullptr
                
                do
                    if (sub_140857020(*(rsi_1 + *(rbx_1 + 0x1d0)), 0).b != 0)
                        goto label_14080497f
                    
                    i += 1
                    rsi_1 = &rsi_1[0xb]
                while (i s< *(rbx_1 + 0x1d8))
    
    if (*(rbx_1 + 0xd8) == 1 && sub_140857020(*(rbx_1 + 0x1f0), 1).b != 0)
        goto label_14080497f

result.b = 1
return result
