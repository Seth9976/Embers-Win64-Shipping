// 函数: sub_140b3e300
// 地址: 0x140b3e300
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143de7b28 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143de7b28)
    
    if (data_143de7b28 == 0xffffffff)
        data_143de7b18 = 0xaab48e5b
        data_143de7b1c = 0xeda94853
        data_143de7b20 = 0xa951ed2d
        data_143de7b24 = 0xa8e795d
        _Init_thread_footer(&data_143de7b28)

return &data_143de7b18
