// 函数: sub_1421d7f00
// 地址: 0x1421d7f00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1421a9880(arg1, arg2)
uint64_t rcx = zx.q(data_14401b1a0)
*arg1 = &data_1432fa8b8
arg1[6] = 0
TEB* gsbase

if (data_143f50978 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (rcx << 3))))
    _Init_thread_header(&data_143f50978)
    
    if (data_143f50978 == 0xffffffff)
        sub_140b58260(&data_143f50970, u"None", 1)
        _Init_thread_footer(&data_143f50978)

arg1[5].b |= 1
arg1[7].b = 0
int64_t rax_2 = data_143f50970
*(arg1 + 0x3c) &= 0xfffffffe
*(arg1 + 0x44) &= 0xfffffffe
arg1[6] = rax_2
arg1[8].d = 0x3f800000
arg1[9].d = 0x3f800000
return arg1
