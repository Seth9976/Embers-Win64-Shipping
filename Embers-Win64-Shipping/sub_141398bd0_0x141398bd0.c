// 函数: sub_141398bd0
// 地址: 0x141398bd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm5[0x4] = 0x3f800000
int64_t r15 = 0
float var_48 = arg4[0]
arg4 = arg8
float temp0[0x4] = _mm_shuffle_ps(arg4, arg4, 0xe1)
void* r10 = *arg14
int32_t var_44 = arg5.d
int32_t var_40 = arg2.d
temp0[0] = arg9.d
float temp0_1[0x4] = _mm_shuffle_ps(temp0, temp0, 0xc6)
float zmm2
float var_3c = zmm2
temp0_1[0] = arg6.d
float temp0_2[0x4] = _mm_shuffle_ps(temp0_1, temp0_1, 0x27)
temp0_2[0] = arg7
float var_38[0x4] = _mm_shuffle_ps(temp0_2, temp0_2, 0x39)
arg4 = 0x3f800000
uint128_t zmm0 = _mm_cvtepi32_ps(zx.o(arg12))
arg2 = _mm_cvtepi32_ps(zx.o(arg11))
int32_t arg_58
arg4[0] = 1f f/ _mm_cvtepi32_ps(zx.o(arg_58)).d
zmm5[0] = 1f f/ _mm_cvtepi32_ps(zx.o(arg10)).d
float temp0_8[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xe1)
temp0_8[0] = 1f f/ arg2.d
float temp0_9[0x4] = _mm_shuffle_ps(temp0_8, temp0_8, 0xc6)
temp0_9[0] = arg4[0]
float temp0_10[0x4] = _mm_shuffle_ps(temp0_9, temp0_9, 0x27)
temp0_10[0] = 1f f/ zmm0.d
float var_28[0x4] = _mm_shuffle_ps(temp0_10, temp0_10, 0x39)

if (r10 != 0)
    int64_t rdx_1 = sx.q(*(r10 + 0x10c))
    int64_t* rbx_1 = *(arg14[1] + 0x10)
    int64_t rax_2 = rbx_1[3]
    
    if (*(rax_2 + (rdx_1 << 3)) == 0)
        sub_1419ccf30(rbx_1, rdx_1.d)
        rax_2 = rbx_1[3]
        r10 = *arg14
    
    r15 = *(rax_2 + (rdx_1 << 3))

int64_t rdi_2 = sx.q(*(r10 + 0xe0))
int32_t r8 = 0

if (rdi_2 s> 0)
    int64_t rdx_2 = 0
    
    while (true)
        void* rcx_2 = *(r10 + 0xd8)
        
        if ((*(r10 + 0xd8) & 1) != 0)
            rcx_2 = (rcx_2 s>> 1) + r10 + 0xd8
        
        if (*(rcx_2 + (rdx_2 << 3)) == data_143ec4ae0)
            break
        
        r8 += 1
        rdx_2 += 1
        
        if (rdx_2 s>= rdi_2)
            goto label_141398d6e

void* rbx_3

if (rdi_2 s<= 0 || r8 == 0xffffffff)
label_141398d6e:
    TEB* gsbase
    
    if (data_143ce8564
            s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
        _Init_thread_header(&data_143ce8564)
        
        if (data_143ce8564 == 0xffffffff)
            data_143ce8560 = 0xffff
            _Init_thread_footer(&data_143ce8564)
    
    rbx_3 = &data_143ce8560
else
    void* rcx_16 = *(r10 + 0xe8)
    
    if ((rcx_16.b & 1) != 0)
        rcx_16 = (rcx_16 s>> 1) + r10 + 0xe8
    
    rbx_3 = rcx_16 + (sx.q(r8) << 1)

int32_t var_68
int32_t var_60

if (*rbx_3 != 0xffff)
    int64_t* rcx_5 = data_143f0f180
    var_60 = 1
    var_68 = 0
    (*(*rcx_5 + 0xf8))(rcx_5, &arg_58, &var_48, &data_143ec4af0, 0, 1)
    int64_t rdi_3 = arg_58.q
    uint32_t rbp_1 = zx.d(*rbx_3)
    void*** rcx_8 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_7 = &rcx_8[5]
    
    if (rax_7 u> *(arg1 + 0x38))
        sub_140b0e3d0(arg1 + 0x30, 0x30)
        rcx_8 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
        rax_7 = &rcx_8[5]
    
    *(arg1 + 0x30) = rax_7
    void**** rax_8 = *(arg1 + 8)
    *(arg1 + 0x14) += 1
    *rax_8 = rcx_8
    *(arg1 + 8) = &rcx_8[1]
    rcx_8[1] = 0
    *rcx_8 = &data_142f11618
    rcx_8[2] = r15
    rcx_8[3].d = rbp_1
    rcx_8[4] = rdi_3
    sub_1405d1550(&arg_58)

int64_t* rcx_13 = *(data_143f5b298 + 0xb08)
int64_t result = (*(*rcx_13 + 0x100))(rcx_13)

if (result == 0)
    return result

int64_t* rcx_14 = *(data_143f5b298 + 0xb08)
int64_t* rax_14 = (*(*rcx_14 + 0x100))(rcx_14)
int64_t r9_2 = *rax_14
return (*(r9_2 + 0x128))(rax_14, arg1, zx.q(arg13), r9_2, var_68, var_60)
