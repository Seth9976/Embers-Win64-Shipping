// 函数: sub_140a684b0
// 地址: 0x140a684b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142e62778
int64_t rsi = arg1[4]

if (rsi != 0)
    int64_t* rcx = data_143ddb3f0
    
    if (rcx == 0)
        sub_140a750a0()
        rcx = data_143ddb3f0
    
    (*(*rcx + 0x30))(rcx, rsi)

sub_142a717e0(arg1)

if ((arg2 & 1) == 0 || (arg2 & 4) != 0)
    return arg1

sub_142a47920(arg1)
return arg1
