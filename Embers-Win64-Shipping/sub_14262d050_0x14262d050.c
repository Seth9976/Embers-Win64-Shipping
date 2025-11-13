// 函数: sub_14262d050
// 地址: 0x14262d050
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = *(arg1 + 0x190)

if (result == 0)
label_14262d0b4:
    result.b = 0
else
    int32_t i = 0
    
    if (result s> 0)
        void* rdi_1 = arg1 + 0x110
        
        do
            if (sub_142612750(arg2, *rdi_1, arg3).b == 0)
                goto label_14262d0b4
            
            i += 1
            rdi_1 += 8
        while (i s< *(arg1 + 0x190))
    
    result.b = 1

return result
