// 函数: sub_140ab23c0
// 地址: 0x140ab23c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143db9f60 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143db9f60)
    
    if (data_143db9f60 == 0xffffffff)
        data_143db9f50 = 0x960eead8
        data_143db9f54 = 0x34d44d08
        data_143db9f58 = 0xbc1118d9
        data_143db9f5c = 0x5bdf8d43
        _Init_thread_footer(&data_143db9f60)

return &data_143db9f50
