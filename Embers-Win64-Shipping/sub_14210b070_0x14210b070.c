// 函数: sub_14210b070
// 地址: 0x14210b070
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140d15db0(arg1, arg2)
uint64_t rcx = zx.q(data_14401b1a0)
*arg1 = &data_1432d1710
__builtin_memset(&arg1[8], 0, 0x50)
TEB* gsbase

if (data_143f49ea0 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (rcx << 3))))
    _Init_thread_header(&data_143f49ea0)
    
    if (data_143f49ea0 == 0xffffffff)
        _vfprintf_p_l(&data_143f49e88, u"Utility", u"MaterialExpression")
        atexit(sub_142d048d0)
        _Init_thread_footer(&data_143f49ea0)

arg1[0x12].d = 0x43800000
*(arg1 + 0x94) = 0x42c80000
return arg1
