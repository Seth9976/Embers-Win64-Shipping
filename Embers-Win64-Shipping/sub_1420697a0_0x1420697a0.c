// 函数: sub_1420697a0
// 地址: 0x1420697a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r14 = *(arg2 + 0x1b0)
int64_t rsi = sx.q(*(arg1 + 0xe0))
int32_t rdx = 0
int64_t rax = data_143f42b90
int64_t arg_8 = r14

if (rsi s> 0)
    int64_t r9 = 0
    
    while (true)
        void* rcx_1 = *(arg1 + 0xd8)
        
        if ((*(arg1 + 0xd8) & 1) != 0)
            rcx_1 = (rcx_1 s>> 1) + arg1 + 0xd8
        
        if (*(rcx_1 + (r9 << 3)) == rax)
            break
        
        rdx += 1
        r9 += 1
        
        if (r9 s>= rsi)
            goto label_142069835

int16_t* r8_1

if (rsi s<= 0 || rdx == 0xffffffff)
label_142069835:
    TEB* gsbase
    
    if (data_143ce8564
            s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
        _Init_thread_header(&data_143ce8564)
        
        if (data_143ce8564 == 0xffffffff)
            data_143ce8560 = 0xffff
            _Init_thread_footer(&data_143ce8564)
    
    r8_1 = &data_143ce8560
else
    void* rcx_29 = *(arg1 + 0xe8)
    
    if ((rcx_29.b & 1) != 0)
        rcx_29 = (rcx_29 s>> 1) + arg1 + 0xe8
    
    r8_1 = rcx_29 + (sx.q(rdx) << 1)

void* result = sub_141440fc0(arg2, &arg_8, r8_1, arg6)

if (*(arg1 + 0x11a) u> 0)
    uint32_t rbp_1 = zx.d(*(arg1 + 0x118))
    void*** rcx_7 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_3 = &rcx_7[5]
    
    if (rax_3 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x30)
        rcx_7 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_3 = &rcx_7[5]
    
    *(arg2 + 0x30) = rax_3
    void**** rax_4 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_4 = rcx_7
    *(arg2 + 8) = &rcx_7[1]
    rcx_7[1] = 0
    result = arg7
    rcx_7[4] = result
    *rcx_7 = &data_142d99560
    rcx_7[2] = r14
    rcx_7[3].d = rbp_1

if (*(arg1 + 0x11e) u> 0)
    uint32_t rbp_2 = zx.d(*(arg1 + 0x11c))
    void*** rcx_13 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_6 = &rcx_13[5]
    
    if (rax_6 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x30)
        rcx_13 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_6 = &rcx_13[5]
    
    *(arg2 + 0x30) = rax_6
    void**** rax_7 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_7 = rcx_13
    result = &rcx_13[1]
    *(arg2 + 8) = result
    *result = 0
    *rcx_13 = &data_142d99560
    rcx_13[2] = r14
    rcx_13[3].d = rbp_2
    rcx_13[4] = arg3

if (*(arg1 + 0x122) u> 0)
    uint32_t rbp_3 = zx.d(*(arg1 + 0x120))
    void*** rcx_19 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_8 = &rcx_19[5]
    
    if (rax_8 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x30)
        rcx_19 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_8 = &rcx_19[5]
    
    *(arg2 + 0x30) = rax_8
    void**** rax_9 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_9 = rcx_19
    result = &rcx_19[1]
    *(arg2 + 8) = result
    *result = 0
    *rcx_19 = &data_142d99560
    rcx_19[2] = r14
    rcx_19[3].d = rbp_3
    rcx_19[4] = arg4

if (*(arg1 + 0x126) u> 0)
    uint32_t rsi_1 = zx.d(*(arg1 + 0x124))
    void*** rcx_25 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_10 = &rcx_25[5]
    
    if (rax_10 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x30)
        rcx_25 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_10 = &rcx_25[5]
    
    *(arg2 + 0x30) = rax_10
    void**** rax_11 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_11 = rcx_25
    *(arg2 + 8) = &rcx_25[1]
    rcx_25[1] = 0
    result = arg5
    rcx_25[4] = result
    *rcx_25 = &data_142d99560
    rcx_25[2] = r14
    rcx_25[3].d = rsi_1

return result
