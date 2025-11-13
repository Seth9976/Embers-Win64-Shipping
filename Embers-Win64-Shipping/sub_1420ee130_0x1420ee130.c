// 函数: sub_1420ee130
// 地址: 0x1420ee130
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rcx = *(arg1 + 0xba)
char result = rcx & 1

if (arg2 != result)
    *(arg1 + 0xba) = (rcx & 0xfe) | arg2
    
    if (arg2 != 0)
        result = sub_140d23dc0(arg1, 0x30)
        
        if (result == 0)
            void* rcx_2 = arg1[4]
            
            if (rcx_2 != 0)
                return sub_14244a940(rcx_2, arg1) __tailcall

return result
