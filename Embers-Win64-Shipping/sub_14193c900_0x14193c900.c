// 函数: sub_14193c900
// 地址: 0x14193c900
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143eff870 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143eff870)
    
    if (data_143eff870 == 0xffffffff)
        atexit(sub_142cee380)
        _Init_thread_footer(&data_143eff870)

return &data_1439c75d0
