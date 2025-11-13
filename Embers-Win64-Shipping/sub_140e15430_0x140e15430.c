// 函数: sub_140e15430
// 地址: 0x140e15430
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143e24588 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143e24588)
    
    if (data_143e24588 == 0xffffffff)
        sub_140ddaa70(&data_143e24500, &data_143dbb1f0)
        atexit(sub_142ccae40)
        _Init_thread_footer(&data_143e24588)

return &data_143e24500
