// 函数: sub_1418118c0
// 地址: 0x1418118c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_18 = 0
int32_t var_10 = 0
sub_1405947f0(&var_18, 9)
int32_t rax = var_10 + 9
var_10 = rax

if (rax s> 0)
    sub_140594770(&var_18)

UnDecorator::getReferenceType(var_18, u"Location", 0x12)
int64_t var_28 = 0
int32_t var_20 = 0
sub_1405947f0(&var_28, 9)
int32_t rax_1 = var_20 + 9
var_20 = rax_1

if (rax_1 s> 0)
    sub_140594770(&var_28)

UnDecorator::getReferenceType(var_28, u"Location", 0x12)
int64_t result = sub_141810340(arg1, &var_28, &var_18, arg2)
int64_t rcx_7 = var_28

if (rcx_7 != 0)
    result = sub_140a74f90(rcx_7)

int64_t rcx_8 = var_18

if (rcx_8 == 0)
    return result

return sub_140a74f90(rcx_8)
