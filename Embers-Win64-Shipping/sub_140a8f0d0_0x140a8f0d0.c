// 函数: sub_140a8f0d0
// 地址: 0x140a8f0d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x28) != 0)
    int64_t* rcx = *(arg1 + 8)
    
    if ((*(*rcx + 0x38))(rcx) != 0)
        __builtin_memset(arg1 + 0x20030, 0xff, 0x20)
        int64_t* rcx_1 = *(arg1 + 8)
        int64_t rax_3 = (*(*rcx_1 + 8))(rcx_1)
        int64_t* rcx_2 = *(arg1 + 8)
        *(arg1 + 0x18) = rax_3
        *(arg1 + 0x10) = rax_3
        *(arg1 + 0x20) = (*(*rcx_2 + 0x40))(rcx_2)
        int64_t result
        result.b = 1
        return result

return 0
