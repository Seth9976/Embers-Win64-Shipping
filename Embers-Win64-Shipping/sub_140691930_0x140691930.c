// 函数: sub_140691930
// 地址: 0x140691930
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void** result = sub_140691a20(arg1 + 0x20)

if (*(arg1 + 0x18) != 0)
    int64_t* rcx_1 = *(arg1 + 0x10)
    
    if (rcx_1 != 0)
        result = (*(*rcx_1 + 0x38))(rcx_1, 0)
        int64_t rcx_2 = *(arg1 + 0x10)
        
        if (rcx_2 != 0)
            result = sub_140a84c80(rcx_2, 0, 0)
            *(arg1 + 0x10) = result
        
        *(arg1 + 0x18) = 0

int64_t rcx_3 = *(arg1 + 0x10)

if (rcx_3 == 0)
    return result

return sub_140a74f90(rcx_3) __tailcall
