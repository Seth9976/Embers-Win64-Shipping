// 函数: sub_14210ae10
// 地址: 0x14210ae10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140d15db0(arg1, arg2)
uint64_t rdx = zx.q(data_14401b1a0)
*arg1 = &data_1432c8348
TEB* gsbase

if (data_143f4a0a8 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (rdx << 3))))
    _Init_thread_header(&data_143f4a0a8)
    
    if (data_143f4a0a8 == 0xffffffff)
        _vfprintf_p_l(&data_143f4a090, &data_1432d4398, u"MaterialExpression")
        atexit(sub_142d047e0)
        _Init_thread_footer(&data_143f4a0a8)

return arg1
