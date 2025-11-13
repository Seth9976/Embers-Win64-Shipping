// 函数: sub_140d21f60
// 地址: 0x140d21f60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143e1d93c s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143e1d93c)
    
    if (data_143e1d93c == 0xffffffff)
        atexit(sub_142cc3190)
        _Init_thread_footer(&data_143e1d93c)

return &data_1439aad48
