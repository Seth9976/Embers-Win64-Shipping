// 函数: sub_140b50ef0
// 地址: 0x140b50ef0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (((*(arg2 + 4) ^ data_1439a93a4) | (*(arg2 + 8) ^ data_1439a93a8)
        | (*(arg2 + 0xc) ^ data_1439a93ac) | (*arg2 ^ data_1439a93a0)) != 0)
    return sub_140b4b580(arg1, arg2)

TEB* gsbase

if (data_143de8570 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143de8570)
    
    if (data_143de8570 == 0xffffffff)
        int128_t zmm0_1 = data_1439a93a0.o
        void arg_10
        data_143de8568 = *sub_140b58260(&arg_10, u"Unused custom version", 1)
        data_143de8550 = zmm0_1
        data_143de8560 = 0
        data_143de8564 = 1
        _Init_thread_footer(&data_143de8570)

return &data_143de8550
