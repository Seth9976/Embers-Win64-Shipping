// 函数: sub_1420775d0
// 地址: 0x1420775d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140d15db0(arg1, arg2)
uint64_t rcx = zx.q(data_14401b1a0)
*arg1 = &data_1432b9ce0
arg1[5] = &data_1432b9f60
__builtin_memset(&arg1[6], 0, 0x18)
TEB* gsbase

if (data_143f47d88 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (rcx << 3))))
    _Init_thread_header(&data_143f47d88)
    
    if (data_143f47d88 == 0xffffffff)
        sub_140b58260(&data_143f47d80, u"UInterpGroup", 1)
        _Init_thread_footer(&data_143f47d88)

arg1[8] = data_143f47d80
int32_t arg_8 = 0xff6450c8
arg1[9].d = 0xff6450c8
*(arg1 + 0x4c) = (*(arg1 + 0x4c) & 0xffffffef) | 2
return arg1
