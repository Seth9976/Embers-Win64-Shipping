// 函数: sub_14113b950
// 地址: 0x14113b950
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_18 = arg3
int64_t* arg_28
void* rax_1 = *arg_28

if (rax_1 == 0)
    rax_1 = data_143f10dc8

int64_t r15 = *(rax_1 + 0x10)
int64_t* r14 = data_14395f4d0

if (arg1[1] u> 0)
    uint32_t r12_1 = zx.d(*arg1)
    void*** rcx_2 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_3 = &rcx_2[5]
    
    if (rax_3 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x30)
        rcx_2 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_3 = &rcx_2[5]
    
    *(arg2 + 0x30) = rax_3
    int64_t* rax_4 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_4 = rcx_2
    *(arg2 + 8) = &rcx_2[1]
    rcx_2[1] = 0
    rcx_2[3].d = r12_1
    *rcx_2 = &data_142d5a070
    rcx_2[2] = arg3
    rcx_2[4] = r15

if (arg1[3] u> 0)
    uint32_t r15_1 = zx.d(arg1[2])
    
    if ((*(*r14 + 8))(r14) == 0)
        void*** rcx_9 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_8 = &rcx_9[5]
        
        if (rax_8 u> *(arg2 + 0x38))
            sub_140b0e3d0(arg2 + 0x30, 0x30)
            rcx_9 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rax_8 = &rcx_9[5]
        
        *(arg2 + 0x30) = rax_8
        void**** rax_9 = *(arg2 + 8)
        *(arg2 + 0x14) += 1
        *rax_9 = rcx_9
        *(arg2 + 8) = &rcx_9[1]
        rcx_9[1] = 0
        *rcx_9 = &data_142d5a080
        rcx_9[2] = arg3
        rcx_9[3].d = r15_1
        rcx_9[4] = r14

int32_t arg_20
sub_1410f8060(&arg_20)
int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(*(arg4 + 0x15a0) - *(arg4 + 0x1598))
uint128_t zmm0 = _mm_cvtepi32_ps(zx.o(arg_20))
int32_t temp2
int32_t temp3
temp2:temp3 = sx.q(*(arg4 + 0x15a4) - *(arg4 + 0x159c))
uint128_t zmm1
zmm1.d = _mm_cvtepi32_ps(zx.o((temp1 - temp0) s>> 1)).d f- 0.50999999f
zmm1.d = zmm1.d f/ zmm0.d
int32_t var_48 = zmm1.d
zmm1.d = _mm_cvtepi32_ps(zx.o((temp3 - temp2) s>> 1)).d f- 0.50999999f
zmm1.d = zmm1.d f/ _mm_cvtepi32_ps(zx.o(arg5)).d
int32_t var_44 = zmm1.d
sub_1405d0cd0(arg2, &arg_18, &arg1[4], &var_48, 0)
arg_28.d = __minss_xmmss_memss(data_1439b55ac, 0x477de800)
sub_1405eb490(arg2, &arg_18, &arg1[0xa], &arg_28, 0)
float arg_8 = 1f / (__minss_xmmss_memss(data_1439b55ac, 0x477de800) * (1f f- *"333?"))
return sub_1405eb490(arg2, &arg_18, &arg1[7], &arg_8, 0)
