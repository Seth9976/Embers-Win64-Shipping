// 函数: sub_1426e1d50
// 地址: 0x1426e1d50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* rax = *(arg1 + 0x70)
int16_t* var_28

if (rax != 0)
    int64_t arg_8 = *(rax + 0x18)
    sub_140b63b70(&arg_8, &var_28)
else
    var_28 = rax
    sub_1405947f0(&var_28, 5)
    int16_t* var_20
    var_20.d = rax.d + 5
    
    if (rax.d + 5 s> var_20:4.d)
        sub_140594770(&var_28)
    
    UnDecorator::getReferenceType(var_28, u"None", 0xa)

int16_t* const rdi = &data_142d40450
int64_t var_18
int64_t* rax_3 = sub_1426b3750(arg1, &var_18)

if (rax_3[1].d != 0)
    rdi = *rax_3

sub_140a2e390(arg2, u"%s: %s", rdi)
int64_t rcx_6 = var_18

if (rcx_6 != 0)
    sub_140a74f90(rcx_6)

int16_t* rcx_7 = var_28

if (rcx_7 != 0)
    sub_140a74f90(rcx_7)

return arg2
