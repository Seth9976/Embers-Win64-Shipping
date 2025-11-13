// 函数: sub_142105f10
// 地址: 0x142105f10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_14210bb30(arg1, arg2)
uint64_t rdx = zx.q(data_14401b1a0)
*arg1 = &data_1432d2968
TEB* gsbase

if (data_143f49fc8 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (rdx << 3))))
    _Init_thread_header(&data_143f49fc8)
    
    if (data_143f49fc8 == 0xffffffff)
        sub_142105750(&data_143f49fa8, u"/Engine/EngineResources/DefaultTexture", 0)
        sub_140b58260(&data_143f49fc0, u"None", 1)
        atexit(sub_142d02900)
        _Init_thread_footer(&data_143f49fc8)

arg1[8] = data_143f49fb8
arg1[0x1e].d = 0x3f000000
arg1[0x1a] = data_143f49fc0
*(arg1 + 0xf4) = 3
return arg1
