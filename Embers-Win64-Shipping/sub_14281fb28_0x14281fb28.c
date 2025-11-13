// 函数: sub_14281fb28
// 地址: 0x14281fb28
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143f89580 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143f89580)
    
    if (data_143f89580 == 0xffffffff)
        sub_1428218ac()
        sub_142821838()
        sub_142826608(&data_143f89560, &data_143f89510, &data_143f89538)
        atexit(sub_142d13f84)
        _Init_thread_footer(&data_143f89580)

return &data_143f89560
