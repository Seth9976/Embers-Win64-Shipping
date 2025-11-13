// 函数: sub_14123aa00
// 地址: 0x14123aa00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_14123aef0(arg1, arg2, arg3)
int64_t rbx = sx.q(*(arg1 + 0xe0))
int32_t r8 = 0
int64_t r14 = *(arg2 + 0x1b0)

if (rbx s> 0)
    int64_t rdx = 0
    
    while (true)
        void* rcx_1 = *(arg1 + 0xd8)
        
        if ((*(arg1 + 0xd8) & 1) != 0)
            rcx_1 = (rcx_1 s>> 1) + arg1 + 0xd8
        
        if (*(rcx_1 + (rdx << 3)) == data_143e82430)
            break
        
        r8 += 1
        rdx += 1
        
        if (rdx s>= rbx)
            goto label_14123aa9e

int16_t* rdx_1

if (rbx s<= 0 || r8 == 0xffffffff)
label_14123aa9e:
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
    
    rdx_1 = rcx_10 + (sx.q(r8) << 1)

int16_t result = *rdx_1

if (result != 0xffff)
    int64_t rdi_1 = *arg4
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
    result = 0x77a8
    *rcx_6 = &data_142da77a8
    rcx_6[2] = r14
    rcx_6[3].d = result_1
    rcx_6[4] = rdi_1

return result
