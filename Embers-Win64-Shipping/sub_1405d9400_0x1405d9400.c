// 函数: sub_1405d9400
// 地址: 0x1405d9400
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143cd6ff0 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143cd6ff0)
    
    if (data_143cd6ff0 == 0xffffffff)
        sub_140a96080(&data_143cd6fd8)
        atexit(sub_142cb0d20)
        _Init_thread_footer(&data_143cd6ff0)

return &data_143cd6fd8
