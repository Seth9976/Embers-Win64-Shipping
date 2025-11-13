// 函数: sub_1429d5140
// 地址: 0x1429d5140
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = 0

if (*(arg1 + 0x24) == 0)
    if (*(*(arg1 + 8) + 4) s> 0)
        char* r10_1 = nullptr
        
        do
            int64_t r11_1 = sx.q(*(*(arg1 + 0xd8) + (r10_1 << 2)))
            
            if (r11_1.d != 0xffffffff)
                if ((r10_1[*(arg1 + 0x1b0)] & 1) != 0)
                    *(r11_1 + *(arg1 + 0x180)) = *arg2
                
                *(*(arg1 + 0x138) + (r11_1 << 2)) = i
            
            i += 1
            r10_1 = &r10_1[1]
        while (i s< *(*(arg1 + 8) + 4))
else if (*(*(arg1 + 8) + 4) s> 0)
    int64_t rdx_2 = sx.q(*(arg1 + 0x50)) << 2
    
    do
        rdx_2 += 4
        *(rdx_2 + *(arg1 + 0x138) - 4) = i
        i += 1
    while (i s< *(*(arg1 + 8) + 4))

return i
