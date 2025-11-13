// 函数: sub_140a46430
// 地址: 0x140a46430
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143db4890 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143db4890)
    
    if (data_143db4890 == 0xffffffff)
        sub_140a3ba30(&data_143db4830, arg1)
        atexit(sub_142cbcf10)
        _Init_thread_footer(&data_143db4890)

return &data_143db4830
