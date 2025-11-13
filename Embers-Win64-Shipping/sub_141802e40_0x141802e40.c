// 函数: sub_141802e40
// 地址: 0x141802e40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143efa020 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143efa020)
    
    if (data_143efa020 == 0xffffffff)
        atexit(sub_142cebe20)
        _Init_thread_footer(&data_143efa020)

return &data_143efa010
