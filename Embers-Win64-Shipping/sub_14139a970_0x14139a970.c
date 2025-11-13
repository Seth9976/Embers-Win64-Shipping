// 函数: sub_14139a970
// 地址: 0x14139a970
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r8 = *(*(arg1 + 0x38) + 0x10)
int128_t var_18 = *(arg1 + 0x40)
int64_t* arg_8
int64_t* rax_1 = UnDecorator::getFunctionIndirectType(&arg_8, arg2, r8, &var_18, arg3, arg4)
int64_t result = sub_14106d7f0(*(arg1 + 0x50), rax_1)
int64_t* rcx_2 = arg_8

if (rcx_2 == 0)
    return result

return (**rcx_2)(rcx_2, 1)
