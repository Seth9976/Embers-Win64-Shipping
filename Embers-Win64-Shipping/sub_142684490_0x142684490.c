// 函数: sub_142684490
// 地址: 0x142684490
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm6
int128_t var_38 = zmm6
void var_118
int64_t* var_48 = __security_cookie ^ &var_118
int64_t* result

if (*(arg1 + 8) == 0 || arg2 == 0)
    result.b = 0
else
    void var_e8
    sub_1426022c0(&var_e8)
    uint32_t rax_1
    void* rdi_1
    
    if (data_143de5480 != 0)
        rdi_1 = &var_e8
        rax_1.b = GetCurrentThreadId() == data_143de5470
    
    if (data_143de5480 == 0 || rax_1.b != 0)
        rdi_1 = arg1 + 0x60
    
    sub_142611af0(rdi_1, *(arg1 + 8), 0x800, nullptr)
    int128_t zmm2 = *arg3
    int128_t zmm1 = *(arg3 + 4)
    int32_t var_68 = 0
    int64_t var_54_1 = 0
    var_54_1.d = *(arg3 + 8)
    float var_58 = (zmm2 ^ 0x80000000).d
    var_54_1:4.d = (zmm1 ^ 0x80000000).d
    int64_t var_64_1 = 0
    int32_t rax_2
    rax_2, zmm6 = sub_1426049e0(rdi_1, arg2, &var_58, &var_68)
    void* rcx_3 = &var_e8
    
    if (((rax_2 u>> 0x1e).b & 1) == 0)
        sub_142602500(rcx_3)
        result.b = 0
    else
        *arg4 = (_mm_unpacklo_ps(var_68 ^ zmm6, (var_64_1:4.d ^ zmm6).q)).q
        arg4[1].d = var_64_1.d
        sub_142602500(rcx_3)
        result.b = 1

__security_check_cookie(var_48 ^ &var_118)
return result
