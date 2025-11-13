// 函数: sub_141b222a0
// 地址: 0x141b222a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143f2c870 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143f2c870)
    
    if (data_143f2c870 == 0xffffffff)
        sub_140b58170(&data_143f2c858, "PreEvaluation", 1)
        sub_140b58170(&data_143f2c860, "SpawnObjects", 1)
        sub_140b58170(&data_143f2c868, "PostEvaluation", 1)
        _Init_thread_footer(&data_143f2c870)

*arg1 = *(&data_143f2c858 + (sx.q(arg2) << 3))
return arg1
