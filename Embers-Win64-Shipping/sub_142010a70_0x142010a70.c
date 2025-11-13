// 函数: sub_142010a70
// 地址: 0x142010a70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143f3f3e0 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143f3f3e0)
    
    if (data_143f3f3e0 == 0xffffffff)
        data_143f3f3d0 = &data_143a2e3a8
        data_143f3f3d8 = u"HActor"
        _Init_thread_footer(&data_143f3f3e0)

return &data_143f3f3d0
