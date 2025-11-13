// 函数: sub_1426d4b50
// 地址: 0x1426d4b50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* var_38 = arg4
float zmm1[0x2] = *arg3
int512_t result
result.o = zx.o(0)

if (not(zmm1[0] == 0f))
    int16_t* var_18
    int16_t** rax_1 = sub_140a31300(&var_18, _mm_cvtps_pd(zmm1), 1)
    int16_t* r8
    
    if (rax_1[1].d == 0)
        r8 = &data_142d40450
    else
        r8 = *rax_1
    
    int64_t var_28
    result = sub_140a2e390(&var_28, u"remaining: %ss", r8)
    int64_t rbx_1 = sx.q(arg4[1].d)
    int32_t rax_2 = (rbx_1 + 1).d
    arg4[1].d = rax_2
    
    if (rax_2 s> *(arg4 + 0xc))
        result = sub_1405a4f90(arg4)
    
    int64_t* rcx_5 = (rbx_1 << 4) + *arg4
    *rcx_5 = 0
    *rcx_5 = var_28
    var_28 = 0
    int32_t var_20
    rcx_5[1].d = var_20
    int32_t var_1c
    *(rcx_5 + 0xc) = var_1c
    int64_t rcx_6 = var_28
    var_20.q = 0
    
    if (rcx_6 != 0)
        result = sub_140a74f90(rcx_6)
    
    int16_t* rcx_7 = var_18
    
    if (rcx_7 != 0)
        return sub_140a74f90(rcx_7)

return result
