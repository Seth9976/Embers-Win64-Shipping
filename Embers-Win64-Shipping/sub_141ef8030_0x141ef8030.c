// 函数: sub_141ef8030
// 地址: 0x141ef8030
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143f3ac50 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143f3ac50)
    
    if (data_143f3ac50 == 0xffffffff)
        sub_140b58260(&data_143f3ac48, u"SkipUCSModifiedProperties", 1)
        _Init_thread_footer(&data_143f3ac50)

void* result = *(arg2 + 0x40)

if (not(test_bit(result, 0xd)) && (0x200000001 & result) != 0
        && ((zx.q(*(*(arg2 + 8) + 0x10)) u>> 0x19).b & 1) == 0)
    result.b = 0
    return result

result.b = 1
return result
