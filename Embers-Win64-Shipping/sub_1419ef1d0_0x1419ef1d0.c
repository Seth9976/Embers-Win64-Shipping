// 函数: sub_1419ef1d0
// 地址: 0x1419ef1d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = sub_141f20900(arg1)
int64_t* rcx = arg1[4]

if (rcx != 0)
    result = (*(*rcx + 0x150))(rcx)
    
    if (result != 0)
        result = sub_1419ede00(arg1[4])
        
        if (result != 0)
            return sub_1419efc20(result, arg1) __tailcall

return result
