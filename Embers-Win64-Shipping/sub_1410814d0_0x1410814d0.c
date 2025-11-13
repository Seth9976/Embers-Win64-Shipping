// 函数: sub_1410814d0
// 地址: 0x1410814d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbp = *(arg2 + 0x1b0)
int64_t arg_8 = rbp
sub_1410809a0(arg1, arg2, rbp, *(*arg3 + 0x10))
int32_t var_50 = 0
int64_t var_58 = data_14395f4d0
sub_14137f470(arg1 + 0x118, rbp, arg3, arg2)
sub_14107f400(arg1 + 0x21c, arg2, *arg3, rbp, arg4, 0, 0)
uint32_t r15 = zx.d(*(arg1 + 0x212))
void*** rcx_4 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_1 = &rcx_4[5]

if (rax_1 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x30)
    rcx_4 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_1 = &rcx_4[5]

*(arg2 + 0x30) = rax_1
void**** rax_2 = *(arg2 + 8)
*(arg2 + 0x14) += 1
*rax_2 = rcx_4
*(arg2 + 8) = &rcx_4[1]
rcx_4[1] = 0
*rcx_4 = &data_142da77d8
rcx_4[4] = arg6
rcx_4[2] = rbp
rcx_4[3].d = r15
arg3[8]
int64_t* r14_1 = data_1439b54b8
int64_t r12 = *(data_143ec4d30 + 0x10)

if (*(arg1 + 0x224) u> 0)
    uint32_t r15_1 = zx.d(*(arg1 + 0x222))
    void*** rcx_12 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_5 = &rcx_12[5]
    
    if (rax_5 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x30)
        rcx_12 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_5 = &rcx_12[5]
    
    *(arg2 + 0x30) = rax_5
    void**** rax_6 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_6 = rcx_12
    *(arg2 + 8) = &rcx_12[1]
    rcx_12[1] = 0
    *rcx_12 = &data_142da77b8
    rcx_12[2] = rbp
    rcx_12[3].d = r15_1
    rcx_12[4] = r12

if (*(arg1 + 0x228) u> 0)
    uint32_t r15_2 = zx.d(*(arg1 + 0x226))
    
    if ((*(*r14_1 + 8))(r14_1) == 0)
        void*** rcx_19 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_10 = &rcx_19[5]
        
        if (rax_10 u> *(arg2 + 0x38))
            sub_140b0e3d0(arg2 + 0x30, 0x30)
            rcx_19 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rax_10 = &rcx_19[5]
        
        *(arg2 + 0x30) = rax_10
        void**** rax_11 = *(arg2 + 8)
        *(arg2 + 0x14) += 1
        *rax_11 = rcx_19
        *(arg2 + 8) = &rcx_19[1]
        rcx_19[1] = 0
        *rcx_19 = &data_142da77c8
        rcx_19[2] = rbp
        rcx_19[3].d = r15_2
        rcx_19[4] = r14_1

int32_t rcx_23 = *arg5
int32_t rdx_2 = arg5[1]
int32_t rax_14 = arg5[2] - rcx_23
int32_t var_38 = _mm_cvtepi32_ps(zx.o(rcx_23)).d
int32_t rax_15 = arg5[3]
int32_t var_30 = _mm_cvtepi32_ps(zx.o(rax_14)).d
int32_t var_34 = _mm_cvtepi32_ps(zx.o(rdx_2)).d
int32_t var_2c = _mm_cvtepi32_ps(zx.o(rax_15 - rdx_2)).d
return sub_14077c870(arg2, &arg_8, arg1 + 0x216, &var_38, 0)
