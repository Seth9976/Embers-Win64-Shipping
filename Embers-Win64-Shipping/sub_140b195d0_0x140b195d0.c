// 函数: sub_140b195d0
// 地址: 0x140b195d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143de6998 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143de6998)
    
    if (data_143de6998 == 0xffffffff)
        int128_t zmm0_1 = data_142e151c0
        data_143de68e0 = zmm0_1
        data_143de68c0 = 0
        data_143de68c8 = 0
        data_143de68d8 = 0
        data_143de68f0 = 0
        data_143de68f8 = 0
        data_143de6908 = 0
        data_143de6910 = zmm0_1
        data_143de6920 = 0
        data_143de6928 = 0
        data_143de6938 = 0
        data_143de6940 = zmm0_1
        data_143de6950 = 0
        data_143de6958 = 0
        data_143de6968 = 0
        data_143de6970 = zmm0_1
        data_143de6980 = 0
        data_143de6988 = 0
        data_143de68d0 = 2
        data_143de6900 = 2
        data_143de6930 = 2
        data_143de6960 = 2
        data_143de6990 = 2
        atexit(sub_142cbfca0)
        _Init_thread_footer(&data_143de6998)

return &(&data_143de68c0)[zx.q(arg1) * 3]
