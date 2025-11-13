// 函数: sub_140e13580
// 地址: 0x140e13580
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143e26220 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143e26220)
    
    if (data_143e26220 == 0xffffffff)
        sub_140dd8c90(&data_143e25d50)
        atexit(sub_142ccaaa0)
        _Init_thread_footer(&data_143e26220)

return &data_143e25d50
