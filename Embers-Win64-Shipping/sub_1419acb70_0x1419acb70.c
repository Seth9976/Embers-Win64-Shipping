// 函数: sub_1419acb70
// 地址: 0x1419acb70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm2[0x4] = *arg4
float zmm4[0x4] = arg4[1]
float zmm5[0x4] = arg4[2]
int64_t* rcx = data_143f0f180
int32_t* rax = arg5
int128_t var_a8 = arg4[3]
float temp0[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0x93)
int128_t zmm0 = rax[1]
int32_t zmm3 = rax[2]
temp0[0] = *rax
int64_t rax_1 = data_14395fa10
void* rax_3 = *arg3
float temp0_1[0x4] = _mm_shuffle_ps(zmm4, zmm4, 0x93)
temp0_1[0] = zmm0.d
float temp0_2[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0x93)
float temp0_3[0x4] = _mm_shuffle_ps(temp0, temp0, 0x39)
temp0_2[0] = zmm3
float temp0_4[0x4] = _mm_shuffle_ps(temp0_1, temp0_1, 0x39)
float temp0_5[0x4] = _mm_shuffle_ps(temp0_2, temp0_2, 0x39)
float var_98[0x4] = temp0_3
var_a8:0xc.d = 0x3f800000
zmm0.d = float.s(zx.q(*(rax_3 + 0x60)))
int128_t zmm6
zmm6.d = 1f f/ zmm0.d
int32_t var_54 = zmm6.d
(*(*rcx + 0xf8))(rcx, &arg5, &var_98, &data_143f120f0, 1, 1, temp0_3, temp0_4, temp0_5, var_a8, 
    var_98, temp0_4, temp0_5, var_a8, zx.d(arg6), rax_3, rax_1)
int32_t* rsi = arg5
int32_t* arg_8 = rsi

if (rsi != 0)
    rsi[2] += 1
    rsi = arg_8

sub_1405d1550(&arg5)
int64_t rbx = sx.q(*(arg1 + 0xe0))
int32_t r8_1 = 0
int64_t r15 = *(arg2 + 0x1a0)

if (rbx s> 0)
    int64_t rdx_1 = 0
    
    while (true)
        void* rcx_3 = *(arg1 + 0xd8)
        
        if ((*(arg1 + 0xd8) & 1) != 0)
            rcx_3 = (rcx_3 s>> 1) + arg1 + 0xd8
        
        if (*(rcx_3 + (rdx_1 << 3)) == data_143f120e0)
            break
        
        r8_1 += 1
        rdx_1 += 1
        
        if (rdx_1 s>= rbx)
            goto label_1419acd0e

int16_t* rdx_2

if (rbx s<= 0 || r8_1 == 0xffffffff)
label_1419acd0e:
    TEB* gsbase
    
    if (data_143ce8564
            s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
        _Init_thread_header(&data_143ce8564)
        
        if (data_143ce8564 == 0xffffffff)
            data_143ce8560 = 0xffff
            _Init_thread_footer(&data_143ce8564)
    
    rdx_2 = &data_143ce8560
else
    void* rcx_14 = *(arg1 + 0xe8)
    
    if ((rcx_14.b & 1) != 0)
        rcx_14 = (rcx_14 s>> 1) + arg1 + 0xe8
    
    rdx_2 = rcx_14 + (sx.q(r8_1) << 1)

int16_t rax_9 = *rdx_2

if (rax_9 != 0xffff)
    void*** rcx_8 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_10 = &rcx_8[5]
    
    if (rax_10 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x30)
        rcx_8 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_10 = &rcx_8[5]
    
    *(arg2 + 0x30) = rax_10
    void** rax_11 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_11 = rcx_8
    *(arg2 + 8) = &rcx_8[1]
    rcx_8[1] = 0
    *rcx_8 = &data_142f11618
    rcx_8[2] = r15
    rcx_8[3].d = zx.d(rax_9)
    rcx_8[4] = rsi

sub_1405d1550(&arg_8)
return sub_1405d1550(arg3)
