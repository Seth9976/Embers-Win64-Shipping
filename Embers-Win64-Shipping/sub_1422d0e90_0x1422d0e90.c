// 函数: sub_1422d0e90
// 地址: 0x1422d0e90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x82) = arg3
char arg_18
sub_141ff4780(&arg_18, arg2, 0, 0x10d)
uint64_t result = sub_1422d1490(arg1, arg2, arg4)

if ((arg2[5].b & 1) != 0)
    result = sub_1422b8fc0(arg1, arg3)

if ((arg_18 & 2) == 0 || *(arg2 + 0x2a) s< 0)
    int64_t* rcx_3 = *(arg1 + 0x40)
    int64_t rdi_1 = 0
    
    if (rcx_3 != 0)
        (*(*rcx_3 + 0x40))(rcx_3, arg2, 0)
        
        if (*(arg1 + 0x7c) == 0)
            result = 0
        else
            int64_t* rcx_4 = *(arg1 + 0x40)
            result = (*(*rcx_4 + 0x30))(rcx_4)
        
        *(arg1 + 0x60) = result
    
    int64_t* rcx_5 = *(arg1 + 0x50)
    
    if (rcx_5 != 0)
        (*(*rcx_5 + 0x40))(rcx_5, arg2, 0)
        
        if (*(arg1 + 0x7c) == 0)
            result = 0
        else
            int64_t* rcx_6 = *(arg1 + 0x50)
            rdi_1 = (*(*rcx_6 + 0x30))(rcx_6)
            result = zx.q(*(arg1 + 0x7c))
        
        *(arg1 + 0x68) = rdi_1
        
        if (result.d != 0 && *(arg1 + 0x80) == 0 && data_1439c7a9c == 0)
            return sub_1422bee30(arg1, 0)

return result
