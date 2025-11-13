// 函数: sub_1421d7fb0
// 地址: 0x1421d7fb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1421a9880(arg1, arg2)
uint64_t rcx = zx.q(data_14401b1a0)
*arg1 = &data_1432fac00
arg1[6] = 0
TEB* gsbase

if (data_143f50988 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (rcx << 3))))
    _Init_thread_header(&data_143f50988)
    
    if (data_143f50988 == 0xffffffff)
        sub_140b58260(&data_143f50980, u"None", 1)
        _Init_thread_footer(&data_143f50988)

arg1[5].b |= 3
arg1[6] = data_143f50980
return arg1
