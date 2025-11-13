// 函数: sub_142b13930
// 地址: 0x142b13930
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r8 = sx.q(*arg2)

if (r8.d s> 0)
    uint64_t r9_1 = zx.q(*arg1)
    
    if (r9_1.d u<= 0xff)
        if ((*(r9_1 + &data_14366a9f0) u>> 2 & 1) != 0)
            goto label_142b139c7
        
        goto label_142b1398a
    
    if ((r9_1 - 0x200e).d u<= 0x1b && (r9_1 - 0x2010).d u> 0x17)
    label_142b139c7:
        int32_t r9_2 = 0
        int64_t rdx_2 = 0
        
        if (r8.d s> 0)
            do
                uint64_t rcx_2 = zx.q(arg1[rdx_2])
                
                if (rcx_2.d u> 0xff)
                    if ((rcx_2 - 0x200e).d u> 0x1b)
                        break
                    
                    if ((rcx_2 - 0x2010).d u<= 0x17)
                        break
                else if ((*(rcx_2 + &data_14366a9f0) u>> 2 & 1) == 0)
                    break
                
                r9_2 += 1
                rdx_2 += 1
            while (rdx_2 s< r8)
        
        if (r9_2 s< r8.d)
            int16_t* rdx_4 = &arg1[-1 + r8]
            
            while (true)
                uint64_t rcx_4 = zx.q(*rdx_4)
                
                if (rcx_4.d u> 0xff)
                    if ((rcx_4 - 0x200e).d u> 0x1b)
                        break
                    
                    if ((rcx_4 - 0x2010).d u<= 0x17)
                        break
                else if ((*(rcx_4 + &data_14366a9f0) u>> 2 & 1) == 0)
                    break
                
                r8 = zx.q(r8.d - 1)
                rdx_4 -= 2
        
        *arg2 = r8.d - r9_2
        return &arg1[sx.q(r9_2)]
    
label_142b1398a:
    uint64_t rdx_1 = zx.q(arg1[sx.q((r8 - 1).d)])
    
    if (rdx_1.d u> 0xff)
        if ((rdx_1 - 0x200e).d u<= 0x1b && (rdx_1 - 0x2010).d u> 0x17)
            goto label_142b139c7
    else if ((*(rdx_1 + &data_14366a9f0) u>> 2 & 1) != 0)
        goto label_142b139c7

return arg1
