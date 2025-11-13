// 函数: sub_1421c2730
// 地址: 0x1421c2730
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r11 = sx.q(*(arg1 + 0xe0))
int32_t r10 = 0
int64_t r14 = *(arg2 + 0x188)

if (r11 s> 0)
    int64_t r9_1 = 0
    
    while (true)
        void* rcx_1 = *(arg1 + 0xd8)
        
        if ((*(arg1 + 0xd8) & 1) != 0)
            rcx_1 = (rcx_1 s>> 1) + arg1 + 0xd8
        
        if (*(rcx_1 + (r9_1 << 3)) == data_143f4e6f0)
            break
        
        r10 += 1
        r9_1 += 1
        
        if (r9_1 s>= r11)
            goto label_1421c27c6

void* rdx_1

if (r11 s<= 0 || r10 == 0xffffffff)
label_1421c27c6:
    TEB* gsbase
    
    if (data_143ce8564
            s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
        _Init_thread_header(&data_143ce8564)
        
        if (data_143ce8564 == 0xffffffff)
            data_143ce8560 = 0xffff
            _Init_thread_footer(&data_143ce8564)
    
    rdx_1 = &data_143ce8560
else
    void* rcx_10 = *(arg1 + 0xe8)
    
    if ((rcx_10.b & 1) != 0)
        rcx_10 = (rcx_10 s>> 1) + arg1 + 0xe8
    
    rdx_1 = rcx_10 + (sx.q(r10) << 1)

int16_t result = *rdx_1

if (result != 0xffff)
    int64_t rdi_1 = *arg3
    void*** rcx_6 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    uint32_t result_1 = zx.d(result)
    void* rax_3 = &rcx_6[5]
    
    if (rax_3 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x30)
        rcx_6 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_3 = &rcx_6[5]
    
    *(arg2 + 0x30) = rax_3
    void**** rax_4 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_4 = rcx_6
    *(arg2 + 8) = &rcx_6[1]
    rcx_6[1] = 0
    result = 0x1618
    *rcx_6 = &data_142f11618
    rcx_6[2] = r14
    rcx_6[3].d = result_1
    rcx_6[4] = rdi_1

return result
