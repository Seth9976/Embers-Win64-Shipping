// 函数: sub_14270b610
// 地址: 0x14270b610
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    return 

char var_18
(*(*arg2 + 0x260))(arg2, &var_18)
TEB* gsbase

if (data_143f724c4 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143f724c4)
    
    if (data_143f724c4 == 0xffffffff)
        data_143f724b8 = 0xff
        sub_140b58260(&data_143f724bc, u"Invalid", 1)
        _Init_thread_footer(&data_143f724c4)

char rcx_1 = var_18

if (rcx_1 == data_143f724b8 || zx.d(rcx_1) s>= *(arg1 + 0x90))
    return 

int64_t* rcx_3 = *(*(arg1 + 0x88) + (zx.q(rcx_1) << 3))

if (rcx_3 != 0)
    (*(*rcx_3 + 0x278))(rcx_3, arg2)
