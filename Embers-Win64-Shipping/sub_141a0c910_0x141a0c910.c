// 函数: sub_141a0c910
// 地址: 0x141a0c910
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r8 = 0
int64_t r11 = sx.q(*(arg4 + 0xe0))
void* rsi = *(arg5 + 0x20)

if (r11 s> 0)
    int64_t rdx = 0
    
    while (true)
        void* rcx_1 = *(arg4 + 0xd8)
        
        if ((*(arg4 + 0xd8) & 1) != 0)
            rcx_1 = (rcx_1 s>> 1) + arg4 + 0xd8
        
        if (*(rcx_1 + (rdx << 3)) == data_143f281b0)
            break
        
        r8 += 1
        rdx += 1
        
        if (rdx s>= r11)
            goto label_141a0c99b

void* rdx_1

if (r11 s<= 0 || r8 == 0xffffffff)
label_141a0c99b:
    TEB* gsbase
    
    if (data_143ce8564
            s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
        _Init_thread_header(&data_143ce8564)
        
        if (data_143ce8564 == 0xffffffff)
            data_143ce8560 = 0xffff
            _Init_thread_footer(&data_143ce8564)
    
    rdx_1 = &data_143ce8560
else
    void* rcx_6 = *(arg4 + 0xe8)
    
    if ((rcx_6.b & 1) != 0)
        rcx_6 = (rcx_6 s>> 1) + arg4 + 0xe8
    
    rdx_1 = rcx_6 + (sx.q(r8) << 1)

int16_t result = *rdx_1

if (result == 0xffff)
    return result

return sub_140891ab0(arg6, *(*(rsi + 8) + 0x18), zx.d(result)) __tailcall
