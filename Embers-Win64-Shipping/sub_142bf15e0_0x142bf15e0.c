// 函数: sub_142bf15e0
// 地址: 0x142bf15e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbp = arg2
int32_t rsi = 0

while (true)
    int32_t r8_2 = arg1[0x410].d - arg1[0x40f].d
    
    if (r8_2 u>= rbp)
        r8_2 = rbp
    
    *(arg1 + 0x2074) += r8_2
    arg1[0x40f] += zx.q(r8_2)
    int32_t temp0_1 = rbp
    rbp -= r8_2
    
    if (temp0_1 == r8_2)
        break
    
    rsi = 0
    arg1[0x40f] = arg1 + 0x1074
    arg1[5] = arg1 + 0x1074
    arg1[6].d = 0x1000
    
    while (true)
        if (arg1[4].d == 0)
            int32_t rax_3 = sub_142bf1200(arg1)
            rsi = rax_3
            
            if (rax_3 != 0)
                break
        
        int32_t rax_4 = sub_140371df0(&arg1[3], 0)
        
        if (rax_4 == 1)
            int64_t rax_6 = arg1[5]
            arg1[0x410] = rax_6
            
            if (rax_6 != arg1[0x40f])
                break
        else if (rax_4 != 0)
            arg1[0x410] = arg1[0x40f]
        else
            if (arg1[6].d u<= rax_4)
                break
            
            continue
        
        rsi = 0x55
        break
    
    if (rsi != 0)
        break

return zx.q(rsi)
