// 函数: sub_1419ac2b0
// 地址: 0x1419ac2b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdx = *arg4
uint128_t* rax = arg5
uint128_t zmm2 = *rax
float zmm4[0x4] = rax[1]
float zmm6[0x4] = rax[2]
float zmm7[0x4] = rax[3]
int32_t* rax_1 = arg6
_mm_shuffle_ps(zmm2, zmm2, 0x93)
float temp0_1[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0x93)
float temp0_2[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0x93)
zmm2.d = *rax_1
int32_t zmm3 = rax_1[2]
temp0_1[0] = rax_1[1].d
int64_t rax_2 = data_14395f4d0
temp0_2[0] = zmm3
int64_t rax_3 = data_14395fa10
zmm2 = _mm_shuffle_ps(zmm2, zmm2, 0x39)
uint128_t var_b8 = zmm2
uint32_t var_74 = zx.d(arg7)
void* rax_5 = *arg3
uint128_t var_f8 = zmm2
zmm2 = zx.o(arg4[1])
float temp0_4[0x4] = _mm_shuffle_ps(temp0_1, temp0_1, 0x39)
float temp0_5[0x4] = _mm_shuffle_ps(zmm7, zmm7, 0x93)
temp0_5[0] = 0x3f800000
float temp0_6[0x4] = _mm_shuffle_ps(temp0_2, temp0_2, 0x39)
float temp0_7[0x4] = _mm_shuffle_ps(temp0_5, temp0_5, 0x39)
int64_t rcx = zx.q(*(rax_5 + 0x60))
uint64_t rax_6 = zx.q(*(rax_5 + 0x64))
zmm2 = _mm_cvtepi32_ps(zmm2)
uint128_t zmm1 = _mm_cvtepi32_ps(zx.o(rdx))
zmm2.d = zmm2.d f/ float.s(rax_6)
int64_t* rcx_1 = data_143f0f180
int32_t var_6c = zmm2.d
zmm1.d = zmm1.d f/ float.s(rcx)
(*(*rcx_1 + 0xf8))(rcx_1, &arg5, &var_b8, &data_143f11140, 1, 1, var_f8, temp0_4, temp0_6, temp0_7, 
    var_b8, temp0_4, temp0_6, temp0_7, rdx, zmm1.d, rax_5, rax_2, rax_3)
uint128_t* rsi = arg5
arg6 = rsi

if (rsi != 0)
    *(rsi + 8) += 1
    rsi = arg6

sub_1405d1550(&arg5)
int64_t rbx = sx.q(*(arg1 + 0xe0))
int32_t r8_1 = 0
int64_t r15 = *(arg2 + 0x1a0)

if (rbx s> 0)
    int64_t rdx_2 = 0
    
    while (true)
        void* rcx_4 = *(arg1 + 0xd8)
        
        if ((*(arg1 + 0xd8) & 1) != 0)
            rcx_4 = (rcx_4 s>> 1) + arg1 + 0xd8
        
        if (*(rcx_4 + (rdx_2 << 3)) == data_143f11130)
            break
        
        r8_1 += 1
        rdx_2 += 1
        
        if (rdx_2 s>= rbx)
            goto label_1419ac48e

int16_t* rdx_3

if (rbx s<= 0 || r8_1 == 0xffffffff)
label_1419ac48e:
    TEB* gsbase
    
    if (data_143ce8564
            s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
        _Init_thread_header(&data_143ce8564)
        
        if (data_143ce8564 == 0xffffffff)
            data_143ce8560 = 0xffff
            _Init_thread_footer(&data_143ce8564)
    
    rdx_3 = &data_143ce8560
else
    void* rcx_15 = *(arg1 + 0xe8)
    
    if ((rcx_15.b & 1) != 0)
        rcx_15 = (rcx_15 s>> 1) + arg1 + 0xe8
    
    rdx_3 = rcx_15 + (sx.q(r8_1) << 1)

int16_t rax_11 = *rdx_3

if (rax_11 != 0xffff)
    void*** rcx_9 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_12 = &rcx_9[5]
    
    if (rax_12 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x30)
        rcx_9 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_12 = &rcx_9[5]
    
    *(arg2 + 0x30) = rax_12
    void** rax_13 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_13 = rcx_9
    *(arg2 + 8) = &rcx_9[1]
    rcx_9[1] = 0
    *rcx_9 = &data_142f11618
    rcx_9[2] = r15
    rcx_9[3].d = zx.d(rax_11)
    rcx_9[4] = rsi

sub_1405d1550(&arg6)
return sub_1405d1550(arg3)
