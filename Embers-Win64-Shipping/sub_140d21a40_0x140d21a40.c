// 函数: sub_140d21a40
// 地址: 0x140d21a40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143e1d890 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143e1d890)
    
    if (data_143e1d890 == 0xffffffff)
        data_143e1d86c = 0x80
        __builtin_memset(&data_143e1d840, 0, 0x2c)
        data_143e1d874 = 0
        data_143e1d880 = 0
        data_143e1d888 = 0
        data_143e1d870 = 0xffffffff
        atexit(sub_142cc33d0)
        _Init_thread_footer(&data_143e1d890)

return &data_143e1d840
