// 函数: sub_140bdca20
// 地址: 0x140bdca20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143e1ad08 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143e1ad08)
    
    if (data_143e1ad08 == 0xffffffff)
        void arg_8
        data_143e1ad00 = sub_140ca88d0(*sub_140b58260(&arg_8, u"FallbackStruct", 1))
        _Init_thread_footer(&data_143e1ad08)

return data_143e1ad00
