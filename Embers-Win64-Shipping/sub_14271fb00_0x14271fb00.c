// 函数: sub_14271fb00
// 地址: 0x14271fb00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_78
int64_t rax_1 = __security_cookie ^ &var_78
int64_t var_58[0x2]
var_58[0] = 0
void* var_48 = nullptr
uint64_t result = sub_14271fba0(arg1, arg2, &var_58)

if (var_58[0] != 0)
    void var_38
    void* rcx = &var_38
    
    if (var_48 != 0)
        rcx = var_48
    
    result = (*(*rcx + 0x10))(rcx)

__security_check_cookie(rax_1 ^ &var_78)
return result
