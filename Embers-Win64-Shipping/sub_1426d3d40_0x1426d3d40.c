// 函数: sub_1426d3d40
// 地址: 0x1426d3d40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = sub_1426ae270(arg1, arg2, arg3, arg4, arg5)
int16_t* var_28
int32_t var_20
int32_t result_1
int16_t* rcx_5

if (*(arg1 + 0x6c) == 0)
    sub_140a2e390(&var_28, u"loops remaining: %d", zx.q(*(arg3 + 4)))
    int64_t rdi_1 = sx.q(arg5[1].d)
    int32_t rax = (rdi_1 + 1).d
    arg5[1].d = rax
    
    if (rax s> *(arg5 + 0xc))
        sub_1405a4f90(arg5)
    
    int64_t* rcx_4 = (rdi_1 << 4) + *arg5
    *rcx_4 = 0
    *rcx_4 = var_28
    var_28 = nullptr
    rcx_4[1].d = var_20
    result = result_1
    *(rcx_4 + 0xc) = result
    rcx_5 = var_28
    var_20.q = 0
label_1426d3e85:
    
    if (rcx_5 != 0)
        return sub_140a74f90(rcx_5)
else if (not(0f f>= arg1[0xe].d))
    (*(*arg1 + 0x150))(arg1)
    int16_t* var_18
    int16_t** rax_4 = sub_140a31300(&var_18, _mm_cvtps_pd(arg1[0xe].d), 1)
    int16_t* r8_1
    
    if (rax_4[1].d == 0)
        r8_1 = &data_142d40450
    else
        r8_1 = *rax_4
    
    sub_140a2e390(&var_28, u"time remaining: %s", r8_1)
    int64_t rdi_2 = sx.q(arg5[1].d)
    int32_t rax_5 = (rdi_2 + 1).d
    arg5[1].d = rax_5
    
    if (rax_5 s> *(arg5 + 0xc))
        sub_1405a4f90(arg5)
    
    int64_t* rcx_12 = (rdi_2 << 4) + *arg5
    *rcx_12 = 0
    *rcx_12 = var_28
    var_28 = nullptr
    rcx_12[1].d = var_20
    result = result_1
    *(rcx_12 + 0xc) = result
    int16_t* rcx_13 = var_28
    var_20.q = 0
    
    if (rcx_13 != 0)
        result = sub_140a74f90(rcx_13)
    
    rcx_5 = var_18
    goto label_1426d3e85
return result
