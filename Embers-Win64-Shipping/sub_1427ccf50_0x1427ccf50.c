// 函数: sub_1427ccf50
// 地址: 0x1427ccf50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 + 0x10)
char result = (*(*rcx + 0x20))(rcx)

if (result == 0)
    int64_t* rcx_1 = *(arg1 + 0x18)
    
    if (rcx_1 != 0)
        result = (*(*rcx_1 + 0x20))(rcx_1, arg2)
    
    if (rcx_1 == 0 || result == 0)
        int64_t* rcx_2 = *(arg1 + 8)
        result = (*(*rcx_2 + 0x20))(rcx_2, arg2)
        
        if (result == 0)
            int64_t* rcx_3 = *(arg1 + 8)
            return (*(*rcx_3 + 8))(rcx_3, arg2, 0)

return result
