// 函数: sub_140ab2000
// 地址: 0x140ab2000
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143dbaea0 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143dbaea0)
    
    if (data_143dbaea0 == 0xffffffff)
        sub_140a91460(&data_143dbae20)
        data_143dbae98 = &data_143dbae20
        atexit(sub_142cbde30)
        _Init_thread_footer(&data_143dbaea0)

return data_143dbae98
