// 函数: sub_14271bad0
// 地址: 0x14271bad0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(arg1[1].d)
int32_t rax = (rdi + 1).d
arg1[1].d = rax

if (rax s> *(arg1 + 0xc))
    sub_1405c4ec0(arg1)

int32_t* result = *arg1 + rdi * 0x28
TEB* gsbase

if (data_143f724b0 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143f724b0)
    
    if (data_143f724b0 == 0xffffffff)
        data_143f724ac = 0xffffffff
        _Init_thread_footer(&data_143f724b0)

*result = data_143f724ac
*(result + 8) = 0
result[1] = 0xffffffff
*(result + 0x10) = data_143b58120.q
int32_t rcx_2 = data_143b58128
*(result + 0x20) &= 0xfffffffffffffffe
result[6] = rcx_2
*(result + 0x20) = data_143de5458 * 2
return result
