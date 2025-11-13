// 函数: sub_141d8e360
// 地址: 0x141d8e360
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143f387a0 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143f387a0)
    
    if (data_143f387a0 == 0xffffffff)
        atexit(&data_142cf8930)
        _Init_thread_footer(&data_143f387a0)

void*** rax_2 = data_143f38798

if (rax_2 == 0)
    rax_2 = j_sub_140a82f30(zx.q((&rax_2[8]).d))
    
    if (rax_2 != 0)
        rax_2 = sub_141b49660(rax_2)
    
    int64_t* rcx_4 = data_143f38798
    data_143f38798 = rax_2
    
    if (rcx_4 != 0)
        (**rcx_4)(rcx_4, 1)
        rax_2 = data_143f38798

sub_140de8e10(rax_2)
return data_143f38798
