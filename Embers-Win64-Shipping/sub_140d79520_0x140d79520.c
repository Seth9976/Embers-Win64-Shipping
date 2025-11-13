// 函数: sub_140d79520
// 地址: 0x140d79520
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_38
int16_t* rax
int512_t zmm1
rax, zmm1 = sub_140d7a750(&var_38, arg4, arg5)
uint128_t var_78 = *rax
uint64_t arg_8 = *(rax + 0x10)
void var_20
int16_t* rax_1 = sub_140d7a750(&var_20, arg3, zmm1)
struct IRawElementProviderSimple pProvider = arg1 + 0x28
uint128_t var_78_1 = var_78
uint64_t var_68 = arg_8
int64_t var_48 = *(rax_1 + 0x10)
uint128_t var_58 = *rax_1

if (arg1 == 0)
    pProvider = 0

return UiaRaiseAutomationPropertyChangedEvent(pProvider, zx.q(arg2))
