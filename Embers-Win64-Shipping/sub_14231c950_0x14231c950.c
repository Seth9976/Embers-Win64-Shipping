// 函数: sub_14231c950
// 地址: 0x14231c950
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r11 = sx.q(*(arg1 + 0xe0))
int64_t arg_18 = *(arg2 + 0x1a0)
int64_t rax_1 = data_143f55740
TEB* gsbase

if (arg3 == 0)
    if (r11 s> 0)
        uint64_t rdx_3 = arg3
        
        while (true)
            void* rcx_6 = *(arg1 + 0xd8)
            
            if ((*(arg1 + 0xd8) & 1) != 0)
                rcx_6 = (rcx_6 s>> 1) + arg1 + 0xd8
            
            if (*(rcx_6 + (rdx_3 << 3)) == rax_1)
                break
            
            arg3 = zx.q(arg3.d + 1)
            rdx_3 += 1
            
            if (rdx_3 s>= r11)
                goto label_14231ca9a
    
    int16_t* r8_2
    
    if (r11 s<= 0 || arg3.d == 0xffffffff)
    label_14231ca9a:
        
        if (data_143ce8564
                s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
            _Init_thread_header(&data_143ce8564)
            
            if (data_143ce8564 == 0xffffffff)
                data_143ce8560 = 0xffff
                _Init_thread_footer(&data_143ce8564)
        
        r8_2 = &data_143ce8560
    else
        void* rcx_8 = *(arg1 + 0xe8)
        
        if ((rcx_8.b & 1) != 0)
            rcx_8 = (rcx_8 s>> 1) + arg1 + 0xe8
        
        r8_2 = rcx_8 + (sx.q(arg3.d) << 1)
    
    return sub_141083500(arg2, &arg_18, r8_2, 0)

int64_t rsi = *(arg3 + 0x10)
int32_t r8 = 0

if (r11 s> 0)
    int64_t rdx = 0
    
    while (true)
        void* rcx_1 = *(arg1 + 0xd8)
        
        if ((*(arg1 + 0xd8) & 1) != 0)
            rcx_1 = (rcx_1 s>> 1) + arg1 + 0xd8
        
        if (*(rcx_1 + (rdx << 3)) == rax_1)
            break
        
        r8 += 1
        rdx += 1
        
        if (rdx s>= r11)
            goto label_14231c9ea

int16_t* r8_1

if (r11 s<= 0 || r8 == 0xffffffff)
label_14231c9ea:
    
    if (data_143ce8564
            s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
        _Init_thread_header(&data_143ce8564)
        
        if (data_143ce8564 == 0xffffffff)
            data_143ce8560 = 0xffff
            _Init_thread_footer(&data_143ce8564)
    
    r8_1 = &data_143ce8560
else
    void* rcx_3 = *(arg1 + 0xe8)
    
    if ((rcx_3.b & 1) != 0)
        rcx_3 = (rcx_3 s>> 1) + arg1 + 0xe8
    
    r8_1 = rcx_3 + (sx.q(r8) << 1)

return sub_141083500(arg2, &arg_18, r8_1, rsi)
