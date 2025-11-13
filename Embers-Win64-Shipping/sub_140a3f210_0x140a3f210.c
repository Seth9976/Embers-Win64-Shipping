// 函数: sub_140a3f210
// 地址: 0x140a3f210
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143db48a4 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143db48a4)
    
    if (data_143db48a4 == 0xffffffff)
        sub_140af2b60()
        data_143db48a2 = sub_140b21a10(&data_143dbb3f0, u"noheartbeatthread") == 0
        _Init_thread_footer(&data_143db48a4)

return zx.q(data_143db48a2)
