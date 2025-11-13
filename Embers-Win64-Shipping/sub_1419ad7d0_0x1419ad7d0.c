// 函数: sub_1419ad7d0
// 地址: 0x1419ad7d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdx = *arg3
float __saved_zmm6[0x4] = arg5
float __saved_zmm7[0x4] = arg6
int128_t* rax = arg9
float zmm2[0x4] = *rax
float zmm4[0x4] = rax[1]
arg5 = rax[2]
arg6 = rax[3]
int32_t* rax_1 = arg10
float temp0[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0x93)
float temp0_1[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0x93)
float temp0_2[0x4] = _mm_shuffle_ps(arg5, arg5, 0x93)
uint128_t zmm1 = rax_1[1]
temp0[0] = *rax_1
int32_t zmm3 = rax_1[2]
temp0_1[0] = zmm1.d
zmm1 = zx.o(*arg8)
temp0_2[0] = zmm3
int64_t rax_3 = *arg4
float temp0_3[0x4] = _mm_shuffle_ps(temp0, temp0, 0x39)
float var_c8[0x4] = temp0_3
int64_t rax_5 = *arg7
zmm2 = zx.o(arg8[1])
int64_t* rcx_1 = data_143f0f180
int64_t rax_6 = data_14395f4d0
float temp0_4[0x4] = _mm_shuffle_ps(temp0_1, temp0_1, 0x39)
float temp0_5[0x4] = _mm_shuffle_ps(arg6, arg6, 0x93)
temp0_5[0] = 0x3f800000
float temp0_6[0x4] = _mm_shuffle_ps(temp0_2, temp0_2, 0x39)
float temp0_7[0x4] = _mm_shuffle_ps(temp0_5, temp0_5, 0x39)
uint64_t rax_7 = zx.q(*(rdx + 0x64))
float temp0_8[0x4] = _mm_cvtepi32_ps(zmm2)
uint64_t rax_8 = zx.q(*(rdx + 0x60))
zmm1 = _mm_cvtepi32_ps(zmm1)
temp0_8[0] = temp0_8[0] f/ float.s(rax_7)
float var_7c = temp0_8[0]
zmm1.d = zmm1.d f/ float.s(rax_8)
(*(*rcx_1 + 0xf8))(rcx_1, &arg9, &var_c8, &data_143f11a70, 1, 1, temp0_3, temp0_4, temp0_6, 
    temp0_7, var_c8, temp0_4, temp0_6, temp0_7, zx.d(arg11), zmm1.d, rdx, rax_3, rax_5, rax_6, 
    rax_6, rax_6, __saved_zmm7, __saved_zmm6)
int128_t* rsi = arg9
arg10 = rsi

if (rsi != 0)
    *(rsi + 8) += 1
    rsi = arg10

sub_1405d1550(&arg9)
int64_t rbx = sx.q(*(arg1 + 0xe0))
int32_t r8_1 = 0
int64_t r15 = *(arg2 + 0x1a0)

if (rbx s> 0)
    int64_t rdx_2 = 0
    
    while (true)
        void* rcx_4 = *(arg1 + 0xd8)
        
        if ((*(arg1 + 0xd8) & 1) != 0)
            rcx_4 = (rcx_4 s>> 1) + arg1 + 0xd8
        
        if (*(rcx_4 + (rdx_2 << 3)) == data_143f11a60)
            break
        
        r8_1 += 1
        rdx_2 += 1
        
        if (rdx_2 s>= rbx)
            goto label_1419ad9be

void* rdx_3

if (rbx s<= 0 || r8_1 == 0xffffffff)
label_1419ad9be:
    TEB* gsbase
    
    if (data_143ce8564
            s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
        _Init_thread_header(&data_143ce8564)
        
        if (data_143ce8564 == 0xffffffff)
            data_143ce8560 = 0xffff
            _Init_thread_footer(&data_143ce8564)
    
    rdx_3 = &data_143ce8560
else
    void* rcx_17 = *(arg1 + 0xe8)
    
    if ((rcx_17.b & 1) != 0)
        rcx_17 = (rcx_17 s>> 1) + arg1 + 0xe8
    
    rdx_3 = rcx_17 + (sx.q(r8_1) << 1)

int16_t rax_13 = *rdx_3

if (rax_13 != 0xffff)
    void*** rcx_9 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_14 = &rcx_9[5]
    
    if (rax_14 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x30)
        rcx_9 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_14 = &rcx_9[5]
    
    *(arg2 + 0x30) = rax_14
    void** rax_15 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_15 = rcx_9
    *(arg2 + 8) = &rcx_9[1]
    rcx_9[1] = 0
    *rcx_9 = &data_142f11618
    rcx_9[2] = r15
    rcx_9[3].d = zx.d(rax_13)
    rcx_9[4] = rsi

sub_1405d1550(&arg10)
sub_1405d1550(arg3)
sub_1405d1550(arg4)
return sub_1405d1550(arg7)
