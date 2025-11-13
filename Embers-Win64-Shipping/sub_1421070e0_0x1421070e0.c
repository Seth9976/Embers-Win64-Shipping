// 函数: sub_1421070e0
// 地址: 0x1421070e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140d15db0(arg1, arg2)
uint64_t rdx = zx.q(data_14401b1a0)
*arg1 = &data_1432cfdc0
TEB* gsbase

if (data_143f48f90 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (rdx << 3))))
    _Init_thread_header(&data_143f48f90)
    
    if (data_143f48f90 == 0xffffffff)
        _vfprintf_p_l(&data_143f48f60, u"Constants", u"MaterialExpression")
        _vfprintf_p_l(&data_143f48f78, u"Vectors", u"MaterialExpression")
        atexit(sub_142d03110)
        _Init_thread_footer(&data_143f48f90)

return arg1
