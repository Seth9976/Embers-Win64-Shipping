// 函数: sub_141cbef70
// 地址: 0x141cbef70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 != arg2)
    *arg1 = *arg2
    sub_140780c40(&arg1[2], &arg2[2])
    
    if (&arg1[6] != &arg2[6])
        int32_t r8_1 = arg1[9]
        uint32_t count = arg2[8]
        int64_t r14_1 = *(arg2 + 0x18)
        arg1[8] = count
        
        if (count != 0 || r8_1 != 0)
            sub_1405da9e0(&arg1[6], count, r8_1)
            memcpy(*(arg1 + 0x18), r14_1, count)
        else
            arg1[9] = count
    
    sub_140597df0(&arg1[0xa], &arg2[0xa])
    sub_140597df0(&arg1[0xe], &arg2[0xe])

return arg1
