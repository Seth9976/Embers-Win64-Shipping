// 函数: sub_1429769b0
// 地址: 0x1429769b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
int32_t rbp = arg2[0x14]

if (rbp s<= 0)
    return 1

int32_t i_2 = sub_14289aa40(sub_14289a660(arg1), sx.q(arg2[0x15]) + *(arg2 + 0x48), rbp)
int32_t i_1 = i_2

if (i_2 s> 0)
    int32_t i
    
    do
        arg2[0x14] -= i_1
        int32_t rbp_1 = arg2[0x14]
        
        if (rbp_1 s<= 0)
            if (arg3 != 0)
                arg3(arg1, &arg2[0x12], &arg2[0x14], &arg2[0x16])
            
            *arg2 = arg4
            arg2[0x15] = 0
            break
        
        arg2[0x15] += i_1
        i = sub_14289aa40(sub_14289a660(arg1), sx.q(arg2[0x15]) + *(arg2 + 0x48), rbp_1)
        i_1 = i
    while (i s> 0)

return zx.q(i_1)
