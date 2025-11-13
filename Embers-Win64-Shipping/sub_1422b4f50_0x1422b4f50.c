// 函数: sub_1422b4f50
// 地址: 0x1422b4f50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140d15e10(arg1)
*arg1 = &data_1433183e8
arg1[5] = 0
arg1[6] = 0

if (arg1[5] != &data_143318648)
    sub_1405947f0(&arg1[5], 3)
    int32_t rax_1 = arg1[6].d + 3
    arg1[6].d = rax_1
    
    if (rax_1 s> *(arg1 + 0x34))
        sub_140594770(&arg1[5])
    
    int32_t* rcx_2 = arg1[5]
    *rcx_2 = 0x6f0072
    rcx_2[1].w = 0

return arg1
