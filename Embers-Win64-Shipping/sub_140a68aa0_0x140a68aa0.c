// 函数: sub_140a68aa0
// 地址: 0x140a68aa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142e61c88
int64_t* rcx = arg1[1]

if (rcx != 0)
    (*(*rcx + 0x20))(rcx, 1)
    arg1[1] = 0

arg1[0x11].d = 0
int64_t rsi = arg1[0x10]

if (rsi != 0)
    int64_t* rcx_1 = data_143ddb3f0
    
    if (rcx_1 == 0)
        sub_140a750a0()
        rcx_1 = data_143ddb3f0
    
    (*(*rcx_1 + 0x30))(rcx_1, rsi)

sub_140a61f90(&arg1[8])
DeleteCriticalSection(&arg1[3])
*arg1 = &data_142d565e8

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
