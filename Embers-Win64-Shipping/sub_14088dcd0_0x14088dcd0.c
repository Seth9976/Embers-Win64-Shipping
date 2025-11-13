// 函数: sub_14088dcd0
// 地址: 0x14088dcd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rsi = arg5
int32_t r8 = 0
int64_t rbx = sx.q(*(arg4 + 0xe0))
int64_t r14 = *(rsi + 0x228)

if (rbx s> 0)
    int64_t rdx = 0
    
    while (true)
        void* rcx_1 = *(arg4 + 0xd8)
        
        if ((*(arg4 + 0xd8) & 1) != 0)
            rcx_1 = (rcx_1 s>> 1) + arg4 + 0xd8
        
        if (*(rcx_1 + (rdx << 3)) == data_143ce8c00)
            break
        
        r8 += 1
        rdx += 1
        
        if (rdx s>= rbx)
            goto label_14088dd6e

int16_t* rdx_1

if (rbx s<= 0 || r8 == 0xffffffff)
label_14088dd6e:
    TEB* gsbase
    
    if (data_143ce8564
            s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
        _Init_thread_header(&data_143ce8564)
        
        if (data_143ce8564 == 0xffffffff)
            data_143ce8560 = 0xffff
            _Init_thread_footer(&data_143ce8564)
    
    rdx_1 = &data_143ce8560
else
    void* rcx_9 = *(arg4 + 0xe8)
    
    if ((rcx_9.b & 1) != 0)
        rcx_9 = (rcx_9 s>> 1) + arg4 + 0xe8
    
    rdx_1 = rcx_9 + (sx.q(r8) << 1)

int16_t rax_3 = *rdx_1

if (rax_3 != 0xffff)
    sub_140891ab0(arg6, r14, zx.d(rax_3))

sub_14088d770(arg6, *(arg1 + 4), *(rsi + 0x238))
arg5.d = *(rsi + 0x240)
int32_t arg_8 = *(arg1 + 8)
int16_t arg_c = *(arg1 + 0xc)
sub_14088bf20(arg6, &arg_8, &arg5)
int64_t rax_7 = *(rsi + 0x248)
int64_t r8_4 = data_14397f9a8

if (rax_7 != 0)
    r8_4 = rax_7

sub_14088d770(arg6, *(arg1 + 0xe), r8_4)
arg5.d = *(rsi + 0x250)
arg_8 = *(arg1 + 0x12)
arg_c = *(arg1 + 0x16)
return sub_14088bf20(arg6, &arg_8, &arg5)
