// 函数: sub_140af3580
// 地址: 0x140af3580
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143de58d0 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143de58d0)
    
    if (data_143de58d0 == 0xffffffff)
        data_143de58c0 = 0
        data_143de58c8 = 0
        atexit(sub_142cbedb0)
        _Init_thread_footer(&data_143de58d0)

if (*(arg1 + 0x40) == 0)
    return &data_143de58c0

return (sx.q(*(arg1 + 0x40) - 1) << 4) + *(arg1 + 0x38)
