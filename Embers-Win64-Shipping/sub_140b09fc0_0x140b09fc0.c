// 函数: sub_140b09fc0
// 地址: 0x140b09fc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[3].b = 0

if (arg2[3].b != 0)
    *arg1 = *arg2
    void* rax_2 = arg2[1]
    arg1[1] = rax_2
    
    if (rax_2 != 0)
        *(rax_2 + 8) += 1
    
    arg1[2].d = arg2[2].d
    arg1[3].b = 1

arg1[0xc].b = 0

if (arg2[0xc].b != 0)
    arg1[4] = 0
    arg1[5] = 0
    sub_140b0c1e0(&arg1[4], &arg2[4])
    arg1[0xc].b = 1

return arg1
