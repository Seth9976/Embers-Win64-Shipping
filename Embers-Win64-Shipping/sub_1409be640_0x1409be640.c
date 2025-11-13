// 函数: sub_1409be640
// 地址: 0x1409be640
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143ceed08 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143ceed08)
    
    if (data_143ceed08 == 0xffffffff)
        atexit(sub_142cb8220)
        _Init_thread_footer(&data_143ceed08)

sub_1409c3b80(arg1, arg2, &data_143ceecf8)
int32_t r10 = data_143ceed00
int32_t rdx_3 = 0

if (r10 s> 0)
    int32_t* r8 = data_143ceecf8
    int64_t r11_1 = *(*(arg1 + 0x28) + 0x70)
    
    do
        int64_t rcx_1 = sx.q(*r8) * 3
        int32_t r9 = *(r11_1 + (rcx_1 << 3))
        int32_t rax_4 = *(r11_1 + (rcx_1 << 3) + 4)
        
        if (r9 == arg3 && rax_4 == arg4)
            return zx.q(rdx_3)
        
        if (rax_4 == arg3 && r9 == arg4)
            return zx.q(rdx_3)
        
        rdx_3 += 1
        r8 = &r8[1]
    while (rdx_3 s< r10)

return 0xffffffff
