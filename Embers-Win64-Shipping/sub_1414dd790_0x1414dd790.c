// 函数: sub_1414dd790
// 地址: 0x1414dd790
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rax = sub_14139bef0(arg2)
int64_t rbp = *(arg2 + 0x1a0)
int64_t r9 = *(arg3 + 0x10)
int64_t arg_8 = rbp
sub_141080ac0(arg1, arg2, rbp, r9)
int32_t rdx_1 = data_1439b70ac
int32_t rcx_2

if (rdx_1 s>= 4)
    rcx_2 = 0x800
    
    if (rdx_1 s< 0x800)
        rcx_2 = rdx_1
else
    rcx_2 = 4

float arg_20 = 1f f/ _mm_cvtepi32_ps(zx.o(rcx_2)).d
sub_1405eb490(arg2, &arg_8, arg1 + 0x118, &arg_20, 0)
uint64_t rcx_4 = zx.q(arg5)
void* r8_2 = &rax[0x29]
void* rdx_3 = *(r8_2 + 0x18)
int64_t* r14_1 = data_14395f4d0
int64_t rax_3 = sx.q(arg4 + (rcx_4 << 1).d + rcx_4.d)
arg_8 = rax_3

if (rdx_3 != 0)
    r8_2 = rdx_3

int64_t r12 = *(*(r8_2 + (rax_3 << 3)) + 0x10)

if (*(arg1 + 0x120) u> 0)
    uint32_t r15_1 = zx.d(*(arg1 + 0x11e))
    void*** rcx_7 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_5 = &rcx_7[5]
    
    if (rax_5 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x30)
        rcx_7 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_5 = &rcx_7[5]
    
    *(arg2 + 0x30) = rax_5
    void**** rax_6 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_6 = rcx_7
    *(arg2 + 8) = &rcx_7[1]
    rcx_7[1] = 0
    *rcx_7 = &data_142d5a070
    rcx_7[2] = rbp
    rcx_7[3].d = r15_1
    rcx_7[4] = r12

if (*(arg1 + 0x124) u> 0)
    uint32_t r15_2 = zx.d(*(arg1 + 0x122))
    
    if ((*(*r14_1 + 8))(r14_1) == 0)
        void*** rcx_14 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_10 = &rcx_14[5]
        
        if (rax_10 u> *(arg2 + 0x38))
            sub_140b0e3d0(arg2 + 0x30, 0x30)
            rcx_14 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rax_10 = &rcx_14[5]
        
        *(arg2 + 0x30) = rax_10
        void**** rax_11 = *(arg2 + 8)
        *(arg2 + 0x14) += 1
        *rax_11 = rcx_14
        *(arg2 + 8) = &rcx_14[1]
        rcx_14[1] = 0
        *rcx_14 = &data_142d5a080
        rcx_14[2] = rbp
        rcx_14[3].d = r15_2
        rcx_14[4] = r14_1

int64_t* r14_2 = data_14395f4d0
void* rcx_18 = &rax[0x2e]
void* rax_13 = *(rcx_18 + 0x18)

if (rax_13 != 0)
    rcx_18 = rax_13

void** const result = *(rcx_18 + (arg_8 << 3))
int64_t r12_1 = result[2]

if (*(arg1 + 0x128) u> 0)
    uint32_t r15_3 = zx.d(*(arg1 + 0x126))
    void*** rcx_21 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_15 = &rcx_21[5]
    
    if (rax_15 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x30)
        rcx_21 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_15 = &rcx_21[5]
    
    *(arg2 + 0x30) = rax_15
    void** rax_16 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_16 = rcx_21
    *(arg2 + 8) = &rcx_21[1]
    rcx_21[1] = 0
    result = &data_142d5a070
    *rcx_21 = &data_142d5a070
    rcx_21[2] = rbp
    rcx_21[3].d = r15_3
    rcx_21[4] = r12_1

if (*(arg1 + 0x12c) u> 0)
    uint32_t rsi_1 = zx.d(*(arg1 + 0x12a))
    result = (*(*r14_2 + 8))(r14_2)
    
    if (result.b == 0)
        void*** rcx_28 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_19 = &rcx_28[5]
        
        if (rax_19 u> *(arg2 + 0x38))
            sub_140b0e3d0(arg2 + 0x30, 0x30)
            rcx_28 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rax_19 = &rcx_28[5]
        
        *(arg2 + 0x30) = rax_19
        void** rax_20 = *(arg2 + 8)
        *(arg2 + 0x14) += 1
        *rax_20 = rcx_28
        *(arg2 + 8) = &rcx_28[1]
        rcx_28[1] = 0
        result = &data_142d5a080
        *rcx_28 = &data_142d5a080
        rcx_28[2] = rbp
        rcx_28[3].d = rsi_1
        rcx_28[4] = r14_2

return result
