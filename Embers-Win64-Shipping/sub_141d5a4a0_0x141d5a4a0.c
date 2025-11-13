// 函数: sub_141d5a4a0
// 地址: 0x141d5a4a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x130) = 0
char result = sub_141d510b0(*(arg1 + 0x110), 0x3f800000)

if (result != 0)
    void* rcx_1 = *(arg1 + 0x110)
    
    if (*(rcx_1 + 0x68) != 0 && *(rcx_1 + 0x58) != 0)
        result = sub_141d4c4d0(rcx_1)
        
        if (result != 0)
            void* rcx_2 = *(arg1 + 0x110)
            return sub_141d50630(rcx_2, rcx_2 + 0x58) __tailcall

return result
