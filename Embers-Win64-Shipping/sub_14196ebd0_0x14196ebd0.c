// 函数: sub_14196ebd0
// 地址: 0x14196ebd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143f0fcb8 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143f0fcb8)
    
    if (data_143f0fcb8 == 0xffffffff)
        data_143f0fca8 = 0
        data_143f0fcb0 = 0
        atexit(sub_142cf08a0)
        _Init_thread_footer(&data_143f0fcb8)

int32_t r8_1 = 0xff

if (data_143f01c93 != 0)
    r8_1 = 0

int32_t result = sub_140a22e70(*(arg1 + 0x10), &data_143f0fca8, r8_1)
int64_t* rcx_1 = *(arg1 + 0x10)
*(arg1 + 0x10) = 0

if (rcx_1 != 0)
    result = rcx_1[9].d
    rcx_1[9].d -= 1
    
    if (result == 1)
        result = sub_140a2f6e0(rcx_1)

int64_t* rcx_2 = *(arg1 + 0x10)

if (rcx_2 != 0)
    rcx_2[9].d -= 1
    
    if (rcx_2[9].d == 1)
        return sub_140a2f6e0(rcx_2)

return result
