// 函数: sub_140b19bc0
// 地址: 0x140b19bc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143de685c s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143de685c)
    
    if (data_143de685c == 0xffffffff)
        atexit(sub_142cbfa90)
        _Init_thread_footer(&data_143de685c)

return &data_1439a4950
