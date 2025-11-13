// 函数: sub_1418977e0
// 地址: 0x1418977e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(arg1 + 0x248)
int32_t var_18
sub_14090a150(arg1 + 0x270, &var_18)
int32_t rax = var_18
int32_t* var_10
*var_10 = arg2
var_10[1] = arg3
var_10[2] = 0xffffffff
void arg_8
int32_t* result = sub_140908a30(arg1 + 0x270, &arg_8, arg2, var_10, rax, nullptr)

if (arg1 == -0x248)
    return result

return LeaveCriticalSection(arg1 + 0x248)
