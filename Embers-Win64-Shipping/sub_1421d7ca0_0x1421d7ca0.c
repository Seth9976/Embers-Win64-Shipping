// 函数: sub_1421d7ca0
// 地址: 0x1421d7ca0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1421a9880(arg1, arg2)
uint64_t rcx = zx.q(data_14401b1a0)
*arg1 = &data_1432fa228
arg1[8] = 0
arg1[9] = 0
*(arg1 + 0x5c) = 0
TEB* gsbase

if (data_143f50998 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (rcx << 3))))
    _Init_thread_header(&data_143f50998)
    
    if (data_143f50998 == 0xffffffff)
        sub_140b58260(&data_143f50990, u"BoneSocketActor", 1)
        _Init_thread_footer(&data_143f50998)

arg1[5].b |= 0x4f
arg1[6].b = 1
int64_t rax_2 = data_143f50990
*(arg1 + 0x54) |= 2
*(arg1 + 0x5c) = rax_2
arg1[0xd].b = 2
*(arg1 + 0x64) = 0xa
arg1[0xb].d = 0x3f800000
return arg1
