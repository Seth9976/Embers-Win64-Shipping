// 函数: sub_141de9410
// 地址: 0x141de9410
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143f392e0 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143f392e0)
    
    if (data_143f392e0 == 0xffffffff)
        int128_t zmm2 = data_143dbb0c0
        int128_t zmm1 = data_143dbb0d0
        int128_t zmm0_1 = data_143dbb0e0
        data_143f39220 = zmm2
        data_143f39230 = zmm1
        data_143f39240 = zmm0_1
        data_143f39250 = zmm2
        data_143f39260 = zmm1
        data_143f39270 = zmm0_1
        data_143f39280 = zmm2
        data_143f39290 = zmm1
        data_143f392a0 = zmm0_1
        data_143f392b0 = zmm2
        data_143f392c0 = zmm1
        data_143f392d0 = zmm0_1
        _Init_thread_footer(&data_143f392e0)

return &(&data_143f39220)[(zx.q(arg3) + (zx.q(arg2) << 1)) * 3]
