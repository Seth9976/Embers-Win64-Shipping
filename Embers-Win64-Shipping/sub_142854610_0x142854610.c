// 函数: sub_142854610
// 地址: 0x142854610
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 != 0)
    int32_t i_1
    
    if (arg2 == 1)
        i_1 = 0
    label_142854652:
        int64_t i = sx.q(i_1)
        
        if (i s< 9)
            int64_t* rax_6 = &arg1[i + ((i + 1) << 2)]
            
            do
                if (*rax_6 != 0 && rax_6[1] != 0)
                    *arg1 = rax_6
                    return 1
                
                i += 1
                rax_6 = &rax_6[5]
            while (i s< 9)
    else if (arg2 == 2)
        int64_t rax_1
        int64_t rdx
        rdx:rax_1 = muls.dp.q(0x6666666666666667, *arg1 - arg1 - 0x20)
        int64_t rdx_1 = rdx s>> 4
        i_1 = rdx_1.d + (rdx_1 u>> 0x3f).d + 1
        
        if (i_1 s< 9)
            goto label_142854652

return 0
