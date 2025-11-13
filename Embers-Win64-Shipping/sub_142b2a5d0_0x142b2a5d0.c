// 函数: sub_142b2a5d0
// 地址: 0x142b2a5d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = arg2

if (arg2 s<= 0)
    return 

int32_t r9_1 = *(arg1 + 0x194)

do
    int64_t r8_1 = sx.q(*(arg1 + 0x190))
    
    if (r8_1.d s>= r9_1)
        if (r9_1 s>= 0)
            break
        
        if (*(r8_1 + *(arg1 + 0x188)) == 0)
            break
    
    int64_t r11_1 = *(arg1 + 0x188)
    uint32_t r10_1 = zx.d(*(r8_1 + r11_1))
    int32_t r8_2 = r8_1.d + 1
    *(arg1 + 0x190) = r8_2
    
    if ((r10_1 + 0x3e).b u<= 0x32 && r8_2 != r9_1)
        char rbx_1 = *(sx.q(r8_2) + r11_1)
        bool cond:0_1
        
        if (r10_1.b u< 0xe0)
        label_142b2a6ea:
            cond:0_1 = rbx_1 s>= 0xc0
        label_142b2a6ed:
            
            if (not(cond:0_1))
                *(arg1 + 0x190) = r8_2 + 1
        else if (r10_1.b u>= 0xf0)
            if (r10_1.b u< 0xe0)
                goto label_142b2a6ea
            
            if (test_bit(sx.d(*((zx.q(rbx_1) u>> 4) + 0x14363c6e8)), zx.d(r10_1.b) & 7))
                *(arg1 + 0x190) = r8_2 + 1
                
                if (r8_2 + 1 != r9_1 && *(sx.q(r8_2 + 1) + r11_1) s< 0xc0)
                    *(arg1 + 0x190) = r8_2 + 2
                    
                    if (r8_2 + 2 != r9_1 && *(sx.q(r8_2 + 2) + r11_1) s< 0xc0)
                        *(arg1 + 0x190) = r8_2 + 3
        else if (test_bit(sx.d(*((zx.q(r10_1.b) & 0xf) + " 000000000000")), zx.d(rbx_1 u>> 5)))
            r8_2 += 1
            *(arg1 + 0x190) = r8_2
            
            if (r8_2 != r9_1)
                cond:0_1 = *(sx.q(r8_2) + r11_1) s>= 0xc0
                goto label_142b2a6ed
    
    i -= 1
while (i s> 0)
