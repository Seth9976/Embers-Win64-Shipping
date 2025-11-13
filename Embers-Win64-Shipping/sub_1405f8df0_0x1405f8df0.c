// 函数: sub_1405f8df0
// 地址: 0x1405f8df0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1405faeb0()

if (*arg1 == 0x10000073647561 && arg1[1] == 0x719b3800aa000080)
    return &data_143cda258

if (*arg1 == 0x11d5e45b72178c25 && arg1[1] == -0x540b0c2f4fffd544)
    return &data_143cda268

if (*arg1 == 0x40cb3dcde69669a0 && arg1[1] == 0x16067c3808372e9e)
    return &data_143cda278

if (*arg1 == 0x10000073646976 && arg1[1] == 0x719b3800aa000080)
    return &data_143cda288

TEB* gsbase

if (data_143cda4b8 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143cda4b8)
    
    if (data_143cda4b8 == 0xffffffff)
        atexit(sub_142cb10c0)
        _Init_thread_footer(&data_143cda4b8)

return &data_143cda4a8
