// 函数: sub_14210b190
// 地址: 0x14210b190
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140d15db0(arg1, arg2)
uint64_t rcx = zx.q(data_14401b1a0)
*arg1 = &data_143023d68
__builtin_memset(&arg1[8], 0, 0x14)
TEB* gsbase

if (data_143f49728 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (rcx << 3))))
    _Init_thread_header(&data_143f49728)
    
    if (data_143f49728 == 0xffffffff)
        _vfprintf_p_l(&data_143f49710, u"Math", u"MaterialExpression")
        atexit(sub_142d04920)
        _Init_thread_footer(&data_143f49728)

return arg1
