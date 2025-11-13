// 函数: sub_141fcdce0
// 地址: 0x141fcdce0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_28 = 0
int32_t var_20 = 0
sub_1405947f0(&var_28, 0x10)
int32_t rax = var_20 + 0x10
var_20 = rax

if (rax s> 0)
    sub_140594770(&var_28)

UnDecorator::getReferenceType(var_28, u"FreezeRendering", 0x20)
int64_t r9
r9.b = 1
int64_t var_18
(*(*arg1 + 0xc20))(arg1, &var_18, &var_28, r9)
int64_t rcx_4 = var_18

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)

int64_t rcx_5 = var_28

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

int32_t result = arg1[0xae].d
arg1[0xae].d = ((not.d(result) ^ result) & 2) ^ result
return result
