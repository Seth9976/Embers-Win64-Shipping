// 函数: sub_140e13360
// 地址: 0x140e13360
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143e25398 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143e25398)
    
    if (data_143e25398 == 0xffffffff)
        sub_140dd7e20(&data_143e25180)
        atexit(sub_142cca980)
        _Init_thread_footer(&data_143e25398)

return &data_143e25180
