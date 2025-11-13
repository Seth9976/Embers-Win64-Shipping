// 函数: sub_1404088d0
// 地址: 0x1404088d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t __saved_rbp_1
int64_t __saved_rbp = __saved_rbp_1
int64_t __saved_r12_1
int64_t __saved_r12 = __saved_r12_1
int64_t __saved_r13_1
int64_t __saved_r13 = __saved_r13_1
int64_t __saved_r14_1
int64_t __saved_r14 = __saved_r14_1
int64_t __saved_r15_1
int64_t __saved_r15 = __saved_r15_1
int64_t __saved_rbx_1
int64_t __saved_rbx = __saved_rbx_1
int64_t __saved_rsi_1
int64_t __saved_rsi = __saved_rsi_1
int64_t __saved_rdi_1
int64_t __saved_rdi = __saved_rdi_1
uint128_t __saved_zmm6_1
uint128_t __saved_zmm6 = __saved_zmm6_1
uint128_t __saved_zmm7_1
uint128_t __saved_zmm7 = __saved_zmm7_1
int32_t var_138
int64_t rax_1 = __security_cookie ^ &var_138
var_138 = arg3
int32_t result_1 = 0
int32_t rsi

if (arg13 != 0)
    rsi = 1
else if (arg15 != 0)
    rsi = 0
else
    int32_t rcx_2 = (arg3 - arg2) * arg10
    
    if ((*arg14).d f<= _mm_cvtepi32_ps(zx.o(rcx_2 * 2)).d || arg12 s<= rcx_2)
        rsi = 0
    else
        rsi = 1

uint128_t zmm1
zmm1.d = float.s(zx.q(arg7))
uint128_t zmm0 = _mm_cvtepi32_ps(zx.o(arg16))
zmm1.d = zmm1.d f* *arg14
zmm1.d = zmm1.d f* zmm0.d
zmm1.d = zmm1.d f/ _mm_cvtepi32_ps(zx.o(arg10 << 9)).d
sub_140408780(arg5, arg6, arg2, arg4, *(arg1 + 8), arg10)
uint64_t rflags
int32_t temp0_4
temp0_4, rflags = __bsr_gprv_memv(arg9[4].d)
int32_t r13_2 = arg9[3].d - temp0_4 - 1

if (r13_2 + 3 u> arg7)
    rsi = 0
    arg15 = 0

__saved_zmm6_1 = 0x41800000

if (var_138 - arg2 s> 0xa)
    uint128_t __saved_zmm6_2
    __saved_zmm6_2.d = _mm_cvtepi32_ps(zx.o(arg12)).d f* 0.125f
    
    if (not(__saved_zmm6_2.d f> 16f))
        __saved_zmm6_1 = __saved_zmm6_2

if (arg17 != 0)
    __saved_zmm6_1 = 0x40400000

int64_t rax_13 = *arg9
int64_t rax_14 = arg9[1]
int64_t rax_15 = arg9[2]
int64_t rax_16 = arg9[3]
int64_t rax_17 = arg9[4]
int64_t rax_18 = arg9[5]
int64_t rax_19 = arg9[6]
int64_t r8_2 = sx.q(*(arg1 + 8) * arg10) << 2
int64_t rax_22 = r8_2 + 0xf

if (rax_22 u<= r8_2)
    rax_22 = 0xffffffffffffff0

int64_t rax_23 = rax_22 & 0xfffffffffffffff0
__chkstk(rax_23)
void var_1b8
void* rsp_1 = &var_1b8 - rax_23
int64_t rax_24 = r8_2 + 0xf

if (rax_24 u<= r8_2)
    rax_24 = 0xffffffffffffff0

int64_t rax_25 = rax_24 & 0xfffffffffffffff0
__chkstk(rax_25)
void* rsp_2 = rsp_1 - rax_25
memcpy(rsp_1 + 0x80, arg6, r8_2.d)
uint64_t result
float zmm7

