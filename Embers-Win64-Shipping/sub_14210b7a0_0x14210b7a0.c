// 函数: sub_14210b7a0
// 地址: 0x14210b7a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140d15db0(arg1, arg2)
*(arg1 + 0x49) &= 0xfe
uint64_t rdx = zx.q(data_14401b1a0)
*arg1 = &data_1432c9288
TEB* gsbase

if (data_143f48cf8 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (rdx << 3))))
    _Init_thread_header(&data_143f48cf8)
    
    if (data_143f48cf8 == 0xffffffff)
        sub_142105750(&data_143f48cb0, u"/Engine/EngineResources/DefaultTexture", 0)
        _vfprintf_p_l(&data_143f48cc8, u"Texture", u"MaterialExpression")
        _vfprintf_p_l(&data_143f48ce0, u"Functions", u"MaterialExpression")
        atexit(sub_142d04b50)
        _Init_thread_footer(&data_143f48cf8)

arg1[8] = data_143f48cc0
return arg1
