// 函数: sub_1425f5620
// 地址: 0x1425f5620
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143f70d00 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143f70d00)
    
    if (data_143f70d00 == 0xffffffff)
        data_143b4fcb2 = 1
        data_143b4fca8 = 0
        data_143b4fcb0 = 0
        __builtin_memset(&data_143b4fcb4, 0, 0x45)
        sub_1425f50b0(&data_143b4fc80, 1)
        atexit(sub_142d11e40)
        _Init_thread_footer(&data_143f70d00)

return &data_143b4fc80
