// 函数: sub_141b220b0
// 地址: 0x141b220b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143f2c610 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143f2c610)
    
    if (data_143f2c610 == 0xffffffff)
        int64_t var_20_1 = 0
        void arg_8
        data_143f2c5f8.d = *sub_141a387d0(&arg_8)
        data_143f2c5f8:4.o = 0.o
        data_143f2c608:4.d = 0
        _Init_thread_footer(&data_143f2c610)

int64_t zmm1 = data_143f2c608
*arg1 = data_143f2c5f8
arg1[1].q = zmm1
return arg1
