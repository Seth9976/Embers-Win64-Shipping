// 函数: sub_1429e9c70
// 地址: 0x1429e9c70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_4e8
int64_t rax_1 = __security_cookie ^ &var_4e8
int64_t result
void var_4a8

if (arg3 == 0)
    sub_14038ba4c(arg1 - sx.q(arg2 * 2), &var_4a8, arg2, 0x15, 0x20)
label_1429e9d60:
    void* var_4b0_1 = sx.q(arg4) * 0x60 + &data_14427ead0
    int32_t var_4b8_1 = arg6
    void var_468
    result = sub_14038b591(&var_468, arg5, arg6, 0x20, 0x10, 0x10)
else
    int64_t rax_2 = sx.q(arg3)
    
    if (arg4 != 0)
        int32_t var_4b8
        var_4b8.q = rax_2 * 0x60 + &data_14427ead0
        sub_14038b31a(arg1 - sx.q(arg2 * 2), &var_4a8, arg2, 1, 0x15, 0x20)
        goto label_1429e9d60
    
    int32_t var_4c0
    var_4c0.q = rax_2 * 0x60 + &data_14427ead0
    result = sub_14038b7c7(arg1, arg2, arg5, arg6, 0x10, var_4c0)
__security_check_cookie(rax_1 ^ &var_4e8)
return result
