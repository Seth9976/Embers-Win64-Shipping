// 函数: sub_142bf14a0
// 地址: 0x142bf14a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbp = 0
uint32_t count_2 = arg4
int64_t r15 = arg3
int32_t rax_1

if (arg2 u< *(arg1 + 0x2074))
    rax_1 = sub_142bf1570(arg1, arg5)

if (arg2 u>= *(arg1 + 0x2074) || rax_1 == 0)
    int32_t rax_2 = *(arg1 + 0x2074)
    int32_t rax_3
    
    if (arg2 u> rax_2)
        rax_3 = sub_142bf15e0(arg1, arg2 - rax_2)
    
    if ((arg2 u<= rax_2 || rax_3 == 0) && count_2 != 0)
        int32_t i
        
        do
            uint32_t count = arg1[0x410].d - arg1[0x40f].d
            
            if (count u>= count_2)
                count = count_2
            
            uint64_t count_1 = zx.q(count)
            memcpy(r15, arg1[0x40f], count)
            arg1[0x40f] += count_1
            r15 += count_1
            *(arg1 + 0x2074) += count
            rbp += count
            uint32_t count_3 = count_2
            count_2 -= count
            
            if (count_3 == count)
                break
            
            i = sub_142bf12c0(arg1)
        while (i == 0)

return zx.q(rbp)
