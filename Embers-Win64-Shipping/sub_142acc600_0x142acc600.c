// 函数: sub_142acc600
// 地址: 0x142acc600
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r10_2 = (arg3 + 6) s/ 7

if (r10_2 == 4)
    int32_t rdx_2
    int32_t rdx_6
    
    if ((arg1.b & 3) == 0)
        int32_t temp2_1
        int32_t temp3_1
        temp2_1:temp3_1 = muls.dp.d(0x51eb851f, arg1)
        rdx_2 = temp2_1 s>> 5
        
        if (arg1 == arg1 s/ 0x64 * 0x64)
            int32_t temp5_1
            int32_t temp6_1
            temp5_1:temp6_1 = muls.dp.d(0x51eb851f, arg1)
            rdx_6 = temp5_1 s>> 7
    
    int32_t rax_2
    
    if ((arg1.b & 3) != 0 || (arg1 == (rdx_2 + (rdx_2 u>> 0x1f)) * 0x64
            && arg1 != (rdx_6 + (rdx_6 u>> 0x1f)) * 0x190))
        rax_2 = 0
    else
        rax_2.b = 1
    
    char temp4_1 = rax_2.b
    rax_2.b = neg.b(rax_2.b)
    
    if (arg3 + 7
            s> sx.d(*(sx.q((sbb.d(rax_2, rax_2, temp4_1 != 0) & 0xc) + arg2) + &data_1436565d0)))
        return 0xffffffff
else if (r10_2 == 5)
    r10_2 = -1

return zx.q(r10_2)
