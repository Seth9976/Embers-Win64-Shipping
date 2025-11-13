// 函数: sub_141ed3100
// 地址: 0x141ed3100
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141f04990(arg1, arg2)
uint64_t rdx = zx.q(data_14401b1a0)
*arg1 = &data_14325f888
arg1[5] = &data_1432600f0
arg1[0x3e] = &data_143260120
TEB* gsbase

if (data_143f3ac80 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (rdx << 3))))
    _Init_thread_header(&data_143f3ac80)
    
    if (data_143f3ac80 == 0xffffffff)
        sub_140b58260(&data_143f3ac60, u"Misc", 1)
        _vfprintf_p_l(&data_143f3ac68, u"Misc", u"SpriteCategory")
        atexit(sub_142cfbbe0)
        _Init_thread_footer(&data_143f3ac80)

sub_1422ac390(arg1, data_143f3a590, 1)
*(arg1 + 0x14d) |= 4
*(arg1 + 0x20e) |= 8
int32_t arg_8 = 0xffff0000
arg1[0x81].d = 0xffff0000
*(arg1 + 0x40c) = 0x3f800000
sub_141f256b0(arg1, 0)
*(arg1 + 0x414) &= 0xfe
arg1[0x82].d = 0x3b23d70a
return arg1
