// 函数: sub_140e13500
// 地址: 0x140e13500
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143e25d40 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143e25d40)
    
    if (data_143e25d40 == 0xffffffff)
        sub_140dd8940(&data_143e25ba0)
        atexit(sub_142ccaa50)
        _Init_thread_footer(&data_143e25d40)

return &data_143e25ba0
