// 函数: sub_140aae970
// 地址: 0x140aae970
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143dbae18 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143dbae18)
    
    if (data_143dbae18 == 0xffffffff)
        sub_140a97bb0(&data_143dbaca0)
        data_143dbae10 = &data_143dbaca0
        atexit(sub_142cbde90)
        _Init_thread_footer(&data_143dbae18)

return data_143dbae10
