// 函数: sub_140d3c660
// 地址: 0x140d3c660
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143e1dc88 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143e1dc88)
    
    if (data_143e1dc88 == 0xffffffff)
        sub_140d39ae0(&data_143e1dad0)
        atexit(sub_142cc3870)
        _Init_thread_footer(&data_143e1dc88)

return &data_143e1dad0
