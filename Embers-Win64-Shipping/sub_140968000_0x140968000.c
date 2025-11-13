// 函数: sub_140968000
// 地址: 0x140968000
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 + 0x10)

if (rcx != 0 && (*(*rcx + 0x28))(rcx) != 0 && *(arg1 + 0x38) s>= 1)
    void* i = *(arg1 + 0x30)
    int64_t result
    
    for (void* rdi_2 = sx.q(*(arg1 + 0x38)) * 0x50 + i; i != rdi_2; i += 0x50)
        int64_t* rcx_1 = *(i + 8)
        
        if (rcx_1 == 0)
            result.b = 0
            return result
        
        if ((*(*rcx_1 + 0x28))(rcx_1).b == 0 || *(i + 0x40) s<= 1)
            result.b = 0
            return result
        
        if (sub_14094dfb0(arg1 + 8, i).b != 0 && *(i + 0x30) s<= 1)
            result.b = 0
            return result
    
    result.b = 1
    return result

return 0
