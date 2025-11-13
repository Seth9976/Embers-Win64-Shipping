// 函数: sub_14241fdd0
// 地址: 0x14241fdd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r12 = *(arg2 + 0x1b0)
int64_t r11 = sx.q(*(arg1 + 0xe0))
int32_t rdx = 0
int64_t* r15 = data_14395f4d0

if (r11 s> 0)
    int64_t r8 = 0
    
    while (true)
        void* rcx_1 = *(arg1 + 0xd8)
        
        if ((*(arg1 + 0xd8) & 1) != 0)
            rcx_1 = (rcx_1 s>> 1) + arg1 + 0xd8
        
        if (*(rcx_1 + (r8 << 3)) == data_143f5be60)
            break
        
        rdx += 1
        r8 += 1
        
        if (r8 s>= r11)
            goto label_14241fe72

int16_t* rdx_1

if (r11 s<= 0 || rdx == 0xffffffff)
label_14241fe72:
    TEB* gsbase
    
    if (data_143ce8564
            s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
        _Init_thread_header(&data_143ce8564)
        
        if (data_143ce8564 == 0xffffffff)
            data_143ce8560 = 0xffff
            _Init_thread_footer(&data_143ce8564)
    
    rdx_1 = &data_143ce8560
else
    void* rcx_36 = *(arg1 + 0xe8)
    
    if ((rcx_36.b & 1) != 0)
        rcx_36 = (rcx_36 s>> 1) + arg1 + 0xe8
    
    rdx_1 = rcx_36 + (sx.q(rdx) << 1)

void* result = zx.q(*rdx_1)

if (result.w != 0xffff)
    int64_t rbp_1 = *arg3
    void*** rcx_6 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    uint32_t r14_1 = zx.d(result.w)
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
    result = &data_142da77a8
    *rcx_6 = &data_142da77a8
    rcx_6[2] = r12
    rcx_6[3].d = r14_1
    rcx_6[4] = rbp_1

if (*(arg1 + 0x11a) u> 0)
    uint32_t rbp_2 = zx.d(*(arg1 + 0x118))
    void*** rcx_12 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_6 = &rcx_12[5]
    
    if (rax_6 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x30)
        rcx_12 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_6 = &rcx_12[5]
    
    *(arg2 + 0x30) = rax_6
    void**** rax_7 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_7 = rcx_12
    result = &rcx_12[1]
    *(arg2 + 8) = result
    *result = 0
    *rcx_12 = &data_142da77b8
    rcx_12[2] = r12
    rcx_12[3].d = rbp_2
    rcx_12[4] = arg4

if (*(arg1 + 0x11e) u> 0)
    uint32_t rbp_3 = zx.d(*(arg1 + 0x11c))
    result = (*(*r15 + 8))(r15)
    
    if (result.b == 0)
        void*** rcx_19 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_9 = &rcx_19[5]
        
        if (rax_9 u> *(arg2 + 0x38))
            sub_140b0e3d0(arg2 + 0x30, 0x30)
            rcx_19 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rax_9 = &rcx_19[5]
        
        *(arg2 + 0x30) = rax_9
        void**** rax_10 = *(arg2 + 8)
        *(arg2 + 0x14) += 1
        *rax_10 = rcx_19
        result = &rcx_19[1]
        *(arg2 + 8) = result
        *result = 0
        *rcx_19 = &data_142da77c8
        rcx_19[2] = r12
        rcx_19[3].d = rbp_3
        rcx_19[4] = r15

if (*(arg1 + 0x122) u> 0)
    uint32_t rbp_4 = zx.d(*(arg1 + 0x120))
    void*** rcx_25 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_11 = &rcx_25[5]
    
    if (rax_11 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x30)
        rcx_25 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_11 = &rcx_25[5]
    
    *(arg2 + 0x30) = rax_11
    void**** rax_12 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_12 = rcx_25
    *(arg2 + 8) = &rcx_25[1]
    rcx_25[1] = 0
    *rcx_25 = &data_142da77b8
    result = arg5
    rcx_25[4] = result
    rcx_25[2] = r12
    rcx_25[3].d = rbp_4

if (*(arg1 + 0x126) u> 0)
    uint32_t rsi_1 = zx.d(*(arg1 + 0x124))
    result = (*(*r15 + 8))(r15)
    
    if (result.b == 0)
        void*** rcx_32 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_15 = &rcx_32[5]
        
        if (rax_15 u> *(arg2 + 0x38))
            sub_140b0e3d0(arg2 + 0x30, 0x30)
            rcx_32 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rax_15 = &rcx_32[5]
        
        *(arg2 + 0x30) = rax_15
        void**** rax_16 = *(arg2 + 8)
        *(arg2 + 0x14) += 1
        *rax_16 = rcx_32
        result = &rcx_32[1]
        *(arg2 + 8) = result
        *result = 0
        *rcx_32 = &data_142da77c8
        rcx_32[2] = r12
        rcx_32[3].d = rsi_1
        rcx_32[4] = r15

return result
