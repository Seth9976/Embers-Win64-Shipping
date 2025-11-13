// 函数: sub_142bf12c0
// 地址: 0x142bf12c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[0x40f] = arg1 + 0x1074
arg1[5] = arg1 + 0x1074
arg1[6].d = 0x1000

while (true)
    if (arg1[4].d != 0)
        goto label_142bf137e
    
    void* rdi_1 = *arg1
    int64_t rax_1 = *(rdi_1 + 0x20)
    uint32_t count
    void* rbp_1
    
    if (rax_1 == 0)
        uint64_t rax_3 = zx.q(*(rdi_1 + 0xc))
        count = *(rdi_1 + 8) - rax_3.d
        
        if (count u<= 0x1000)
            if (count != 0)
                goto label_142bf135f
            
            arg1[0x410] = arg1[0x40f]
        else
            count = 0x1000
        label_142bf135f:
            rbp_1 = arg1 + 0x74
            memcpy(rbp_1, rax_3 + *rdi_1, count)
        label_142bf136b:
            *(rdi_1 + 0xc) += count
            arg1[4].d = count
            arg1[3] = rbp_1
        label_142bf137e:
            int32_t rax_4 = sub_140371df0(&arg1[3], 0)
            
            if (rax_4 == 1)
                int64_t rax_5 = arg1[5]
                arg1[0x410] = rax_5
                
                if (rax_5 != arg1[0x40f])
                    break
            else
                if (rax_4 == 0)
                    if (arg1[6].d u<= rax_4)
                        break
                    
                    continue
                
                arg1[0x410] = arg1[0x40f]
    else
        rbp_1 = arg1 + 0x74
        uint32_t count_1 = rax_1(rdi_1, zx.q(*(rdi_1 + 0xc)), rbp_1, 0x1000)
        count = count_1
        
        if (count_1 != 0)
            goto label_142bf136b
        
        arg1[0x410] = arg1[0x40f]
    return 0x55

return 0
