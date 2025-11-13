// 函数: sub_140f7dea0
// 地址: 0x140f7dea0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_88
int64_t rax_1 = __security_cookie ^ &var_88
uint64_t result
float zmm0[0x4]
result, zmm0 = sub_140e1ca30(arg1, arg2, arg3)

if (arg3[0x138] != 0)
    result = sub_140e12730(arg1)
    int32_t i = 0
    uint64_t result_1 = result
    
    if (*(result + 8) s> 0)
        int64_t rsi_1 = 0
        
        do
            int64_t** rbx_1 = *result_1
            int64_t var_68[0x7]
            sub_140e191a0(*(rbx_1 + rsi_1), &var_68, zmm0)
            result, zmm0 = sub_140de8410(*(rbx_1 + rsi_1), &var_68, arg3)
            i += 1
            rsi_1 += 0x10
        while (i s< *(result_1 + 8))

__security_check_cookie(rax_1 ^ &var_88)
return result
