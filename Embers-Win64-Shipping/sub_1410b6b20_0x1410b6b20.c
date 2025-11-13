// 函数: sub_1410b6b20
// 地址: 0x1410b6b20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r13 = *arg3
int64_t r15 = *(arg2 + 0x1a0)
void* r12 = data_1439b70f0
int32_t rax_1 = *(r13 + 0x15a4) - *(r13 + 0x159c)
int64_t arg_8 = r15
int32_t rax_2 = *(r13 + 0x508c)
uint128_t zmm3 = _mm_cvtepi32_ps(zx.o(rax_1))
int32_t rax_5 = *(r13 + 0x15a0) - *(r13 + 0x1598)
zmm3.d = zmm3.d f/ _mm_cvtepi32_ps(zx.o(rax_2 * 2)).d
uint128_t zmm2
zmm2.d = _mm_cvtepi32_ps(zx.o(rax_5)).d f/ _mm_cvtepi32_ps(zx.o(*(r13 + 0x5088) * 2)).d
uint128_t zmm0 = zmm3
zmm3.d = zmm3.d f* 0.5f
zmm2.d = zmm2.d f* 0.5f
zmm0.d = zmm0.d f* -0.5f
int32_t var_48 = zmm2.d
int32_t var_40 = zmm2.d
int32_t var_44 = zmm0.d
int32_t var_3c = zmm3.d
sub_141080ac0(arg1, arg2, r15, *(r13 + 0x10))
j_sub_14137eb70(arg1 + 0x11e, arg2, r15, arg3, data_14395fa10, 0, nullptr)
int32_t r8_2 = *(r13 + 0x1548)

if (*(arg1 + 0x216) != 0xffff)
    int64_t arg_10
    int64_t* rcx_1 = &arg_10
    
    if (r8_2 s< 3)
        sub_14137b7f0(rcx_1, arg2)
    else
        sub_14137baa0(rcx_1, arg2, 0xf, r8_2)
    
    sub_141083500(arg2, &arg_8, arg1 + 0x216, arg_10)
    sub_1405d1550(&arg_10)

int64_t r12_1 = *(r12 + 0x10)
int64_t* r14 = data_1439b54b8

if (*(arg1 + 0x220) u> 0)
    uint32_t r13_1 = zx.d(*(arg1 + 0x21e))
    void*** rcx_6 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_9 = &rcx_6[5]
    
    if (rax_9 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x30)
        rcx_6 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_9 = &rcx_6[5]
    
    *(arg2 + 0x30) = rax_9
    void**** rax_10 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_10 = rcx_6
    *(arg2 + 8) = &rcx_6[1]
    rcx_6[1] = 0
    rcx_6[3].d = r13_1
    *rcx_6 = &data_142d5a070
    rcx_6[2] = r15
    rcx_6[4] = r12_1

if (*(arg1 + 0x224) u> 0)
    uint32_t r12_2 = zx.d(*(arg1 + 0x222))
    
    if ((*(*r14 + 8))(r14) == 0)
        void*** rcx_13 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_14 = &rcx_13[5]
        
        if (rax_14 u> *(arg2 + 0x38))
            sub_140b0e3d0(arg2 + 0x30, 0x30)
            rcx_13 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rax_14 = &rcx_13[5]
        
        *(arg2 + 0x30) = rax_14
        void**** rax_15 = *(arg2 + 8)
        *(arg2 + 0x14) += 1
        *rax_15 = rcx_13
        *(arg2 + 8) = &rcx_13[1]
        rcx_13[1] = 0
        *rcx_13 = &data_142d5a080
        rcx_13[2] = r15
        rcx_13[3].d = r12_2
        rcx_13[4] = r14

sub_14107fbe0(arg1 + 0x218, arg2, r13, r15, arg4, 0)
return sub_1405d0e10(arg2, &arg_8, arg1 + 0x118, &var_48, 0)
