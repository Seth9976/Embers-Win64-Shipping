// 函数: sub_1410e8790
// 地址: 0x1410e8790
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r10 = data_143ec4fdc
int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(r10.d)
int32_t temp2
int32_t temp3
temp2:temp3 = sx.q((r10 u>> 0x20).d)
uint128_t zmm0
zmm0.d = 1f f/ _mm_cvtepi32_ps(zx.o((temp1 - temp0) s>> 1)).d
int32_t arg_8 = zmm0.d
float arg_c = 1f f/ _mm_cvtepi32_ps(zx.o((temp3 - temp2) s>> 1)).d
sub_14077c4b0(arg2, arg3, arg1, &arg_8, 0)
float arg_18[0x4]
sub_14077c4b0(arg2, arg3, &arg1[3], sub_141124850(&arg_18, *(*(arg4 + 0x15a8) + 0x4b4)), 0)
sub_14077c4b0(arg2, arg3, &arg1[6], *(*(arg4 + 0x15a8) + 0xd48) + 0x10, 0)
void** const result = arg5
int64_t* r14 = data_1439b54b8
int64_t r15 = *arg3
int64_t r12 = result[1]

if (arg1[0xa] u> 0)
    uint32_t rdi_1 = zx.d(arg1[9])
    void*** rcx_6 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_11 = &rcx_6[5]
    
    if (rax_11 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x30)
        rcx_6 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_11 = &rcx_6[5]
    
    *(arg2 + 0x30) = rax_11
    void**** rax_12 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_12 = rcx_6
    *(arg2 + 8) = &rcx_6[1]
    rcx_6[1] = 0
    result = &data_142da77b8
    *rcx_6 = &data_142da77b8
    rcx_6[2] = r15
    rcx_6[3].d = rdi_1
    rcx_6[4] = r12

if (arg1[0xc] u> 0)
    uint32_t rdi_2 = zx.d(arg1[0xb])
    result = (*(*r14 + 8))(r14)
    
    if (result.b == 0)
        void*** rcx_13 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_15 = &rcx_13[5]
        
        if (rax_15 u> *(arg2 + 0x38))
            sub_140b0e3d0(arg2 + 0x30, 0x30)
            rcx_13 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rax_15 = &rcx_13[5]
        
        *(arg2 + 0x30) = rax_15
        void** rax_16 = *(arg2 + 8)
        *(arg2 + 0x14) += 1
        *rax_16 = rcx_13
        *(arg2 + 8) = &rcx_13[1]
        rcx_13[1] = 0
        result = &data_142da77c8
        *rcx_13 = &data_142da77c8
        rcx_13[2] = r15
        rcx_13[3].d = rdi_2
        rcx_13[4] = r14

return result
