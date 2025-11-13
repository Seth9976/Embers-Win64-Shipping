// 函数: sub_142274ff0
// 地址: 0x142274ff0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143f52830 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143f52830)
    
    if (data_143f52830 == 0xffffffff)
        atexit(sub_142d0abb0)
        _Init_thread_footer(&data_143f52830)

(*(*arg1 + 0xc60))(arg1, &data_143f52820)
int64_t* rcx_1 = arg1[0x69]
int512_t zmm2
zmm2.o = arg2
(*(*rcx_1 + 0x268))(rcx_1, &data_143f52820, zmm2, zx.q(arg3), arg4)
int32_t result = data_143f5282c
data_143f52828 = 0

if (result s< 0 && result != 0)
    return sub_1405c5570(&data_143f52820, 0)

return result
