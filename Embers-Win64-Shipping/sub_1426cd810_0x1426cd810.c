// 函数: sub_1426cd810
// 地址: 0x1426cd810
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *(arg2 + 0xb8)
void* result

if (rcx != 0)
    result = sub_1426a2600(rcx, *(arg1 + 0x88))
    
    if (result != 0)
        result = sub_140d21950(result, sub_141cc7c00())
        
        if (result != 0)
            uint32_t rdx_2 = zx.d(*(arg1 + 0x90))
            
            if (rdx_2 == 0)
                jump(*(*result + 0x28))
            
            if (rdx_2 == 1)
                jump(*(*result + 0x20))

result.b = 0
return result
