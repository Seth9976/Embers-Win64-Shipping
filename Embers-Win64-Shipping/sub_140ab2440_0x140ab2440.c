// 函数: sub_140ab2440
// 地址: 0x140ab2440
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143db9f48 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143db9f48)
    
    if (data_143db9f48 == 0xffffffff)
        data_143db9f38 = 0x5fd9ef1a
        data_143db9f3c = 0x9d484d65
        data_143db9f40 = 0x92065566
        data_143db9f44 = 0xd3542547
        _Init_thread_footer(&data_143db9f48)

return &data_143db9f38
