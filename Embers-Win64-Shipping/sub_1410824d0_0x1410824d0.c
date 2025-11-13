// 函数: sub_1410824d0
// 地址: 0x1410824d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r13 = *arg3
int64_t r14 = *(arg2 + 0x1b0)
int64_t arg_8 = r14
int32_t rax_2 = *(r13 + 0x508c)
uint128_t zmm3 = _mm_cvtepi32_ps(zx.o(*(r13 + 0x15a4) - *(r13 + 0x159c)))
int32_t rax_5 = *(r13 + 0x15a0) - *(r13 + 0x1598)
zmm3.d = zmm3.d f/ _mm_cvtepi32_ps(zx.o(rax_2 * 2)).d
void* rax_8 = data_1439b70f0
uint128_t zmm0 = _mm_cvtepi32_ps(zx.o(*(r13 + 0x5088) * 2))
uint128_t zmm2
zmm2.d = _mm_cvtepi32_ps(zx.o(rax_5)).d f/ zmm0.d
zmm0 = zmm3
zmm3.d = zmm3.d f* 0.5f
zmm2.d = zmm2.d f* 0.5f
zmm0.d = zmm0.d f* -0.5f
int32_t var_48 = zmm2.d
int32_t var_40 = zmm2.d
int32_t var_44 = zmm0.d
int32_t var_3c = zmm3.d
sub_1410809a0(arg1, arg2, r14, *(r13 + 0x10))
uint32_t r15 = zx.d(*(arg1 + 0x228))
void*** rcx_2 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_9 = &rcx_2[5]

if (rax_9 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x30)
    rcx_2 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_9 = &rcx_2[5]

*(arg2 + 0x30) = rax_9
void**** rax_10 = *(arg2 + 8)
*(arg2 + 0x14) += 1
*rax_10 = rcx_2
*(arg2 + 8) = &rcx_2[1]
rcx_2[1] = 0
*rcx_2 = &data_142da77d8
rcx_2[4] = arg5
rcx_2[2] = r14
rcx_2[3].d = r15
int32_t r8_1 = *(r13 + 0x1548)
int64_t arg_10

if (*(arg1 + 0x216) != 0xffff)
    int64_t* rcx_6 = &arg_10
    
    if (r8_1 s< 3)
        sub_14137b650(rcx_6)
    else
        sub_14137b9a0(rcx_6, arg2, 0xf, r8_1)
    
    sub_14077caf0(arg2, &arg_8, arg1 + 0x216, arg_10)
    sub_1405d1550(&arg_10)

int32_t var_60 = 0
int64_t var_68 = data_14395fa10
sub_14137f470(arg1 + 0x11e, r14, arg3, arg2)
bool cond:0 = *(arg1 + 0x220) u<= 0
int64_t* r15_1 = data_1439b54b8
arg_10 = *(rax_8 + 0x10)

if (not(cond:0))
    uint32_t r12_1 = zx.d(*(arg1 + 0x21e))
    void*** rcx_13 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_15 = &rcx_13[5]
    
    if (rax_15 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x30)
        rcx_13 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_15 = &rcx_13[5]
    
    *(arg2 + 0x30) = rax_15
    void**** rax_16 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_16 = rcx_13
    *(arg2 + 8) = &rcx_13[1]
    rcx_13[1] = 0
    *rcx_13 = &data_142da77b8
    rcx_13[4] = arg_10
    rcx_13[2] = r14
    rcx_13[3].d = r12_1

if (*(arg1 + 0x224) u> 0)
    uint32_t r12_2 = zx.d(*(arg1 + 0x222))
    
    if ((*(*r15_1 + 8))(r15_1) == 0)
        void*** rcx_20 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_21 = &rcx_20[5]
        
        if (rax_21 u> *(arg2 + 0x38))
            sub_140b0e3d0(arg2 + 0x30, 0x30)
            rcx_20 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rax_21 = &rcx_20[5]
        
        *(arg2 + 0x30) = rax_21
        void**** rax_22 = *(arg2 + 8)
        *(arg2 + 0x14) += 1
        *rax_22 = rcx_20
        *(arg2 + 8) = &rcx_20[1]
        rcx_20[1] = 0
        *rcx_20 = &data_142da77c8
        rcx_20[2] = r14
        rcx_20[3].d = r12_2
        rcx_20[4] = r15_1

sub_14107f400(arg1 + 0x218, arg2, r13, r14, arg4, 0, 0)
return sub_14077c870(arg2, &arg_8, arg1 + 0x118, &var_48, 0)
