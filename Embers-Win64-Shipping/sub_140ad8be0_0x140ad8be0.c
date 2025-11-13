// 函数: sub_140ad8be0
// 地址: 0x140ad8be0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143dbb2b8 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143dbb2b8)
    
    if (data_143dbb2b8 == 0xffffffff)
        data_143dbb2a8 = 0x8d1e08e3
        __builtin_strncpy(&data_143dbb2ac, "EBS_", 4)
        data_143dbb2b0 = 0xa987ad7e
        data_143dbb2b4 = 0xdb78a4b7
        _Init_thread_footer(&data_143dbb2b8)

return &data_143dbb2a8
