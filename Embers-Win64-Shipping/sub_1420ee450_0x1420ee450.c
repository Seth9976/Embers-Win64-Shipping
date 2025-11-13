// 函数: sub_1420ee450
// 地址: 0x1420ee450
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint8_t rcx = *(arg1 + 0xba)
uint8_t result = rcx u>> 3 & 1

if (arg2 != result)
    *(arg1 + 0xba) = (rcx & 0xf7) | arg2 << 3
    result = sub_140d23dc0(arg1, 0x30)
    
    if (result == 0)
        void* rcx_2 = arg1[4]
        
        if (rcx_2 != 0)
            return sub_14244a940(rcx_2, arg1) __tailcall

return result
