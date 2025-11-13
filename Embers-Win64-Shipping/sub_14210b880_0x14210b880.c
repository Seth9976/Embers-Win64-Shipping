// 函数: sub_14210b880
// 地址: 0x14210b880
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_14210bcd0(arg1, arg2)
uint64_t rdx = zx.q(data_14401b1a0)
*arg1 = &data_1432d2438
TEB* gsbase

if (data_143f48ca8 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (rdx << 3))))
    _Init_thread_header(&data_143f48ca8)
    
    if (data_143f48ca8 == 0xffffffff)
        sub_142105750(&data_143f48c60, u"/Engine/EngineResources/DefaultTexture", 0)
        _vfprintf_p_l(&data_143f48c78, u"Texture", u"MaterialExpression")
        _vfprintf_p_l(&data_143f48c90, u"Parameters", u"MaterialExpression")
        atexit(sub_142d04c10)
        _Init_thread_footer(&data_143f48ca8)

arg1[8] = data_143f48c70
return arg1
