// 函数: sub_142155d40
// 地址: 0x142155d40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = *(arg1 + 0x30)

if (result == 0 || *(result + 0x408) == 0)
label_142155dc3:
    result.b = 0
else if ((*(*arg2 + 0x28))(arg2).b == 0)
label_142155dc3_1:
    result.b = 0
else
    int64_t* rcx_1 = *(arg1 + 0x30)
    
    if ((*(*rcx_1 + 0xb48))(rcx_1, arg2).b != 0)
    label_142155dc3_2:
        result.b = 0
    else
        int32_t i = 0
        
        if (*(arg1 + 0x50) s> 0)
            int64_t* rdi_1 = nullptr
            
            do
                if (sub_142155d40(*(rdi_1 + *(arg1 + 0x48)), arg2).b == 0)
                    goto label_142155dc3_2
                
                i += 1
                rdi_1 = &rdi_1[1]
            while (i s< *(arg1 + 0x50))
        
        result.b = 1

return result
