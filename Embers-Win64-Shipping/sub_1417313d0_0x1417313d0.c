// 函数: sub_1417313d0
// 地址: 0x1417313d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143ef75b8 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143ef75b8)
    
    if (data_143ef75b8 == 0xffffffff)
        data_143ef75a0 = _mm_unpacklo_ps(0xff7fffff, 0xff7fffff)
        int64_t temp0_2 = _mm_unpacklo_ps(0x7f7fffff, 0x7f7fffff)
        int32_t var_20_1 = 0xff7fffff
        data_143ef75a8 = 0xff7fffff
        int32_t var_14_1 = 0x7f7fffff
        data_143ef75ac = temp0_2
        data_143ef75b4 = 0x7f7fffff
        atexit(sub_142ce9bf0)
        _Init_thread_footer(&data_143ef75b8)

int32_t rax_2 = data_143ef75a8
*arg2 = data_143ef75a0
arg2[1].d = rax_2
int32_t rax_3 = data_143ef75b4
*(arg2 + 0xc) = data_143ef75ac
*(arg2 + 0x14) = rax_3
return arg2
