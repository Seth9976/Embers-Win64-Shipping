// 函数: sub_1426862d0
// 地址: 0x1426862d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_78
uint64_t var_28 = __security_cookie ^ &var_78
void* rcx = *(arg1 + 0x4a8)
uint64_t result

if (rcx == 0)
    result.b = 0
else
    void* rcx_1 = *(rcx + 8)
    
    if (rcx_1 == 0)
        result.b = 0
    else
        int64_t var_48 = 0
        int32_t var_40_1 = 0
        int64_t var_38 = 0
        int32_t var_30_1 = 0
        int64_t* var_50_1 = &var_38
        
        if (((sub_14260fe90(rcx_1, 0, arg2, nullptr, &var_48) u>> 0x1e).b & 1) == 0)
            result.b = 0
        else
            int32_t zmm0_1 = var_48:4.d
            *arg3 = (_mm_unpacklo_ps(var_48.d ^ 0x80000000, (var_40_1 ^ 0x80000000).q)).q
            int32_t rax_2 = zmm0_1
            zmm0_1 = var_38:4.d
            arg3[1].d = rax_2
            *arg4 = (_mm_unpacklo_ps(var_38.d ^ 0x80000000, (var_30_1 ^ 0x80000000).q)).q
            arg4[1].d = zmm0_1
            result.b = 1

__security_check_cookie(var_28 ^ &var_78)
return result
