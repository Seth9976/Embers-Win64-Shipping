// 函数: sub_140baa830
// 地址: 0x140baa830
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143e1a7c0 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143e1a7c0)
    
    if (data_143e1a7c0 == 0xffffffff)
        int32_t rax_8 = data_143e1a350
        data_143e1a7b8 = rax_8
        data_143e1a7bc = rax_8
        _Init_thread_footer(&data_143e1a7c0)

if (arg1 s<= 0)
    return 0

int32_t rax_2 = data_143e1a7bc * 0xbb38435
uint128_t zmm0 = _mm_cvtepi32_ps(zx.o(arg1))
data_143e1a7bc = rax_2 + 0x3619636b
return zx.q(int.d((((rax_2 + 0x3619636b) u>> 9 | 0x3f800000) - 1f) f* zmm0.d))
