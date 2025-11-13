// 函数: sub_1419ef380
// 地址: 0x1419ef380
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141f20b40(arg1)
void* result = *(arg1 + 0x20)

if (result != 0)
    if (*(result + 0x50c) != 0)
        bool cond:0_1 = *(arg1 + 0x45c) == 0
        *(arg1 + 0x458) = 0
        
        if (not(cond:0_1))
            sub_1405c5570(arg1 + 0x450, 0)
    
    int64_t* rcx_1 = *(arg1 + 0x20)
    result = (*(*rcx_1 + 0x150))(rcx_1)
    
    if (result != 0)
        result = sub_14243ade0(result)
        
        if (result.b == 0)
            result = sub_1419ede00(*(arg1 + 0x20))
            
            if (result != 0)
                return sub_1419f0e60(result, arg1) __tailcall

return result
