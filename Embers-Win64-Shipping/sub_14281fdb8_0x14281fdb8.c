// 函数: sub_14281fdb8
// 地址: 0x14281fdb8
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143f89710 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143f89710)
    
    if (data_143f89710 == 0xffffffff)
        sub_142826388(&data_143f896f0, 0x23)
        atexit(sub_142d1408c)
        _Init_thread_footer(&data_143f89710)

*arg1 = data_143f896f0
int32_t rax_2
rax_2.b = data_143f896f4
arg1[1].b = rax_2.b
rax_2.b = data_143f896f5
*(arg1 + 5) = rax_2.b
sub_14281f81c(&arg1[2], &data_143f896f8)
return arg1
