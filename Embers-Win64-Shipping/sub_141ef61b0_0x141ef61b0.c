// 函数: sub_141ef61b0
// 地址: 0x141ef61b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint8_t rcx = arg1[0x11].b
uint8_t result = (arg1[1].d u>> 9).b

if ((result & 1) != 0)
    arg1[0x11].b = (rcx & 0xef) | arg2 << 4
    return result

if ((rcx u>> 4 & 1) != arg2)
    result = (*(*arg1 + 0x2a0))(arg1)
    
    if (result != 0)
        arg1[0x11].b &= 0xef
        void* rcx_2 = arg1[0x14]
        arg1[0x11].b |= arg2 << 4
        
        if (rcx_2 != 0)
            return sub_141ddc050(rcx_2, arg1)

return result
