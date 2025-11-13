// 函数: sub_140d80150
// 地址: 0x140d80150
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_48
int64_t rax_1 = __security_cookie ^ &var_48
void* result = *(arg1 + 8)
int64_t* rcx = *(result + 0x40)

if (rcx != 0)
    int32_t var_28 = arg2
    int32_t var_24_1 = arg3 + arg2
    int32_t var_20_1 = arg4 + arg2
    result = (*(*rcx + 0x18))(rcx, 0, &var_28)

__security_check_cookie(rax_1 ^ &var_48)
return result
