// 函数: sub_141a0e3d0
// 地址: 0x141a0e3d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143f288c0 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143f288c0)
    
    if (data_143f288c0 == 0xffffffff)
        data_143f288b0 = 0
        data_143f288b8 = 0
        _Init_thread_footer(&data_143f288c0)

return &data_143f288b0
