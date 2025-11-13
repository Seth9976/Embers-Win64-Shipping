// 函数: sub_142bdef80
// 地址: 0x142bdef80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

for (int32_t i = arg1[0x115]; i s>= 0; i = arg1[0x115])
    int64_t i_1 = sx.q(i)
    arg1[0x19] = sx.d(*(&arg1[i_1] + 0x416)) * arg1[1]
    int32_t rax_3 = sx.d(arg1[i_1 + 0x105].w) * arg1[1]
    arg1[0xe] = 0
    arg1[0x18] = rax_3
    *(arg1 + 0x30) = *(arg1 + 0x18)
    
    if (sub_142bdd630(arg1, sx.d(arg2)) == 0)
        if (*(arg1 + 0x78) != 0 && sub_142bddde0(arg1) != 0)
            return zx.q(arg1[0xe])
        
        arg1[0x115] -= 1
    else
        if (arg1[0xe] != 0x62)
            return 1
        
        int64_t r10_1 = sx.q(arg1[0x115])
        arg1[0xe] = 0
        int32_t r9_1 = sx.d(arg1[r10_1 + 0x105].w)
        int32_t r11_1 = sx.d(*(&arg1[r10_1] + 0x416))
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(r9_1 + r11_1)
        int16_t rax_9 = ((temp1_1 - temp0_1) s>> 1).w
        
        if (r10_1.d s>= 7 || rax_9 s< r9_1.w)
            arg1[0x115] = 0
            arg1[0xe] = 0x14
            return 0x14
        
        arg1[sx.q((r10_1 + 1).d) + 0x105].w = rax_9
        *(&arg1[sx.q(arg1[0x115] + 1)] + 0x416) = r11_1.w
        *(&arg1[sx.q(arg1[0x115])] + 0x416) = rax_9 - 1
        arg1[0x115] += 1

return 0
