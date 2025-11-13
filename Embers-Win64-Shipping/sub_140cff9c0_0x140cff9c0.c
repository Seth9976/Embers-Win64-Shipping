// 函数: sub_140cff9c0
// 地址: 0x140cff9c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_8 = *(*(arg1 + 0x78) + 0x18)
int16_t* var_18
sub_140b63b70(&arg_8, &var_18)
int64_t* rcx_1 = *(arg1 + 0x78)
int64_t var_28
sub_140a2e390(&var_28, u"TSoftObjectPtr<%s%s>", (*(*rcx_1 + 0x2c0))(rcx_1))

if (arg3 == &var_28)
    int64_t rcx_4 = var_28
    
    if (rcx_4 != 0)
        sub_140a74f90(rcx_4)
else
    int64_t rcx_3 = *arg3
    
    if (rcx_3 != 0)
        sub_140a74f90(rcx_3)
    
    *arg3 = var_28
    int32_t var_20
    arg3[1].d = var_20
    int32_t var_1c
    *(arg3 + 0xc) = var_1c
    var_20.q = 0
    var_28 = 0

int16_t* rcx_5 = var_18

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

*arg2 = 0
arg2[1] = 0
sub_1405947f0(arg2, 0xb)
int32_t rax_6 = arg2[1].d + 0xb
arg2[1].d = rax_6

if (rax_6 s> *(arg2 + 0xc))
    sub_140594770(arg2)

UnDecorator::getReferenceType(*arg2, u"SOFTOBJECT", 0x16)
return arg2
