// 函数: sub_142106e90
// 地址: 0x142106e90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140d15db0(arg1, arg2)
uint64_t rcx = zx.q(data_14401b1a0)
*arg1 = &data_1432cdd38
arg1[9] = 0
arg1[0xa] = 0
arg1[0xd].d = 0x12
TEB* gsbase
int64_t rcx_1 = *(gsbase->ThreadLocalStoragePointer + (rcx << 3))
*(arg1 + 0x58) = data_14399f5c0

if (data_143f49848 s> *(0x14 + rcx_1))
    _Init_thread_header(&data_143f49848)
    
    if (data_143f49848 == 0xffffffff)
        _vfprintf_p_l(&data_143f49830, u"Utility", u"MaterialExpression")
        atexit(sub_142d02fa0)
        _Init_thread_footer(&data_143f49848)

return arg1
