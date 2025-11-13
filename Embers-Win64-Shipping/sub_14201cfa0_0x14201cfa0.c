// 函数: sub_14201cfa0
// 地址: 0x14201cfa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = *(arg1 + 0x30)

if (result != 0)
    result = *(result + 0x278)

if (result != 0)
    void* rcx = *(result + 0xf0)
    
    if (rcx != 0)
        return sub_141fa9be0(rcx) __tailcall

return result
