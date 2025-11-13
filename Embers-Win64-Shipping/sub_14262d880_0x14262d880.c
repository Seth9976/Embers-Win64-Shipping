// 函数: sub_14262d880
// 地址: 0x14262d880
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_168
uint64_t var_18 = __security_cookie ^ &var_168
int64_t rcx = sx.q(arg1[0x14])
uint64_t result

if (rcx.d s< 3)
    result.b = 0
else
    int64_t* rdx = *(arg1 + 0x48)
    int32_t result_1 = 0
    sub_142611f70(arg2, *rdx, rdx[rcx - 1], arg1, &arg1[3], 0x7f7fffff, arg3)
    sub_142618420(arg2, 0x20, nullptr)
    void var_118
    
    if (((sub_142609b90(arg2, *(arg1 + 0x48), arg1[0x14], &var_118, &result_1, 0x20) u>> 0x1e).b
            & 1) == 0)
        result.b = 0
    else
        result = zx.q(result_1)
        
        if (result.d s<= 0)
            result.b = 0
        else
            int32_t* var_148_2
            var_148_2.d = result.d
            arg1[0x14] =
                sub_142628a90(*(arg1 + 0x48), arg1[0x14], arg1[0x15], &var_118, var_148_2.d).d
            result.b = 1

__security_check_cookie(var_18 ^ &var_168)
return result
