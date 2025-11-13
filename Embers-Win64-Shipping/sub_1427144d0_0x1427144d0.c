// 函数: sub_1427144d0
// 地址: 0x1427144d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char result_1
sub_142702060(&result_1, arg2)
TEB* gsbase

if (data_143f724c4 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143f724c4)
    
    if (data_143f724c4 == 0xffffffff)
        data_143f724b8 = 0xff
        sub_140b58260(&data_143f724bc, u"Invalid", 1)
        _Init_thread_footer(&data_143f724c4)

char result = result_1

if (result == data_143f724b8)
    return result

char result_2 = result
int64_t var_24
int64_t var_14_1 = var_24
return sub_142718ca0(arg1, &result_2, arg3)
