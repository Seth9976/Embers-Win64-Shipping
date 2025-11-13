// 函数: sub_14102f700
// 地址: 0x14102f700
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_48
int64_t rax_1 = __security_cookie ^ &var_48
int32_t var_28
int32_t rax_3
void* rcx

if (arg2 == 0)
    int32_t rcx_1 = int.d(fconvert.t(*(arg1 + 0x2b4)))
    int32_t rdx = int.d(fconvert.t(*(arg1 + 0x2b8)))
    var_28 = rcx_1
    int32_t var_24_1 = rdx
    rcx = arg1 + 0x250
    int32_t var_20_1 = int.d(fconvert.t(*(arg1 + 0x2bc))) + rcx_1
    rax_3 = int.d(fconvert.t(*(arg1 + 0x2c0))) + rdx
else
    rcx = arg1 + 0x250
    int32_t var_20 = arg4
    rax_3 = arg5
    var_28 = arg3
    int32_t r9
    int32_t var_24 = r9

int32_t var_1c = rax_3
int64_t result = sub_14105ade0(rcx, &var_28)
__security_check_cookie(rax_1 ^ &var_48)
return result
