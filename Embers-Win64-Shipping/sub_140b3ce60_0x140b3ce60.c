// 函数: sub_140b3ce60
// 地址: 0x140b3ce60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143de83a8 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143de83a8)
    
    if (data_143de83a8 == 0xffffffff)
        data_143de832c = 0x80
        __builtin_memset(&data_143de8300, 0, 0x2c)
        data_143de8334 = 0
        data_143de8340 = 0
        data_143de8348 = 0
        __builtin_memset(&data_143de8350, 0, 0x2c)
        data_143de8384 = 0
        data_143de8390 = 0
        data_143de8398 = 0
        data_143de83a0 = 0
        data_143de8330 = 0xffffffff
        data_143de837c = 0x80
        data_143de8380 = 0xffffffff
        atexit(sub_142cc06d0)
        _Init_thread_footer(&data_143de83a8)

return &data_143de8300
