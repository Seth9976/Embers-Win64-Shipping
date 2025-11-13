// 函数: sub_140ad8ee0
// 地址: 0x140ad8ee0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143dbb2d0 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143dbb2d0)
    
    if (data_143dbb2d0 == 0xffffffff)
        data_143dbb2c0 = 0xf287b3bf
        data_143dbb2c4 = 0x35df4141
        data_143dbb2c8 = 0xa8b4f57b
        data_143dbb2cc = 0x7e06df47
        _Init_thread_footer(&data_143dbb2d0)

return &data_143dbb2c0
