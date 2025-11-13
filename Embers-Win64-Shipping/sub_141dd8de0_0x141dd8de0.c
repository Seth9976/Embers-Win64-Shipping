// 函数: sub_141dd8de0
// 地址: 0x141dd8de0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = (*(*arg1 + 0x150))()

if (result != 0)
    void* rcx = *(result + 0x38)
    
    if (rcx != 0)
        result = sub_1421673c0(rcx, arg1)
        
        if (result != 0)
            *(result + 0x10) = __minsd_xmmsd_memsd(fconvert.d(arg2.d), *(result + 0x10))

return result
