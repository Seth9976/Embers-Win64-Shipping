// 函数: sub_14281faa0
// 地址: 0x14281faa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143f89648 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143f89648)
    
    if (data_143f89648 == 0xffffffff)
        sub_14281feb8()
        sub_14281f98c()
        sub_142826608(&data_143f89628, &data_143f89600, &data_143f895d8)
        atexit(sub_142d13f2c)
        _Init_thread_footer(&data_143f89648)

return &data_143f89628
