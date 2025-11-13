// 函数: sub_141a0c6c0
// 地址: 0x141a0c6c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* r15 = &data_143ce8560
int64_t rdi = sx.q(*(arg4 + 0xe0))
int32_t rbx = 0
int32_t r8 = 0
void* rsi = *(arg5 + 0x20)
void* r14 = *(rsi + 0x10)

if (rdi s> 0)
    int64_t rdx = 0
    
    while (true)
        void* rcx_1 = *(arg4 + 0xd8)
        
        if ((*(arg4 + 0xd8) & 1) != 0)
            rcx_1 = (rcx_1 s>> 1) + arg4 + 0xd8
        
        if (*(rcx_1 + (rdx << 3)) == data_143f281b0)
            break
        
        r8 += 1
        rdx += 1
        
        if (rdx s>= rdi)
            goto label_141a0c765

int16_t* rdx_1
TEB* gsbase

if (rdi s<= 0 || r8 == 0xffffffff)
label_141a0c765:
    
    if (data_143ce8564
            s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
        _Init_thread_header(&data_143ce8564)
        
        if (data_143ce8564 == 0xffffffff)
            data_143ce8560 = 0xffff
            _Init_thread_footer(&data_143ce8564)
    
    rdx_1 = &data_143ce8560
else
    void* rcx_10 = *(arg4 + 0xe8)
    
    if ((rcx_10.b & 1) != 0)
        rcx_10 = (rcx_10 s>> 1) + arg4 + 0xe8
    
    rdx_1 = rcx_10 + (sx.q(r8) << 1)

int16_t rax_4 = *rdx_1

if (rax_4 != 0xffff)
    sub_140891ab0(arg6, *(*(rsi + 8) + 0x18), zx.d(rax_4))

int64_t r11_2 = sx.q(*(arg4 + 0xe0))
void* rsi_1 = *(r14 + 0x650) + sx.q(*(rsi + 0x18)) * 0x28

if (r11_2 s> 0)
    int64_t rdx_4 = 0
    
    while (true)
        void* rcx_8 = *(arg4 + 0xd8)
        
        if ((*(arg4 + 0xd8) & 1) != 0)
            rcx_8 = (rcx_8 s>> 1) + arg4 + 0xd8
        
        if (*(rcx_8 + (rdx_4 << 3)) == data_143f28260)
            break
        
        rbx += 1
        rdx_4 += 1
        
        if (rdx_4 s>= r11_2)
            goto label_141a0c811

if (r11_2 s<= 0 || rbx == 0xffffffff)
label_141a0c811:
    
    if (data_143ce8564
            s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
        _Init_thread_header(&data_143ce8564)
        
        if (data_143ce8564 == 0xffffffff)
            data_143ce8560 = 0xffff
            _Init_thread_footer(&data_143ce8564)
else
    void* rcx_12 = *(arg4 + 0xe8)
    
    if ((rcx_12.b & 1) != 0)
        rcx_12 = (rcx_12 s>> 1) + arg4 + 0xe8
    
    r15 = rcx_12 + (sx.q(rbx) << 1)

int16_t result = *r15

if (result == 0xffff)
    return result

return sub_140891ab0(arg6, *(rsi_1 + 0x18), zx.d(result))
