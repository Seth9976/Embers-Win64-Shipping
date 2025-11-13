// 函数: sub_141ea7740
// 地址: 0x141ea7740
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = arg1[0x51]

if (result == 0 || *(result + 0x16a) != 3)
    int64_t* rcx = arg1[0x50]
    
    if (rcx != 0)
        result = (*(*rcx + 0x968))(rcx)
    
    if (rcx == 0 || result.b == 0)
        void* rcx_1 = arg1[0x51]
        
        if (rcx_1 != 0)
            result = sub_142008300(rcx_1 + 0x4d8)
        
        if (rcx_1 == 0 || result.b == 0)
            return sub_141dd06d0(arg1) __tailcall

return result
