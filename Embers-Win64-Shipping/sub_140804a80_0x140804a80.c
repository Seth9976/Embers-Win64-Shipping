// 函数: sub_140804a80
// 地址: 0x140804a80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *(arg1 + 0x60)
int32_t result

if (rcx != 0 && *(arg1 + 0x38) != 0)
    if (*(arg1 + 0xd8) != 0)
    label_140804b4a:
        
        if (*(arg1 + 0xd8) != 1)
            result.b = 1
            return result
        
        if (sub_140857020(*(arg1 + 0x1f0), 1).b != 0)
            result.b = 1
            return result
        
        if (sub_14084df30(*(arg1 + 0x1f0), 1).b != 0)
            result.b = 1
            return result
    else
        bool rax = sub_140857020(rcx, 0)
        
        if (rax == 0)
            result = sub_14084df30(*(arg1 + 0x60), 0)
        
        if (rax != 0 || result.b != 0)
            bool rax_1 = sub_140857020(*(arg1 + 0x38), 0)
            
            if (rax_1 == 0)
                result = sub_14084df30(*(arg1 + 0x38), 0)
            
            if (rax_1 != 0 || result.b != 0)
                result = *(arg1 + 0x1d8)
                
                if (result != 0)
                    int32_t i = 0
                    
                    if (result s> 0)
                        int64_t* rsi_1 = nullptr
                        
                        do
                            if (sub_140857020(*(rsi_1 + *(arg1 + 0x1d0)), 0).b == 0
                                    && sub_14084df30(*(rsi_1 + *(arg1 + 0x1d0)), 0).b == 0)
                                goto label_140804b8e
                            
                            i += 1
                            rsi_1 = &rsi_1[0xb]
                        while (i s< *(arg1 + 0x1d8))
                
                goto label_140804b4a

label_140804b8e:
result.b = 0
return result
