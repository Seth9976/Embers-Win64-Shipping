// 函数: ??$set_variable_in_other_environment@D@@YA_NQEBD0@Z
// 地址: 0x1423f4470
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_18 = 0
int32_t var_10 = 0
sub_1405947f0(&var_18, 4)
int32_t rax = var_10 + 4
var_10 = rax

if (rax s> 0)
    sub_140594770(&var_18)

UnDecorator::getReferenceType(var_18, &data_142dfc130, 8)
char rax_2 = (*(*arg3 + 0x168))(arg3, &var_18)
int64_t rcx_4 = var_18

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)

var_18 = 0
int32_t var_10_1 = 0
sub_1405947f0(&var_18, 9)
int32_t rax_3 = var_10_1 + 9
var_10_1 = rax_3

if (rax_3 s> 0)
    sub_140594770(&var_18)

UnDecorator::getReferenceType(var_18, u"Detailed", 0x12)
char rax_5 = (*(*arg3 + 0x168))(arg3, &var_18)
int64_t rcx_9 = var_18

if (rcx_9 != 0)
    sub_140a74f90(rcx_9)

if (rax_2 == 0 && rax_5 != 0)
    sub_1423dc1a0(arg1, arg2, arg3, u"Detailed -Skip")

return 1
