// 函数: sub_14210af80
// 地址: 0x14210af80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140d15db0(arg1, arg2)
uint64_t rcx = zx.q(data_14401b1a0)
*arg1 = &data_1432cdab0
__builtin_memset(&arg1[8], 0, 0x50)
TEB* gsbase

if (data_143f49fe8 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (rcx << 3))))
    _Init_thread_header(&data_143f49fe8)
    
    if (data_143f49fe8 == 0xffffffff)
        _vfprintf_p_l(&data_143f49fd0, u"SpeedTree", u"MaterialExpression")
        atexit(sub_142d04880)
        _Init_thread_footer(&data_143f49fe8)

arg1[0x12].w = 0
*(arg1 + 0x92) = 0
__builtin_strncpy(arg1 + 0x94, "fff?", 5)
return arg1
