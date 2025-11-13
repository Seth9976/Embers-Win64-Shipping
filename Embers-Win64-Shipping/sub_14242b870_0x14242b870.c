// 函数: sub_14242b870
// 地址: 0x14242b870
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_14334a9d0
EnterCriticalSection(&arg1[6])
int64_t rsi = arg1[2]

if (rsi != 0)
    bool z_1
    
    if (0 == data_143f5e628)
        data_143f5e628 = 0
        z_1 = true
    else
        data_143f5e628
        z_1 = false
    
    if (not(z_1))
        ov_clear(rsi)
    
    j_sub_140a74f90(rsi)

arg1[2] = 0

if (arg1 != -0x30)
    LeaveCriticalSection(&arg1[6])

sub_141f7baf0(&arg1[0xe])
DeleteCriticalSection(&arg1[6])
*arg1 = &data_14323c7d8

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
