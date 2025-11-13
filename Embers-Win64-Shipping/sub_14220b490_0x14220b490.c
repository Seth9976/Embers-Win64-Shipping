// 函数: sub_14220b490
// 地址: 0x14220b490
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1421a9880(arg1, arg2)
arg1[5].b &= 0xfc
uint64_t rcx = zx.q(data_14401b1a0)
*arg1 = &data_1433050c8
*(arg1 + 0x34) = 0
__builtin_memset(&arg1[8], 0, 0x1d)
arg1[0xc] = 0
arg1[0xd] = 0
arg1[0xf] = 0
arg1[0x10] = 0
TEB* gsbase

if (data_143f511c0 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (rcx << 3))))
    _Init_thread_header(&data_143f511c0)
    
    if (data_143f511c0 == 0xffffffff)
        sub_140b58260(&data_143f511b8, u"None", 1)
        _Init_thread_footer(&data_143f511c0)

arg1[6].b = 0
int64_t rax_2 = data_143f511b8
*(arg1 + 0x8c) &= 0xfffffffe
*(arg1 + 0x34) = rax_2
arg1[0x11].b = 1
return arg1
