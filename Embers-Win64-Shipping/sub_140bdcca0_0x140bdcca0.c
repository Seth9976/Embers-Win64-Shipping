// 函数: sub_140bdcca0
// 地址: 0x140bdcca0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143e1ad28 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143e1ad28)
    
    if (data_143e1ad28 == 0xffffffff)
        void arg_8
        data_143e1ad20 = sub_140ca88d0(*sub_140b58260(&arg_8, u"SoftObjectPath", 1))
        _Init_thread_footer(&data_143e1ad28)

return data_143e1ad20
