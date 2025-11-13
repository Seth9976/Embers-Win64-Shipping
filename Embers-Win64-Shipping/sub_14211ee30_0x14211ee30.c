// 函数: sub_14211ee30
// 地址: 0x14211ee30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_88
int64_t rax_1 = __security_cookie ^ &var_88
int64_t result = (*(*arg1 + 0x268))()
int32_t i = 0

if (arg3[1].d s> 0)
    int64_t* rdi_1 = nullptr
    
    do
        int32_t var_54_1 = 1
        int32_t var_50_1 = 3
        int32_t var_48_1 = 0
        int64_t* rbx_1 = *(rdi_1 + *arg3)
        int64_t var_68
        __builtin_memset(&var_68, 0, 0x14)
        int32_t var_4c_1 = 0xffffffff
        int64_t var_60
        int32_t var_58
        (*(*rbx_1 + 0x18))(rbx_1, zx.q(arg2), arg4, &var_68, var_68, var_60, var_58, var_50_1, 
            var_48_1, rax_1)
        result = sub_14211ea70(rbx_1, &var_68, arg2)
        i += 1
        rdi_1 = &rdi_1[1]
    while (i s< arg3[1].d)

__security_check_cookie(rax_1 ^ &var_88)
return result
