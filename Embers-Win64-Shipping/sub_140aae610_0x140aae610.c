// 函数: sub_140aae610
// 地址: 0x140aae610
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143dbac98 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143dbac98)
    
    if (data_143dbac98 == 0xffffffff)
        sub_140a91290(&data_143dba378)
        data_143dbac90 = &data_143dba378
        atexit(sub_142cbdd90)
        _Init_thread_footer(&data_143dbac98)

return data_143dbac90
