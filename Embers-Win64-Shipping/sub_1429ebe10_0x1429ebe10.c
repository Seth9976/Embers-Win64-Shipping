// 函数: sub_1429ebe10
// 地址: 0x1429ebe10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x1228)
void var_1268
int64_t rax_1 = __security_cookie ^ &var_1268
int16_t (* rcx_2)[0x8]
int32_t var_1218[0x30]

if ((arg5[2] | arg5[1] | *arg5) == 0)
    int32_t var_1220_1 = arg10 + 1
    int32_t var_1228_1 = arg9
    int32_t var_1230_1 = arg8
    sub_1429ec120(arg1, arg2, &var_1218, 0x40, arg5, arg6, arg7)
    rcx_2 = &var_1218
else
    int32_t var_1220 = arg10 + 7
    int32_t var_1228 = arg9
    int32_t var_1230 = arg8
    sub_1429ec120(arg1 - arg2 * 3, arg2, &var_1218, 0x40, arg5, arg6, arg7)
    void var_1158
    rcx_2 = &var_1158
int32_t var_1220_2 = arg10
int32_t var_1228_2 = arg9
int32_t var_1230_2 = arg8
uint64_t result = sub_1429ebf40(rcx_2, 0x40, arg3, arg4, arg5, arg6, arg7)
__security_check_cookie(rax_1 ^ &var_1268)
return result
