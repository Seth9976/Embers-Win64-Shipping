// 函数: sub_141866150
// 地址: 0x141866150
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* i

for (i = *(arg1 + 8); i != 0; i = *(arg1 + 8))
    *(arg1 + 8) = **(arg1 + 8)
    
    if (i != 0)
        uint64_t r8_2 = zx.q(*(i + 0x20))
        
        if (r8_2.d u<= 5)
            bool cond:0_1
            
            switch (r8_2)
                case 0
                    cond:0_1 = r8_2.b != 0
                case 1
                    cond:0_1 = r8_2.b != 1
                case 2, 3, 4, 5
                    cond:0_1 = r8_2.b != 2
            
            if (not(cond:0_1))
                *(i + 0x20) = 0xff
        
        j_sub_140a74f90(i)

return i
