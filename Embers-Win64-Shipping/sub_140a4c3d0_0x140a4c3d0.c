// 函数: sub_140a4c3d0
// 地址: 0x140a4c3d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = (zx.d(*(arg1 + 0x18)) | arg2) & 0xff00ffff
*(arg1 + 0x18) = result

if (*(arg1 + 0x28) != 0)
    int64_t* rcx = *(arg1 + 0x20)
    
    if (rcx != 0)
        result = (*(*rcx + 0x28))(rcx)
        
        if (result.b != 0)
            if (*(arg1 + 0x28) == 0)
                jump(*(*nullptr + 0x50))
            
            jump(*(**(arg1 + 0x20) + 0x50))

return result
