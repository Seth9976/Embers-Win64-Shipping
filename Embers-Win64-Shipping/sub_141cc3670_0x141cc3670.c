// 函数: sub_141cc3670
// 地址: 0x141cc3670
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_18 = 0
int32_t var_10 = 0
sub_1405947f0(&var_18, 0x16)
int32_t rax = var_10 + 0x16
var_10 = rax

if (rax s> 0)
    sub_140594770(&var_18)

UnDecorator::getReferenceType(var_18, u"FGameplayTagContainer", 0x2c)
int64_t* rax_1
int512_t zmm2
rax_1, zmm2 = sub_141cc9550()
int16_t* result = sub_140be1580(rax_1, *arg2, arg1, arg4, zmm2, arg3, arg5, &var_18, 0)
int64_t rcx_4 = var_18
*arg2 = result

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)

if (*arg2 != 0)
    sub_141cc23c0(arg1)

result.b = 1
return result
