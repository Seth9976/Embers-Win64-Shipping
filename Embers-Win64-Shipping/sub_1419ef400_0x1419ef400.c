// 函数: sub_1419ef400
// 地址: 0x1419ef400
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = sub_141f20b40(arg1)
int64_t* rcx = *(arg1 + 0x20)

if (rcx != 0)
    result = (*(*rcx + 0x150))(rcx)
    
    if (result != 0)
        result = sub_1419ede00(*(arg1 + 0x20))
        
        if (result != 0)
            return sub_1419f1100(result, arg1) __tailcall

return result
