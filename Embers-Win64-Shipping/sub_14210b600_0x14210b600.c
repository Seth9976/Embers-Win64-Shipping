// 函数: sub_14210b600
// 地址: 0x14210b600
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140d15db0(arg1, arg2)
uint64_t rcx = zx.q(data_14401b1a0)
*arg1 = &data_1432d0558
TEB* gsbase
void* ThreadLocalStoragePointer = gsbase->ThreadLocalStoragePointer
__builtin_memset(&arg1[8], 0, 0x28)

if (data_143f49ee0 s> *(0x14 + *(ThreadLocalStoragePointer + (rcx << 3))))
    _Init_thread_header(&data_143f49ee0)
    
    if (data_143f49ee0 == 0xffffffff)
        _vfprintf_p_l(&data_143f49ec8, u"Utility", u"MaterialExpression")
        atexit(sub_142d04ab0)
        _Init_thread_footer(&data_143f49ee0)

arg1[0xd] = 0
arg1[0xe].d = 0
return arg1
