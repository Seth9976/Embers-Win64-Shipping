// 函数: sub_1428e39a0
// 地址: 0x1428e39a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x50)
void var_58
int64_t rax_1 = __security_cookie ^ &var_58
int32_t rdx
int32_t var_1c = rdx
int32_t* rcx = data_143feceb0
void var_20
void* var_28 = &var_20
int32_t r8
int32_t var_18 = r8
int32_t rax_2

if (rcx != 0)
    rax_2 = sub_1428989f0(rcx, &var_20)

void** result

if (rcx == 0 || rax_2 s< 0)
    result = sub_1428a8f00(&var_28, &data_1435138e0, 0x2b, 8, sub_1428e3af0)
    
    if (result == 0)
        __security_check_cookie(rax_1 ^ &var_58)
        return result
else
    var_28 = sub_142898ea0(data_143feceb0, rax_2)
    result = &var_28

if (arg1 != 0)
    *arg1 = **result

__security_check_cookie(rax_1 ^ &var_58)
return 1
