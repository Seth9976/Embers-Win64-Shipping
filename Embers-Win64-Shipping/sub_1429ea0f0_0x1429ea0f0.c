// 函数: sub_1429ea0f0
// 地址: 0x1429ea0f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_268
int64_t rax_1 = __security_cookie ^ &var_268
int64_t rdi = sx.q(arg4)
int64_t result

if (arg3 == 0)
    result = sub_14038b967(arg1 - sx.q(arg2 * 2), arg2, arg5, arg6, 4, rdi * 0x60 + &data_14427ead0)
else
    int64_t rax_2 = sx.q(arg3)
    
    if (arg4 == 0)
        result = sub_14038b6c1(arg1, arg2, arg5, arg6, 4, rax_2 * 0x60 + &data_14427ead0)
    else
        void* var_238_1 = rax_2 * 0x60 + &data_14427ead0
        int32_t (* var_240)[0x4]
        var_240.d = 0x10
        int32_t var_228[0x2][0x4]
        sub_14038b210(arg1 - sx.q(arg2 * 2), &var_228, arg2, 1, 9, var_240)
        void* var_230_1 = rdi * 0x60 + &data_14427ead0
        var_238_1.d = arg6
        var_240.d = 4
        void var_208
        result = sub_14038b4c2(&var_208, arg5, arg6, 0x10, 8, var_240)

__security_check_cookie(rax_1 ^ &var_268)
return result
