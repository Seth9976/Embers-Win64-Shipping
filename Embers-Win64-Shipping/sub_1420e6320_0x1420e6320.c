// 函数: sub_1420e6320
// 地址: 0x1420e6320
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* i

if (arg1 != 0)
    i = *(arg1 + 0xb8)
    
    if (i != 0 && arg1 == *(i + 0x30))
        i.b = 1
        return i

void* r9 = nullptr

if (arg1 != 0)
    void* rcx = *(arg1 + 0xb8)
    
    if (rcx != 0)
        i = *(rcx + 0x98)
        
        for (void* r8_1 = i + (sx.q(*(rcx + 0xa0)) << 3); i != r8_1; i += 8)
            void* rcx_2 = *i
            
            if (rcx_2 != 0 && *(rcx_2 + 0x128) == arg1)
                r9 = rcx_2
                break

i.b = r9 != 0
return i
