// 函数: sub_140839450
// 地址: 0x140839450
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rcx = 0

if (arg4 - arg1[0xe] s>= 0)
    rcx = arg4 - arg1[0xe]

int32_t rcx_1 = rcx + arg1[1]
int32_t r12 = *(*(arg1 + 0x50) + 0x10)

if (rcx_1 s<= 0 && r12 s<= 0)
    return sub_140838000(arg1) __tailcall

int32_t rax_2 = arg1[2]
uint128_t zmm0
zmm0.d = _mm_cvtepi32_ps(zx.o(rcx_1)).d f* *arg1
int32_t r14 = int.d(zmm0.d)

if (data_14396f078 s>= r14)
    r14 = data_14396f078

void** const var_80
int64_t var_78

if (rax_2 == 0)
    arg1[2] = r14
    var_80 = &data_142dd66a0
    __builtin_memset(&var_78, 0, 0x11)
    sub_1408201d0(&var_78, r14)
    sub_1407b4d10(&arg1[4], 4, arg1[2], 0x1c, 0x41, u"NiagaraGPUInstanceCounts", &var_80)
    sub_140a1d5c0(&var_78)
else if (rcx_1 s> rax_2)
    int64_t var_58
    __builtin_memset(&var_58, 0, 0x11)
    void** const var_60 = &data_142dd66a0
    sub_1408201d0(&var_58, r14)
    int32_t var_a8_1 = 0x41
    __builtin_memset(&var_80, 0, 0x1c)
    sub_1407b4d10(&var_80, 4, r14, 0x1c, 0x41, u"NiagaraGPUInstanceCounts", &var_60)
    int64_t rax_3 = var_78
    int64_t* rsi_3 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rcx_9 = &rsi_3[1]
    
    if (rcx_9 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x10)
        rsi_3 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rcx_9 = &rsi_3[1]
    
    *(arg2 + 0x30) = rcx_9
    *rsi_3 = rax_3
    void*** rcx_13 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_4 = &rcx_13[6]
    
    if (rax_4 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x38)
        rcx_13 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_4 = &rcx_13[6]
    
    *(arg2 + 0x30) = rax_4
    *(arg2 + 0x14) += 1
    **(arg2 + 8) = rcx_13
    *(arg2 + 8) = &rcx_13[1]
    rcx_13[3] = rsi_3
    rcx_13[1] = 0
    *rcx_13 = &data_142da7798
    rcx_13[2].d = 1
    rcx_13[4].d = 2
    *(rcx_13 + 0x24) = 3
    rcx_13[5] = 0
    int64_t rax_7 = *(arg1 + 0x18)
    int64_t* rsi_8 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rcx_17 = &rsi_8[1]
    
    if (rcx_17 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x10)
        rsi_8 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rcx_17 = &rsi_8[1]
    
    *(arg2 + 0x30) = rcx_17
    *rsi_8 = rax_7
    void*** rcx_21 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_8 = &rcx_21[6]
    
    if (rax_8 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x38)
        rcx_21 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_8 = &rcx_21[6]
    
    *(arg2 + 0x30) = rax_8
    void**** rax_9 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    void** const* var_98_2
    var_98_2.d = 1
    *rax_9 = rcx_21
    *(arg2 + 8) = &rcx_21[1]
    rcx_21[1] = 0
    *rcx_21 = &data_142da7798
    rcx_21[4].d = 0
    rcx_21[5] = 0
    rcx_21[2].d = 1
    rcx_21[3] = rsi_8
    *(rcx_21 + 0x24) = 3
    int64_t r8_3 = *(arg1 + 0x20)
    int64_t var_88 = var_78
    int32_t arg_20 = arg1[2]
    var_a8_1.q = &arg_20
    sub_1420534a0(arg2, arg3, r8_3, &var_88, var_a8_1, 0, var_98_2.d)
    int64_t rax_13 = var_78
    int64_t* rsi_13 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rcx_26 = &rsi_13[1]
    
    if (rcx_26 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x10)
        rsi_13 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rcx_26 = &rsi_13[1]
    
    *(arg2 + 0x30) = rcx_26
    *rsi_13 = rax_13
    void*** rcx_30 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_14 = &rcx_30[6]
    
    if (rax_14 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x38)
        rcx_30 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_14 = &rcx_30[6]
    
    *(arg2 + 0x30) = rax_14
    void**** rax_15 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_15 = rcx_30
    *(arg2 + 8) = &rcx_30[1]
    rcx_30[1] = 0
    *rcx_30 = &data_142da7798
    rcx_30[2].d = 1
    rcx_30[3] = rsi_13
    rcx_30[4].d = 2
    *(rcx_30 + 0x24) = 3
    rcx_30[5] = 0
    arg1[2] = r14
    sub_140a4bff0(&var_80, &arg1[4], 0x20)
    sub_1408081b0(&var_80)
    int64_t var_70
    sub_1405ec8a0(&var_70)
    sub_1405d1550(&var_78)
    sub_1405d1550(&var_80)
    sub_140a1d5c0(&var_58)
int32_t zmm1 = *arg1
int32_t rcx_39 = arg1[0x16]
zmm0.d = _mm_cvtepi32_ps(zx.o(r12)).d f* zmm1
uint64_t rsi_16 = zx.q(int.d(zmm0.d))

if (data_14396f07c s>= rsi_16.d)
    rsi_16 = zx.q(data_14396f07c)

if (r12 s<= rcx_39)
    zmm0.d = _mm_cvtepi32_ps(zx.o(rsi_16.d)).d f* zmm1
    int32_t result = int.d(zmm0.d)
    
    if (result s>= rcx_39)
        return result

sub_1408081b0(&arg1[0x34])
arg1[0x16] = rsi_16.d
return sub_1407b4d10(&arg1[0x34], 4, (rsi_16 * 5).d, 0x1c, 0x101, u"NiagaraGPUDrawIndirectArgs", 0)
