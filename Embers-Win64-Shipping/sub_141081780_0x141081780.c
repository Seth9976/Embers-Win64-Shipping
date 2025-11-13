// 函数: sub_141081780
// 地址: 0x141081780
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbp = *(arg2 + 0x1b0)
int64_t arg_8 = rbp
sub_1410809a0(arg1, arg2, rbp, *(*arg3 + 0x10))
int32_t r8_1 = *(*arg3 + 0x1548)

if (*(arg1 + 0x118) != 0xffff)
    int64_t arg_10
    int64_t* rcx = &arg_10
    
    if (r8_1 s< 3)
        sub_14137b650(rcx)
    else
        sub_14137b9a0(rcx, arg2, 0xf, r8_1)
    
    sub_14077caf0(arg2, &arg_8, arg1 + 0x118, arg_10)
    sub_1405d1550(&arg_10)

int32_t var_58
sub_14107f400(arg1 + 0x212, arg2, *arg3, rbp, arg4.d, 1, var_58)
int64_t var_58_1 = 0
int32_t var_60 = 0
int64_t var_68_1 = data_14395fa10
sub_14137f470(arg1 + 0x11a, rbp, arg3, arg2)
sub_14107f900(arg1 + 0x22e, arg2, *arg3, arg4)
uint32_t r14 = zx.d(*(arg1 + 0x218))
void*** rcx_8 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_2 = &rcx_8[5]

if (rax_2 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x30)
    rcx_8 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_2 = &rcx_8[5]

*(arg2 + 0x30) = rax_2
*(arg2 + 0x14) += 1
**(arg2 + 8) = rcx_8
*(arg2 + 8) = &rcx_8[1]
rcx_8[1] = 0
rcx_8[4] = arg7
*rcx_8 = &data_142da77d8
rcx_8[2] = rbp
rcx_8[3].d = r14
uint32_t r14_1 = zx.d(*(arg1 + 0x21c))
void*** rcx_14 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_6 = &rcx_14[5]

if (rax_6 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x30)
    rcx_14 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_6 = &rcx_14[5]

*(arg2 + 0x30) = rax_6
*(arg2 + 0x14) += 1
void**** rax_7 = *(arg2 + 8)
uint128_t zmm2 = _mm_cvtepi32_ps(zx.o(arg6))
*rax_7 = rcx_14
*(arg2 + 8) = &rcx_14[1]
rcx_14[1] = 0
rcx_14[4] = arg8
*rcx_14 = &data_142da77d8
rcx_14[2] = rbp
rcx_14[3].d = r14_1
void* rcx_18 = *arg3
uint128_t zmm1 = _mm_cvtepi32_ps(zx.o(arg5))
int32_t rax_12 = *(rcx_18 + 0x5088)
int64_t var_40 = 0
zmm2.d = zmm2.d f/ _mm_cvtepi32_ps(zx.o(*(rcx_18 + 0x508c) * 2)).d
int32_t var_44 = zmm2.d
zmm1.d = zmm1.d f/ _mm_cvtepi32_ps(zx.o(rax_12 * 2)).d
int32_t var_48 = zmm1.d
sub_14077c870(arg2, &arg_8, arg1 + 0x220, &var_48, 0)
void** const result = data_1439b70f8
int64_t* r14_2 = data_1439b54b8
int64_t r12 = result[2]

if (*(arg1 + 0x228) u> 0)
    uint32_t r15_1 = zx.d(*(arg1 + 0x226))
    void*** rcx_22 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_14 = &rcx_22[5]
    
    if (rax_14 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x30)
        rcx_22 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_14 = &rcx_22[5]
    
    *(arg2 + 0x30) = rax_14
    void**** rax_15 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_15 = rcx_22
    *(arg2 + 8) = &rcx_22[1]
    rcx_22[1] = 0
    result = &data_142da77b8
    *rcx_22 = &data_142da77b8
    rcx_22[2] = rbp
    rcx_22[3].d = r15_1
    rcx_22[4] = r12

if (*(arg1 + 0x22c) u> 0)
    uint32_t rsi_1 = zx.d(*(arg1 + 0x22a))
    result = (*(*r14_2 + 8))(r14_2)
    
    if (result.b == 0)
        void*** rcx_29 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_18 = &rcx_29[5]
        
        if (rax_18 u> *(arg2 + 0x38))
            sub_140b0e3d0(arg2 + 0x30, 0x30)
            rcx_29 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rax_18 = &rcx_29[5]
        
        *(arg2 + 0x30) = rax_18
        void**** rax_19 = *(arg2 + 8)
        *(arg2 + 0x14) += 1
        *rax_19 = rcx_29
        *(arg2 + 8) = &rcx_29[1]
        rcx_29[1] = 0
        result = &data_142da77c8
        *rcx_29 = &data_142da77c8
        rcx_29[2] = rbp
        rcx_29[3].d = rsi_1
        rcx_29[4] = r14_2

return result
