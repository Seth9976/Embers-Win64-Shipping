// 函数: sub_140b3e200
// 地址: 0x140b3e200
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143de7c08 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143de7c08)
    
    if (data_143de7c08 == 0xffffffff)
        data_143de7bf8 = 0x32457efc
        __builtin_strncpy(&data_143de7bfc, "o@(I", 4)
        data_143de7c00 = 0xbd78d943
        data_143de7c04 = 0x633797d1
        _Init_thread_footer(&data_143de7c08)

return &data_143de7bf8
