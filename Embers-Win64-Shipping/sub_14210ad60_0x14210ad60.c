// 函数: sub_14210ad60
// 地址: 0x14210ad60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140d15db0(arg1, arg2)
uint64_t rcx = zx.q(data_14401b1a0)
*arg1 = &data_143023d68
__builtin_memset(arg1 + 0x44, 0, 0x14)
TEB* gsbase

if (data_143f4a048 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (rcx << 3))))
    _Init_thread_header(&data_143f4a048)
    
    if (data_143f4a048 == 0xffffffff)
        _vfprintf_p_l(&data_143f4a030, &data_1432d4398, u"MaterialExpression")
        atexit(sub_142d04790)
        _Init_thread_footer(&data_143f4a048)

return arg1
