// 函数: sub_140d212c0
// 地址: 0x140d212c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143e1d934 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143e1d934)
    
    if (data_143e1d934 == 0xffffffff)
        atexit(sub_142cc3080)
        _Init_thread_footer(&data_143e1d934)

return &data_1439aace0
