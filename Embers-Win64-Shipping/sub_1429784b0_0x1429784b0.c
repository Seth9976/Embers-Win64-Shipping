// 函数: sub_1429784b0
// 地址: 0x1429784b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143fed150 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143fed150)
    
    if (data_143fed150 == 0xffffffff)
        data_143fed148 = sx.q(1 << (data_143b86900).b)
        _Init_thread_footer(&data_143fed150)

int32_t rdx_2 = data_143b86900 + 2

while (arg1 s>> rdx_2.b s> 1)
    rdx_2 += 1

int32_t r8_1 = 1 << (rdx_2.b + 1)

if (arg1 s> sx.q(r8_1 - 0x40))
    return sx.q(r8_1) - arg1 + 0x40

int32_t rdi = 1 << rdx_2.b

if (arg1 s>= sx.q(rdi + 0x40))
    return 0

return sx.q(rdi) - arg1 + 0x40
