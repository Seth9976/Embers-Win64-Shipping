// 函数: sub_142106690
// 地址: 0x142106690
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140d15db0(arg1, arg2)
uint64_t rdx = zx.q(data_14401b1a0)
*arg1 = &data_1432c8348
TEB* gsbase

if (data_143f4a028 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (rdx << 3))))
    _Init_thread_header(&data_143f4a028)
    
    if (data_143f4a028 == 0xffffffff)
        _vfprintf_p_l(&data_143f4a010, u"Utility", u"MaterialExpression")
        atexit(sub_142d02c40)
        _Init_thread_footer(&data_143f4a028)

return arg1
