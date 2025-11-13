// 函数: sub_141a1e3e0
// 地址: 0x141a1e3e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* r14 = &data_143ce8560
int64_t rsi = sx.q(*(arg4 + 0xe0))
int32_t rbx = 0
int32_t r10 = 0
void* rbp = *(arg5 + 0x20)
void* r15 = *(rbp + 0x10)

if (rsi s> 0)
    int64_t rdx = 0
    
    while (true)
        void* rcx_1 = *(arg4 + 0xd8)
        
        if ((*(arg4 + 0xd8) & 1) != 0)
            rcx_1 = (rcx_1 s>> 1) + arg4 + 0xd8
        
        if (*(rcx_1 + (rdx << 3)) == data_143f281b0)
            break
        
        r10 += 1
        rdx += 1
        
        if (rdx s>= rsi)
            goto label_141a1e482

int16_t* rdx_1
TEB* gsbase

if (rsi s<= 0 || r10 == 0xffffffff)
label_141a1e482:
    
    if (data_143ce8564
            s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
        _Init_thread_header(&data_143ce8564)
        
        if (data_143ce8564 == 0xffffffff)
            data_143ce8560 = 0xffff
            _Init_thread_footer(&data_143ce8564)
    
    rdx_1 = &data_143ce8560
else
    void* rcx_7 = *(arg4 + 0xe8)
    
    if ((rcx_7.b & 1) != 0)
        rcx_7 = (rcx_7 s>> 1) + arg4 + 0xe8
    
    rdx_1 = rcx_7 + (sx.q(r10) << 1)

int16_t rax_4 = *rdx_1

if (rax_4 != 0xffff)
    sub_140891ab0(arg6, *(*(rbp + 8) + 0x18), zx.d(rax_4))

if (*(arg1 + 8) u> 0)
    uint128_t zmm1 = *(arg3 + 0x610)
    float zmm2[0x4] = *(arg3 + 0x614)
    float zmm4[0x4] = *(arg3 + 0x60c)
    int32_t rax_6 = *(arg1 + 4)
    float temp0_1[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0xe1)
    temp0_1[0] = zmm1.d
    int32_t arg_8 = rax_6
    int16_t rax_7 = *(arg1 + 8)
    float temp0_2[0x4] = _mm_shuffle_ps(temp0_1, temp0_1, 0xc6)
    temp0_2[0] = zmm2[0]
    int16_t arg_c = rax_7
    float temp0_3[0x4] = _mm_shuffle_ps(temp0_2, temp0_2, 0x27)
    temp0_3[0] = 0x3f800000
    float temp0_4[0x4] = _mm_shuffle_ps(temp0_3, temp0_3, 0x39)
    float temp0_6[0x4] = __mulps_xmmps_memps(_mm_shuffle_ps(temp0_4, temp0_4, 0xff), *(r15 + 0x690))
    zmm1 = __mulps_xmmps_memps(_mm_shuffle_ps(temp0_4, temp0_4, 0), *(r15 + 0x660))
    float temp0_10[0x4] =
        __mulps_xmmps_memps(_mm_shuffle_ps(temp0_4, temp0_4, 0x55), *(r15 + 0x670))
    float temp0_12[0x4] =
        __mulps_xmmps_memps(_mm_shuffle_ps(temp0_4, temp0_4, 0xaa), *(r15 + 0x680))
    zmm1 = _mm_add_ps(zmm1, temp0_10)
    float temp0_14[0x4] = _mm_add_ps(temp0_12, temp0_6)
    float temp0_15[0x4] = _mm_cvtepi32_ps(zx.o(*(r15 + 0x4b8)))
    float temp0_16[0x4] = _mm_add_ps(temp0_14, zmm1)
    zmm1 = _mm_cvtepi32_ps(zx.o(*(r15 + 0x4b4)))
    float temp0_18[0x4] = _mm_shuffle_ps(temp0_16, temp0_16, 0x55)
    zmm1.d = zmm1.d f+ temp0_16[0]
    temp0_15[0] = temp0_15[0] + temp0_18[0]
    arg5.d = zmm1.d
    arg5:4.d = temp0_15[0]
    sub_141211af0(arg6, &arg_8, &arg5)

int16_t result

if (*(r15 + 0x1a2) == 0)
    int64_t r11_3 = sx.q(*(arg4 + 0xe0))
    
    if (r11_3 s> 0)
        int64_t rdx_11 = 0
        
        while (true)
            void* rcx_14 = *(arg4 + 0xd8)
            
            if ((*(arg4 + 0xd8) & 1) != 0)
                rcx_14 = (rcx_14 s>> 1) + arg4 + 0xd8
            
            if (*(rcx_14 + (rdx_11 << 3)) == data_143f283b0)
                break
            
            rbx += 1
            rdx_11 += 1
            
            if (rdx_11 s>= r11_3)
                goto label_141a1e72f
    
    if (r11_3 s<= 0 || rbx == 0xffffffff)
    label_141a1e72f:
        
        if (data_143ce8564
                s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
            _Init_thread_header(&data_143ce8564)
            
            if (data_143ce8564 == 0xffffffff)
                data_143ce8560 = 0xffff
                _Init_thread_footer(&data_143ce8564)
    else
        void* rcx_18 = *(arg4 + 0xe8)
        
        if ((rcx_18.b & 1) != 0)
            rcx_18 = (rcx_18 s>> 1) + arg4 + 0xe8
        
        r14 = rcx_18 + (sx.q(rbx) << 1)
    
    result = *r14
    
    if (result != 0xffff)
        return sub_140891ab0(arg6, data_1439cc020, zx.d(result))
else
    sub_141a0a410(&data_1439cc030, &arg5, r15 + 0x160)
    int64_t rax_8 = sx.q(arg5.d)
    void* const rsi_1
    
    if (rax_8.d == 0xffffffff)
        rsi_1 = nullptr
    else
        rsi_1 = data_1439cc030 + rax_8 * 0x28
    
    int64_t r11_2 = sx.q(*(arg4 + 0xe0))
    
    if (r11_2 s> 0)
        int64_t rdx_6 = 0
        
        while (true)
            void* rcx_10 = *(arg4 + 0xd8)
            
            if ((*(arg4 + 0xd8) & 1) != 0)
                rcx_10 = (rcx_10 s>> 1) + arg4 + 0xd8
            
            if (*(rcx_10 + (rdx_6 << 3)) == data_143f283b0)
                break
            
            rbx += 1
            rdx_6 += 1
            
            if (rdx_6 s>= r11_2)
                goto label_141a1e67d
    
    if (r11_2 s<= 0 || rbx == 0xffffffff)
    label_141a1e67d:
        
        if (data_143ce8564
                s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
            _Init_thread_header(&data_143ce8564)
            
            if (data_143ce8564 == 0xffffffff)
                data_143ce8560 = 0xffff
                _Init_thread_footer(&data_143ce8564)
    else
        void* rcx_11 = *(arg4 + 0xe8)
        
        if ((rcx_11.b & 1) != 0)
            rcx_11 = (rcx_11 s>> 1) + arg4 + 0xe8
        
        r14 = rcx_11 + (sx.q(rbx) << 1)
    
    result = *r14
    
    if (result != 0xffff)
        return sub_140891ab0(arg6, *(*(rsi_1 + 0x18) + 0x118), zx.d(result))

return result
