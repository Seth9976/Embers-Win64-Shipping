// 函数: sub_141f9a640
// 地址: 0x141f9a640
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = sub_140ce8e10(arg1, arg2)

if (*(arg2 + 0x2a) s< 0)
    int64_t* rcx = *(arg1 + 0x58)
    
    if (rcx != 0)
        result = (*(*rcx + 0x210))(rcx, arg2)
    
    int64_t* rcx_1 = *(arg1 + 0x60)
    
    if (rcx_1 != 0)
        result = (*(*rcx_1 + 0x210))(rcx_1, arg2)
    
    int64_t* rcx_2 = *(arg1 + 0x68)
    
    if (rcx_2 != 0)
        return (*(*rcx_2 + 0x210))(rcx_2, arg2)

return result
