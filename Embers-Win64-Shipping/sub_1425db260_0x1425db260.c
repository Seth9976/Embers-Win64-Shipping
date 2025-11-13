// 函数: sub_1425db260
// 地址: 0x1425db260
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143f70a38 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143f70a38)
    
    if (data_143f70a38 == 0xffffffff)
        int64_t rax_5 = sub_1425e1410()
        data_143f70a28 = 0
        data_143f70a30 = 1
        sub_1405c4a00(&data_143f70a28, 1, 0)
        *data_143f70a28 = rax_5
        atexit(sub_142d11a30)
        _Init_thread_footer(&data_143f70a38)

*arg2 = data_143f70a28
arg2[1].d = data_143f70a30
return arg2
