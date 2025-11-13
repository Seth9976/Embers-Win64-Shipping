// 函数: sub_140963c50
// 地址: 0x140963c50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143ced388 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143ced388)
    
    if (data_143ced388 == 0xffffffff)
        sub_140b58260(&data_143ced380, u"OnlineSubsystemUtils", 1)
        _Init_thread_footer(&data_143ced388)

void* result = sub_140b3dbe0(data_143ced380)

if (result == 0)
    return result

return *(result + 8)
