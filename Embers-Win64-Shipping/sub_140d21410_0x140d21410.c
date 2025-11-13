// 函数: sub_140d21410
// 地址: 0x140d21410
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143e1d908 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143e1d908)
    
    if (data_143e1d908 == 0xffffffff)
        atexit(sub_142cc3150)
        _Init_thread_footer(&data_143e1d908)

return &data_143e1d8f8
