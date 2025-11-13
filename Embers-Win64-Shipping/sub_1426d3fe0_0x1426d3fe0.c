// 函数: sub_1426d3fe0
// 地址: 0x1426d3fe0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1426ae270(arg1, arg2, arg3, arg4, arg5)
uint32_t rax_2 = zx.d((*(*arg1 + 0x298))(arg1))
void* const rdi_1

if (rax_2 == 0)
    rdi_1 = nullptr
else
    rdi_1 = arg3 - (zx.q(rax_2 + 3) & 0xfffffffffffffffc)

uint64_t result

if (*(arg2 + 0xa8) == 0)
    result = sub_141ee69e0(arg2)

if (*(arg2 + 0xa8) != 0 || result != 0)
    int16_t* var_18
    int16_t** rax_4 =
        sub_140a31300(&var_18, _mm_cvtps_pd(_mm_max_ss((*(rdi_1 + 4)).d, (zx.o(0)).d)), 1)
    int16_t* const rbx_1 = &data_142d40450
    
    if (rax_4[1].d != 0)
        *rax_4
    
    int64_t var_28
    int64_t* rax_5 = sub_1426adc10(&var_28, 1)
    
    if (rax_5[1].d != 0)
        rbx_1 = *rax_5
    
    int64_t var_38
    sub_140a2e390(&var_38, u"%s in %ss", rbx_1)
    int64_t rbx_2 = sx.q(arg5[1].d)
    int32_t rax_6 = (rbx_2 + 1).d
    arg5[1].d = rax_6
    
    if (rax_6 s> *(arg5 + 0xc))
        sub_1405a4f90(arg5)
    
    int64_t* rcx_10 = (rbx_2 << 4) + *arg5
    *rcx_10 = 0
    *rcx_10 = var_38
    var_38 = 0
    int32_t var_30
    rcx_10[1].d = var_30
    int32_t result_1
    result = zx.q(result_1)
    *(rcx_10 + 0xc) = result.d
    int64_t rcx_11 = var_38
    var_30.q = 0
    
    if (rcx_11 != 0)
        result = sub_140a74f90(rcx_11)
    
    int64_t rcx_12 = var_28
    
    if (rcx_12 != 0)
        result = sub_140a74f90(rcx_12)
    
    int16_t* rcx_13 = var_18
    
    if (rcx_13 != 0)
        return sub_140a74f90(rcx_13)

return result
