// 函数: sub_142407e00
// 地址: 0x142407e00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_38 = var_38 & 0xfffffffe
int128_t var_34
__builtin_memset(&var_34, 0, 0x20)
int64_t* rax = sub_14240fbe0(arg2, 0, nullptr, 0, 0x2e, &var_38, 1)
void* rcx_1 = *(arg2 + 0x68)
int32_t rcx_2

if (rcx_1 == 0)
    rcx_2 = -1
else
    rcx_2 = *(rcx_1 + 0x18)

int32_t* var_50
var_50.d = *(arg1 + 0x50)
return sub_141e92fc0(rax, arg1 + 0x38, arg1 + 0x44, arg1 + 0x28, rcx_2, var_50.d, 0, 0)
