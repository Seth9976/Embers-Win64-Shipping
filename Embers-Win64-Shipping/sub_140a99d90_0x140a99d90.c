// 函数: sub_140a99d90
// 地址: 0x140a99d90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = *arg2
*(arg1 + 8) = *(arg2 + 8)
*(arg1 + 8) = *(arg2 + 8)
arg1[2] = arg2[2]
*(arg1 + 8) = *(arg2 + 8)

if (&arg2[4] != &arg1[4])
    sub_1405d57e0(&arg1[4])
    
    if (arg2[0xa].b != 0)
        *(arg1 + 0x10) = *(arg2 + 0x10)
        void* rax_6 = *(arg2 + 0x18)
        *(arg1 + 0x18) = rax_6
        
        if (rax_6 != 0)
            *(rax_6 + 8) += 1
        
        arg1[8] = arg2[8]
        arg1[0xa].b = 1

return arg1
