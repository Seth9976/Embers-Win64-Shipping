// 函数: sub_140e13600
// 地址: 0x140e13600
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143e280a8 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143e280a8)
    
    if (data_143e280a8 == 0xffffffff)
        sub_140dd9270(&data_143e27e80)
        atexit(sub_142ccab40)
        _Init_thread_footer(&data_143e280a8)

return &data_143e27e80
