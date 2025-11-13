// 函数: sub_1403fe4a0
// 地址: 0x1403fe4a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[4].d u> 0x800000)
    return 

bool cond:0_1

do
    uint32_t r11_2 = *(arg1 + 0x24) u>> 0x17
    
    if (r11_2 == 0xff)
        arg1[5].d += 1
    else
        char r9_2 = (r11_2 s>> 8).b
        
        if (*(arg1 + 0x2c) s>= 0)
            uint64_t r10_1 = zx.q(*(arg1 + 0x1c))
            int32_t rax_1
            
            if (*(arg1 + 0xc) + r10_1.d u< arg1[1].d)
                *(r10_1 + *arg1) = *(arg1 + 0x2c) + r9_2
                *(arg1 + 0x1c) += 1
                rax_1 = 0
            else
                rax_1 = -1
            
            arg1[6].d |= rax_1
        
        if (arg1[5].d u> 0)
            do
                uint64_t r8_2 = zx.q(*(arg1 + 0x1c))
                int32_t rax_4
                
                if (*(arg1 + 0xc) + r8_2.d u< arg1[1].d)
                    *(r8_2 + *arg1) = r9_2 - 1
                    *(arg1 + 0x1c) += 1
                    rax_4 = 0
                else
                    rax_4 = -1
                
                arg1[6].d |= rax_4
                arg1[5].d -= 1
            while (arg1[5].d != 1)
        
        *(arg1 + 0x2c) = zx.d(r11_2.b)
    
    arg1[4].d <<= 8
    arg1[3].d += 8
    cond:0_1 = arg1[4].d u<= 0x800000
    *(arg1 + 0x24) = (*(arg1 + 0x24) & 0x7fffff) << 8
while (cond:0_1)
