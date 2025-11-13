// 函数: sub_142610f00
// 地址: 0x142610f00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 != 0)
    char r11_1 = (*(arg1 + 0xa0)).b
    char rbx_1 = (*(arg1 + 0x9c)).b
    int32_t r8_3 = ((1 << rbx_1).d - 1) & (arg2 u>> r11_1).d
    
    if (r8_3 s< *(arg1 + 0x30))
        int32_t* result = zx.q(r8_3) * 0xb0 + *(arg1 + 0x90)
        
        if (*result == ((arg2 u>> (rbx_1 + r11_1)).d & ((1 << (*(arg1 + 0x98)).b).d - 1)))
            return result

return nullptr
