// 函数: sub_1426e1c00
// 地址: 0x1426e1c00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* rax = *(arg1 + 0x70)
int16_t* var_18
int16_t* var_10

if (rax != 0)
    int64_t arg_8 = *(rax + 0x18)
    sub_140b63b70(&arg_8, &var_18)
else
    var_18 = rax
    sub_1405947f0(&var_18, 5)
    var_10.d = rax.d + 5
    
    if (rax.d + 5 s> var_10:4.d)
        sub_140594770(&var_18)
    
    UnDecorator::getReferenceType(var_18, u"None", 0xa)

int16_t* const r8 = &data_142d40450

if (var_10.d != 0)
    r8 = var_18

sub_140a2e390(arg2, u"Push Action: %s", r8)
int16_t* rcx_5 = var_18

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

return arg2
