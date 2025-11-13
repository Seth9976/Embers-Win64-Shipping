// 函数: sub_140af2ae0
// 地址: 0x140af2ae0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143de5b80 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143de5b80)
    
    if (data_143de5b80 == 0xffffffff)
        sub_140ae64e0(&data_143de5920)
        atexit(sub_142cbee40)
        _Init_thread_footer(&data_143de5b80)

return &data_143de5920
