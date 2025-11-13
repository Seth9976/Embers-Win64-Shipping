// 函数: sub_14210c1f0
// 地址: 0x14210c1f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140d15db0(arg1, arg2)
uint64_t rdx = zx.q(data_14401b1a0)
*arg1 = &data_1432cd2a0
TEB* gsbase

if (data_143f49150 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (rdx << 3))))
    _Init_thread_header(&data_143f49150)
    
    if (data_143f49150 == 0xffffffff)
        _vfprintf_p_l(&data_143f49138, u"Constants", u"MaterialExpression")
        atexit(sub_142d05130)
        _Init_thread_footer(&data_143f49150)

arg1[8].d &= 0xfffffffd
*(arg1 + 0x44) = 0
return arg1
