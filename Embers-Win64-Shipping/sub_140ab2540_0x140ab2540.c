// 函数: sub_140ab2540
// 地址: 0x140ab2540
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143db9f30 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143db9f30)
    
    if (data_143db9f30 == 0xffffffff)
        data_143db9f20 = 0x595a123b
        data_143db9f24 = 0x9418491f
        data_143db9f28 = 0xb416e9db
        data_143db9f2c = 0xd2127828
        _Init_thread_footer(&data_143db9f30)

return &data_143db9f20
