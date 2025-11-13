// 函数: sub_141a2ae70
// 地址: 0x141a2ae70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143f2a8a0 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143f2a8a0)
    
    if (data_143f2a8a0 == 0xffffffff)
        int64_t rax_5 = data_143f29fa0 + 1
        data_143f29fa0 = rax_5
        data_143f2a898 = sub_141a4fae0(&data_143f29fa0, rax_5.d)
        _Init_thread_footer(&data_143f2a8a0)

*arg1 = data_143f2a898
return arg1
