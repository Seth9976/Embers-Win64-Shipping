// 函数: sub_140ad8a60
// 地址: 0x140ad8a60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143dbb300 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143dbb300)
    
    if (data_143dbb300 == 0xffffffff)
        data_143dbb2f0 = 0xf99670f8
        __builtin_strncpy(&data_143dbb2f4, "VByt", 4)
        data_143dbb2f8 = 0xbb0cae6d
        data_143dbb2fc = 0xc67cd5b6
        _Init_thread_footer(&data_143dbb300)

return &data_143dbb2f0
