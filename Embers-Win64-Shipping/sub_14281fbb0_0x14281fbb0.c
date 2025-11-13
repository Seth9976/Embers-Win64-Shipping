// 函数: sub_14281fbb0
// 地址: 0x14281fbb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143f895d0 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143f895d0)
    
    if (data_143f895d0 == 0xffffffff)
        sub_14281fc38()
        sub_14281fb28()
        sub_142826608(&data_143f895b0, &data_143f89560, &data_143f89588)
        atexit(sub_142d13fdc)
        _Init_thread_footer(&data_143f895d0)

return &data_143f895b0
