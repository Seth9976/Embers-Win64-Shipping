// 函数: sub_140cbb260
// 地址: 0x140cbb260
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_8 = *(*(arg1 + 0x80) + 0x18)
int64_t var_18
sub_140b63b70(&arg_8, &var_18)

if (arg3 == &var_18)
    int64_t rcx_3 = var_18
    
    if (rcx_3 != 0)
        sub_140a74f90(rcx_3)
else
    int64_t rcx_2 = *arg3
    
    if (rcx_2 != 0)
        sub_140a74f90(rcx_2)
    
    *arg3 = var_18
    int32_t var_10
    arg3[1].d = var_10
    int32_t var_c
    *(arg3 + 0xc) = var_c

*arg2 = 0
arg2[1] = 0
sub_1405947f0(arg2, 5)
int32_t rax_4 = arg2[1].d + 5
arg2[1].d = rax_4

if (rax_4 s> *(arg2 + 0xc))
    sub_140594770(arg2)

UnDecorator::getReferenceType(*arg2, u"ENUM", 0xa)
return arg2
