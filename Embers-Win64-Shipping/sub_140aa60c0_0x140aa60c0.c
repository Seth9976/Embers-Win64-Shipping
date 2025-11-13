// 函数: sub_140aa60c0
// 地址: 0x140aa60c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143db9df0 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143db9df0)
    
    if (data_143db9df0 == 0xffffffff)
        int128_t var_24
        __builtin_memcpy(&var_24, 
            "\x00\x00\x00\x00\x01\x00\x00\x00\x44\x01\x00\x00\x00\x00\x00\x00\x03\x00\x00\x00", 
            0x14)
        int64_t zmm1 = var_24:0xc.q
        data_143db9dd8 = 0x100.o
        data_143db9de8 = zmm1
        _Init_thread_footer(&data_143db9df0)

return &data_143db9dd8
