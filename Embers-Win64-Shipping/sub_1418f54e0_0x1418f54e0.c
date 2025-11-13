// 函数: sub_1418f54e0
// 地址: 0x1418f54e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142ff1d48

if (data_143f0f161 != 0)
    sub_1418c5270(&arg1[0xe][0x7e], nullptr, &arg1[0x11][0xb])
    int64_t* rcx_2 = arg1[0x11]
    
    if (rcx_2 != 0)
        (**rcx_2)(rcx_2, 1)
    
    arg1[0x11] = 0

*arg1 = &data_142ef57c0
sub_140fda0a0(&arg1[0xc])
int64_t rcx_4 = arg1[9]

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)

*arg1 = &data_142d5a028

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
