// 函数: sub_140bdcda0
// 地址: 0x140bdcda0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143e1acf8 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143e1acf8)
    
    if (data_143e1acf8 == 0xffffffff)
        void arg_8
        data_143e1acf0 = sub_140ca88d0(*sub_140b58260(&arg_8, u"Vector", 1))
        _Init_thread_footer(&data_143e1acf8)

return data_143e1acf0
