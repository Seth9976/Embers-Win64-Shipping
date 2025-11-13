// 函数: sub_140a54810
// 地址: 0x140a54810
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (sub_140af87b0() == 0)
    return 1

TEB* gsbase

if (data_143db4978 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143db4978)
    
    if (data_143db4978 == 0xffffffff)
        sub_140af2b60()
        data_143db4974 = sub_140b21a10(&data_143dbb3f0, u"nothreading") == 0
        _Init_thread_footer(&data_143db4978)

return zx.q(data_143db4974)