if (arg15 != 0 || rsi != 0)
    uint64_t r8_3 = zx.q(var_138)
    *(rsp_2 + 0x70) = arg17
    *(rsp_2 + 0x68) = __saved_zmm6_1.d
    *(rsp_2 + 0x60) = 1
    *(rsp_2 + 0x58) = arg11
    *(rsp_2 + 0x50) = arg10
    *(rsp_2 + 0x48) = arg9
    *(rsp_2 + 0x40) = rsp_2 + 0x80
    *(rsp_2 + 0x38) = sx.q(arg11) * 0x54 + &data_14370072a
    *(rsp_2 + 0x30) = r13_2
    *(rsp_2 + 0x28) = arg7
    *(rsp_2 + 0x20) = rsp_1 + 0x80
    int32_t result_2
    result_2, __saved_zmm6_1, zmm7 = sub_140408e60(arg1, zx.q(arg2), r8_3, arg5)
    result_1 = result_2
    
    if (rsi == 0)
        goto label_140408b88
    
    memcpy(arg6, rsp_1 + 0x80, (*(arg1 + 8) * arg10) << 2)
    result = memcpy(arg8, rsp_2 + 0x80, (*(arg1 + 8) * arg10) << 2)
label_140408ded:
    
    if (rsi == 0)
        result = sx.q(arg11)
        float zmm0_1 = *(&data_1437006d8 + (result << 2))
        *arg14 = zmm0_1 * zmm0_1 f* *arg14 + zmm7
    else
        *arg14 = zmm7
else
label_140408b88:
    int32_t rax_32 = sub_140403430(arg9)
    int64_t rcx_10 = *arg9
    int64_t rdx_3 = arg9[4]
    int64_t rax_33 = arg9[1]
    int64_t rdx_4 = arg9[5]
    int64_t rax_34 = arg9[2]
    int64_t rdx_5 = arg9[6]
    int64_t rax_35 = arg9[3]
    uint64_t rax_36 = zx.q(rax_16:4.d)
    int64_t r9_1 = rcx_10 + rax_36
    uint64_t rdx_8 = zx.q((rax_35 u>> 0x20).d - rax_36.d)
    int64_t rcx_11 = rdx_8 + 0xf
    
    if (rcx_11 u<= zx.q(rdx_8.d))
        rcx_11 = 0xffffffffffffff0
    
    int64_t rcx_12 = rcx_11 & 0xfffffffffffffff0
    __chkstk(rcx_12)
    void* rsp_3 = rsp_2 - rcx_12
    memcpy(rsp_3 + 0x80, r9_1, rdx_8.d)
    int64_t rdx_10 = sx.q(arg11)
    uint64_t r8_5 = zx.q(var_138)
    *arg9 = rax_13
    arg9[1] = rax_14
    arg9[2] = rax_15
    arg9[3] = rax_16
    arg9[4] = rax_17
    arg9[5] = rax_18
    arg9[6] = rax_19
    *(rsp_3 + 0x70) = arg17
    *(rsp_3 + 0x68) = __saved_zmm6_1.d
    *(rsp_3 + 0x60) = 0
    *(rsp_3 + 0x58) = rdx_10.d
    *(rsp_3 + 0x50) = arg10
    *(rsp_3 + 0x48) = arg9
    *(rsp_3 + 0x40) = arg8
    *(rsp_3 + 0x38) = (sx.q(rsi) + (rdx_10 << 1)) * 0x2a + &data_143700700
    *(rsp_3 + 0x30) = r13_2
    *(rsp_3 + 0x28) = arg7
    *(rsp_3 + 0x20) = arg6
    result, zmm7 = sub_140408e60(arg1, zx.q(arg2), r8_5, arg5)
    int32_t rcx_19 = result.d
    
    if (arg15 == 0)
        goto label_140408ded
    
    result = zx.q(result_1)
    
    if (result.d s>= rcx_19)
        if (result.d != rcx_19)
            goto label_140408ded
        
        result = zx.q(sub_140403430(arg9) + int.d(zmm1.d))
        
        if (result.d s<= rax_32)
            goto label_140408ded
        
        goto label_140408d37
    
label_140408d37:
    *arg9 = rcx_10
    arg9[1] = rax_33
    arg9[2] = rax_34
    arg9[3] = rax_35
    arg9[4] = rdx_3
    arg9[5] = rdx_4
    arg9[6] = rdx_5
    memcpy(r9_1, rsp_3 + 0x80, rdx_8.d)
    memcpy(arg6, rsp_1 + 0x80, (*(arg1 + 8) * arg10) << 2)
    result = memcpy(arg8, rsp_2 + 0x80, (*(arg1 + 8) * arg10) << 2)
    *arg14 = zmm7
__security_check_cookie(rax_1 ^ &var_138)
return result
