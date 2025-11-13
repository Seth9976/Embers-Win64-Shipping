// 函数: sub_141fbcca0
// 地址: 0x141fbcca0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg4 != 0)
    return 

sub_141fca380(*(arg1 + 0x38))

if (*(arg3 + 0x278) == 0)
    sub_1423d8490(data_143f5b298, *(arg3 + 0x1a0), *(*(arg1 + 0x38) + 0x190))

*(arg3 + 0x1a0) = 0
sub_1423d37e0(data_143f5b298, arg3)

if (*(arg3 + 0x218) == 0)
    return 

int64_t var_18 = 0
int32_t var_10_1 = 0
sub_1405947f0(&var_18, 0xf)
int32_t rax_1 = var_10_1 + 0xf
var_10_1 = rax_1

if (rax_1 s> 0)
    sub_140594770(&var_18)

UnDecorator::getReferenceType(var_18, u"LoadMap failed", 0x1e)
int64_t* rcx_6 = *(arg3 + 0x218)
(*(*rcx_6 + 0x2e0))(rcx_6, 7, &var_18)
int64_t rcx_7 = var_18

if (rcx_7 != 0)
    sub_140a74f90(rcx_7)
