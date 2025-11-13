// 函数: sub_142b7ea00
// 地址: 0x142b7ea00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_168
uint64_t result = __security_cookie ^ &var_168
uint64_t result_1 = result

if (*arg4 s<= 0)
    void* rcx = *(arg1 + 0x20)
    
    if (rcx != 0)
        result = sub_142a95bd0(rcx)
    
    if (rcx == 0 || result.b != 0)
        *arg4 = 0x1b
    else
        int32_t rax_1 = *arg4
        int64_t* rcx_1 = *(arg2 + 0x20)
        void* var_148 = arg2
        void* var_140_1 = arg1
        int64_t var_138_1 = arg3
        sub_142a95970(rcx_1, nullptr, sub_142b80220, &var_148)
        *arg4 = rax_1
        result = zx.q(*(arg2 + 0x260))
        *(arg1 + 0x260) |= result.b

__security_check_cookie(result_1 ^ &var_168)
return result
