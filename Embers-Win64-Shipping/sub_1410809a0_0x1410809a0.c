// 函数: sub_1410809a0
// 地址: 0x1410809a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_18 = arg3
int64_t r11 = sx.q(*(arg1 + 0xe0))
int32_t r10 = 0

if (r11 s> 0)
    int64_t r8 = 0
    
    while (true)
        void* rcx_1 = *(arg1 + 0xd8)
        
        if ((*(arg1 + 0xd8) & 1) != 0)
            rcx_1 = (rcx_1 s>> 1) + arg1 + 0xd8
        
        if (*(rcx_1 + (r8 << 3)) == data_143f55740)
            break
        
        r10 += 1
        r8 += 1
        
        if (r8 s>= r11)
            goto label_141080a2a

void* r8_1

if (r11 s<= 0 || r10 == 0xffffffff)
label_141080a2a:
    TEB* gsbase
    
    if (data_143ce8564
            s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
        _Init_thread_header(&data_143ce8564)
        
        if (data_143ce8564 == 0xffffffff)
            data_143ce8560 = 0xffff
            _Init_thread_footer(&data_143ce8564)
    
    r8_1 = &data_143ce8560
else
    void* rcx_5 = *(arg1 + 0xe8)
    
    if ((rcx_5.b & 1) != 0)
        rcx_5 = (rcx_5 s>> 1) + arg1 + 0xe8
    
    r8_1 = rcx_5 + (sx.q(r10) << 1)

return sub_14077caf0(arg2, &arg_18, r8_1, arg4)
