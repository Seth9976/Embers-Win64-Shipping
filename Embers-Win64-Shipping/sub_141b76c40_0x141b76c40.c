// 函数: sub_141b76c40
// 地址: 0x141b76c40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143f32158 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143f32158)
    
    if (data_143f32158 == 0xffffffff)
        data_143f32150 = sub_140bdcb20()
        _Init_thread_footer(&data_143f32158)

if (arg1 != 0 && ((zx.q(*(*(arg1 + 8) + 0x10)) u>> 0x14).b & 1) != 0)
    int64_t rax_2
    rax_2.b = *(arg1 + 0x78) == data_143f32150
    return rax_2

uint64_t rax_1
rax_1.b = 0
return rax_1
