// 函数: sub_140d215d0
// 地址: 0x140d215d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143e1d8dc s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143e1d8dc)
    
    if (data_143e1d8dc == 0xffffffff)
        atexit(sub_142cc3270)
        _Init_thread_footer(&data_143e1d8dc)

return &data_1439aabf0
