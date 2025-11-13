// 函数: sub_140cbcdf0
// 地址: 0x140cbcdf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143e1b2c0 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143e1b2c0)
    
    if (data_143e1b2c0 == 0xffffffff)
        data_143e1b29c = 0x80
        __builtin_memset(&data_143e1b270, 0, 0x2c)
        data_143e1b2a4 = 0
        data_143e1b2b0 = 0
        data_143e1b2b8 = 0
        data_143e1b2a0 = 0xffffffff
        atexit(sub_142cc2250)
        _Init_thread_footer(&data_143e1b2c0)

return &data_143e1b270
