// 函数: sub_140e6af80
// 地址: 0x140e6af80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r11 = sx.q(arg2)
int32_t i

if (r11.d s< 0xa)
    *(arg1 + 0xc4)
    
    if (*(arg1 + 0x98) != *(arg1 + 0xc4))
        void* r10_1 = arg1 + 0xc8
        void* r8_1 = *(r10_1 + 8)
        
        if (r8_1 != 0)
            r10_1 = r8_1
        
        i = *(r10_1 + (((sx.q(*(arg1 + 0xd8)) - 1) & r11) << 2))
        
        if (i != 0xffffffff)
            int64_t r8_2 = *(arg1 + 0x90)
            
            do
                int64_t rdx = sx.q(i) * 5
                
                if (*(r8_2 + (rdx << 2)) == r11.d)
                    if (i == 0xffffffff)
                        break
                    
                    i.b = 1
                    return i
                
                i = *(r8_2 + (rdx << 2) + 0xc)
            while (i != 0xffffffff)

i.b = 0
return i
