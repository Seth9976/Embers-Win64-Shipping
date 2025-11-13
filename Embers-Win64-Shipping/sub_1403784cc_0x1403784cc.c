// 函数: sub_1403784cc
// 地址: 0x1403784cc
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r9 = 1

if (*(arg1 + 2) != 1 && *(arg1 + 2) != 2)
    r9 = 0

if (*(arg1 + 0xe) != 4)
    r9 = 0

if (*(arg1 + 0x10) != 0x20)
    r9 = 0

if (r9 != 0)
    if (*(arg1 + 0x14) == 7)
        void* r8_1 = arg1 + 0x18
        
        for (int64_t i = 0; i s< 0xe; )
            if (*(r8_1 - 2) != *(i + 0x1435fc310))
                r9 = 0
            
            if (*r8_1 != *(i + 0x1435fc320))
                r9 = 0
            
            i += 2
            r8_1 += 4
    else
        r9 = 0
    
    uint32_t rcx = zx.d(*(arg1 + 2))
    uint32_t r8_2 = zx.d(*(arg1 + 0x12))
    
    if (r8_2 != divs.dp.d(sx.q((zx.d(*(arg1 + 0xc)) - rcx * 7) << 3), rcx << 2) + 2)
        r9 = 0
    
    int16_t temp8_1 = r8_2.w
    r8_2.w = neg.w(r8_2.w)
    r9 &= sbb.d(r9, r9, temp8_1 != 0)

return zx.q(r9)
