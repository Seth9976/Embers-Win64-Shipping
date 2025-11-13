// 函数: sub_140d7b040
// 地址: 0x140d7b040
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143e20ca8 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143e20ca8)
    
    if (data_143e20ca8 == 0xffffffff)
        sub_140b5b3d0(&data_143e20c98)
        data_143e20c98 = &data_142ec0fb8
        atexit(sub_142cc9b10)
        _Init_thread_footer(&data_143e20ca8)

return &data_143e20c98
