// 函数: sub_14105b130
// 地址: 0x14105b130
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_88
int64_t rax_1 = __security_cookie ^ &var_88
int64_t* rcx = *(arg1 + 0x20)
void var_48
(*(*rcx + 0x50))(rcx, &var_48)
int64_t* rax_3 = sub_141022ce0(*(arg1 + 0x10))
int64_t result_1
int64_t result = (*(*rax_3 + 0xc8))(rax_3, &result_1, 0, 1, &var_48)

if (data_1439b4ad4 != 0)
    *(arg1 + 0x38) = *(arg1 + 0x20)
    result = result_1
    *(arg1 + 0x40) = result
    
    if (data_1439b4ad4 != 0)
        result = sub_1410146b0(*(arg1 + 0x10) + 0x910, arg1 + 0x30)

__security_check_cookie(rax_1 ^ &var_88)
return result
