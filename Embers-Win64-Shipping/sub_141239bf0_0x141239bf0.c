// 函数: sub_141239bf0
// 地址: 0x141239bf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = 0
uint64_t r15 = *(arg2 + 0x1a0)
void* r10 = *(*(arg4 + 0x20) + 0x130)
int64_t* r11

if (r10 == 0)
    r11 = nullptr
else
    r11 = *(r10 + 0x78)

int64_t* var_28 = arg6
sub_14123be70(arg1, arg2, r15, arg3, arg5, r11)
int64_t r11_1 = sx.q(*(arg1 + 0xe0))

if (r11_1 s> 0)
    int64_t rdx = 0
    
    while (true)
        void* rcx_1 = *(arg1 + 0xd8)
        
        if ((*(arg1 + 0xd8) & 1) != 0)
            rcx_1 = (rcx_1 s>> 1) + arg1 + 0xd8
        
        if (*(rcx_1 + (rdx << 3)) == data_143e83070)
            break
        
        rbx += 1
        rdx += 1
        
        if (rdx s>= r11_1)
            goto label_141239cc1

int16_t* r8_2

if (r11_1 s<= 0 || rbx == 0xffffffff)
label_141239cc1:
    TEB* gsbase
    
    if (data_143ce8564
            s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
        _Init_thread_header(&data_143ce8564)
        
        if (data_143ce8564 == 0xffffffff)
            data_143ce8560 = 0xffff
            _Init_thread_footer(&data_143ce8564)
    
    r8_2 = &data_143ce8560
else
    void* rcx_6 = *(arg1 + 0xe8)
    
    if ((rcx_6.b & 1) != 0)
        rcx_6 = (rcx_6 s>> 1) + arg1 + 0xe8
    
    r8_2 = rcx_6 + (sx.q(rbx) << 1)

return sub_1412155b0(arg2, r15, r8_2, arg4, arg3.d, arg6) __tailcall
