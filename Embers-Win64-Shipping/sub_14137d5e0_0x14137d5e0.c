// 函数: sub_14137d5e0
// 地址: 0x14137d5e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbp_1

if (not(arg2.d f> 0f))
    rbp_1 = arg15

if (arg2.d f> 0f || not(arg3 <= 0f))
    rbp_1 = 0

float zmm5[0x4] = 0x3f800000
int64_t r15 = 0
float var_48 = arg5[0]
arg5 = arg9
float temp0[0x4] = _mm_shuffle_ps(arg5, arg5, 0xe1)
void* r11 = *arg14
int32_t var_44 = arg6.d
int32_t var_40 = arg2.d
temp0[0] = arg10.d
float temp0_1[0x4] = _mm_shuffle_ps(temp0, temp0, 0xc6)
float var_3c = arg3
temp0_1[0] = arg7.d
float temp0_2[0x4] = _mm_shuffle_ps(temp0_1, temp0_1, 0x27)
temp0_2[0] = arg8
float var_38[0x4] = _mm_shuffle_ps(temp0_2, temp0_2, 0x39)
arg5 = 0x3f800000
uint128_t zmm0 = _mm_cvtepi32_ps(zx.o(arg13))
arg2 = _mm_cvtepi32_ps(zx.o(arg12))
int32_t arg_58
arg5[0] = 1f f/ _mm_cvtepi32_ps(zx.o(arg_58)).d
zmm5[0] = 1f f/ _mm_cvtepi32_ps(zx.o(arg11)).d
float temp0_8[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xe1)
temp0_8[0] = 1f f/ arg2.d
float temp0_9[0x4] = _mm_shuffle_ps(temp0_8, temp0_8, 0xc6)
temp0_9[0] = arg5[0]
float temp0_10[0x4] = _mm_shuffle_ps(temp0_9, temp0_9, 0x27)
temp0_10[0] = 1f f/ zmm0.d
float var_28[0x4] = _mm_shuffle_ps(temp0_10, temp0_10, 0x39)

if (r11 != 0)
    int64_t rdx_1 = sx.q(*(r11 + 0x10c))
    int64_t* rdi_1 = *(arg14[1] + 0x10)
    int64_t rax_2 = rdi_1[3]
    
    if (*(rax_2 + (rdx_1 << 3)) == 0)
        arg4 = sub_1419ccf30(rdi_1, rdx_1.d)
        rax_2 = rdi_1[3]
        r11 = *arg14
    
    r15 = *(rax_2 + (rdx_1 << 3))

int64_t rsi_2 = sx.q(*(r11 + 0xe0))
int32_t r8 = 0

if (rsi_2 s> 0)
    int64_t rdx_2 = 0
    arg4 = *(r11 + 0xd8)
    
    while (true)
        void* rcx_2 = arg4
        
        if ((*(r11 + 0xd8) & 1) != 0)
            rcx_2 = (rcx_2 s>> 1) + r11 + 0xd8
        
        if (*(rcx_2 + (rdx_2 << 3)) == data_143ec4ae0)
            break
        
        r8 += 1
        rdx_2 += 1
        
        if (rdx_2 s>= rsi_2)
            goto label_14137d7a6

void* rdi_3

if (rsi_2 s<= 0 || r8 == 0xffffffff)
label_14137d7a6:
    TEB* gsbase
    
    if (data_143ce8564
            s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
        arg4 = _Init_thread_header(&data_143ce8564)
        
        if (data_143ce8564 == 0xffffffff)
            data_143ce8560 = 0xffff
            arg4 = _Init_thread_footer(&data_143ce8564)
    
    rdi_3 = &data_143ce8560
else
    void* rcx_25 = *(r11 + 0xe8)
    
    if ((rcx_25.b & 1) != 0)
        rcx_25 = (rcx_25 s>> 1) + r11 + 0xe8
    
    rdi_3 = rcx_25 + (sx.q(r8) << 1)

if (*rdi_3 != 0xffff)
    int64_t* rcx_5 = data_143f0f180
    (*(*rcx_5 + 0xf8))(rcx_5, &arg_58, &var_48, &data_143ec4af0, 0, 1)
    int64_t rsi_3 = arg_58.q
    uint32_t r14_1 = zx.d(*rdi_3)
    void*** rcx_8 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_7 = &rcx_8[5]
    
    if (rax_7 u> *(arg1 + 0x38))
        sub_140b0e3d0(arg1 + 0x30, 0x30)
        rcx_8 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
        rax_7 = &rcx_8[5]
    
    *(arg1 + 0x30) = rax_7
    void** rax_8 = *(arg1 + 8)
    *(arg1 + 0x14) += 1
    *rax_8 = rcx_8
    *(arg1 + 8) = &rcx_8[1]
    rcx_8[1] = 0
    *rcx_8 = &data_142f11618
    rcx_8[2] = r15
    rcx_8[3].d = r14_1
    rcx_8[4] = rsi_3
    arg4 = sub_1405d1550(&arg_58)

if (rbp_1 != 2)
    if (rbp_1 != 1)
        return sub_14199d540(arg1, arg16)
    
    return sub_14199d680(arg1, arg16)

void*** rcx_15 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_10 = &rcx_15[5]

if (rax_10 u> *(arg1 + 0x38))
    arg4 = sub_140b0e3d0(arg1 + 0x30, rbp_1 + 0x2e)
    rcx_15 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    rax_10 = &rcx_15[5]

*(arg1 + 0x30) = rax_10
int64_t* rax_11 = *(arg1 + 8)
*(arg1 + 0x14) += 1
*rax_11 = rcx_15
*(arg1 + 8) = &rcx_15[1]
rcx_15[1] = 0
*rcx_15 = &data_142d56618
rcx_15[2].d = 0
rcx_15[3] = 0
rcx_15[4].d = 0
int64_t rsi_4 = data_1439b6a90

if (rsi_4 == 0)
    sub_140af98a0("Unknown", 0xbc8, Tried to call DrawIndexedPrimitive with null IndexBuffer!", 
        arg4)
    sub_140afbb40()

void*** rcx_21 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_13 = &rcx_21[6]

if (rax_13 u> *(arg1 + 0x38))
    sub_140b0e3d0(arg1 + 0x30, 0x38)
    rcx_21 = (*(arg1 + 0x30) + 7) & 0xfffffffffffffff8
    rax_13 = &rcx_21[6]

*(arg1 + 0x30) = rax_13
int64_t* rax_14 = *(arg1 + 8)
*(arg1 + 0x14) += 1
*rax_14 = rcx_21
*(arg1 + 8) = &rcx_21[1]
rcx_21[1] = 0
*rcx_21 = &data_142f11598
*(rcx_21 + 0x2c) = arg16
rcx_21[2] = rsi_4
rcx_21[3] = 0
rcx_21[4] = 0x2b5
rcx_21[5].d = 0x500
return arg16
