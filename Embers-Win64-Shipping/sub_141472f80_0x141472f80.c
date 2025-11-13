// 函数: sub_141472f80
// 地址: 0x141472f80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_18 = arg3
void* rcx_1
int64_t r14

if (arg4 == 0)
    rcx_1 = data_143f11788
    r14 = *(rcx_1 + 0x10)
else
    int64_t* rcx = *(*(arg4 + 0x38) + 0x10)
    int64_t rax_3 = (*(*rcx + 0x20))(rcx)
    rcx_1 = data_143f11788
    r14 = rax_3

if (r14 == 0)
    r14 = *(rcx_1 + 0x10)

if (arg1[1] u> 0)
    uint32_t r13_1 = zx.d(*arg1)
    void*** rcx_4 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_4 = &rcx_4[5]
    
    if (rax_4 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x30)
        rcx_4 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_4 = &rcx_4[5]
    
    *(arg2 + 0x30) = rax_4
    int64_t* rax_5 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_5 = rcx_4
    *(arg2 + 8) = &rcx_4[1]
    rcx_4[1] = 0
    *rcx_4 = &data_142d5a070
    rcx_4[2] = arg3
    rcx_4[3].d = r13_1
    rcx_4[4] = r14

if (arg1[3] u> 0)
    uint32_t r13_2 = zx.d(arg1[2])
    void*** rcx_10 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_7 = &rcx_10[5]
    
    if (rax_7 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x30)
        rcx_10 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_7 = &rcx_10[5]
    
    *(arg2 + 0x30) = rax_7
    void**** rax_8 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_8 = rcx_10
    *(arg2 + 8) = &rcx_10[1]
    rcx_10[1] = 0
    *rcx_10 = &data_142d5a070
    rcx_10[2] = arg3
    rcx_10[3].d = r13_2
    rcx_10[4] = r14

int64_t var_68

if (arg1[0xe] u> 0)
    float var_60_1
    float zmm1[0x4]
    
    if (arg4 == 0)
        float rax_11 = data_143dbb200
        var_68 = data_143dbb1f8.q
        var_60_1 = rax_11
    else
        zmm1 = *(*(*(arg4 + 0x5c0) + 0x20) + 0x20)
        var_68.d = zmm1[0]
        float temp0_1[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0x55)
        var_60_1 = _mm_shuffle_ps(zmm1, zmm1, 0xaa)[0]
        var_68:4.d = temp0_1[0]
    
    int32_t var_4c_1 = 0x3f800000
    zmm1 = zx.o(var_68)
    float var_54_1 = _mm_shuffle_ps(zmm1, zmm1, 0x55)[0]
    float var_50_1 = var_60_1[0]
    float var_58 = zmm1[0]
    var_68 = zmm1.q
    sub_1405d0e10(arg2, &arg_18, &arg1[0xc], &var_58, 0)

if (arg1[5] u> 0)
    int64_t* r15_1 = data_1439b7040
    uint32_t r13_3 = zx.d(arg1[4])
    
    if ((*(*r15_1 + 8))(r15_1) == 0)
        void*** rcx_19 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_15 = &rcx_19[5]
        
        if (rax_15 u> *(arg2 + 0x38))
            sub_140b0e3d0(arg2 + 0x30, 0x30)
            rcx_19 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rax_15 = &rcx_19[5]
        
        *(arg2 + 0x30) = rax_15
        void**** rax_16 = *(arg2 + 8)
        *(arg2 + 0x14) += 1
        *rax_16 = rcx_19
        *(arg2 + 8) = &rcx_19[1]
        rcx_19[1] = 0
        *rcx_19 = &data_142d5a080
        rcx_19[2] = arg3
        rcx_19[3].d = r13_3
        rcx_19[4] = r15_1

uint64_t result
int512_t zmm6_1
float arg_8

if (arg4 == 0)
    int64_t r14_1 = 0
    int32_t rdi_2 = zx.d(arg1[8]) + 0x3f
    var_68 = 0
    uint32_t rdi_3 = rdi_2 u>> 6
    int32_t var_5c_1 = 0
    uint32_t r15_2 = rdi_3
    
    if (rdi_3 != 0)
        sub_14149c130(&var_68, 0)
        r15_2 = rdi_3
        r14_1 = var_68
    
    memset(r14_1, 0, zx.q(rdi_3) << 6)
    sub_1414749e0(arg2, &arg_18, &arg1[6], r14_1, r15_2, 0)
    arg_8 = 0f
    result, zmm6_1 = sub_1405eb490(arg2, &arg_18, &arg1[9], &arg_8, 0)
else
    arg_8 = sub_1414749e0(arg2, &arg_18, &arg1[6], *(arg4 + 0x578), *(arg4 + 0x580), 0)
        / float.s(zx.q(*(arg4 + 0x548)))
    result, zmm6_1 = sub_1405eb490(arg2, &arg_18, &arg1[9], &arg_8, 0)
zmm6_1.o = arg5
return result
