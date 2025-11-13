// 函数: sub_14229df60
// 地址: 0x14229df60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143f53560 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143f53560)
    
    if (data_143f53560 == 0xffffffff)
        data_143a2fd34 = 0
        data_143a2fd44 = 0
        data_143a2fd2c = 0
        data_143a2fd34.d = 0x3dcccccd
        data_143a2fd34:4.b = 1
        data_143a2fd2c:4.d = 0x80000
        data_143a2fd44.d = 1
        data_143a2fd44:4.d = 0x100000
        data_143a2fd3c = 0
        __builtin_memset(&data_143a2fd4c, 0, 0x14)
        atexit(&data_142d0b0f0)
        _Init_thread_footer(&data_143f53560)

return &data_143a2fd00
