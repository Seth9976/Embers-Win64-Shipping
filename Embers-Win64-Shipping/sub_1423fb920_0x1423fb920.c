// 函数: sub_1423fb920
// 地址: 0x1423fb920
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* var_18
int32_t var_10

if (arg2 == 0)
    var_18 = nullptr
    var_10 = 0
    sub_1405947f0(&var_18, 5)
    int32_t rax_1 = var_10 + 5
    var_10 = rax_1
    
    if (rax_1 s> 0)
        sub_140594770(&var_18)
    
    UnDecorator::getReferenceType(var_18, u"None", 0xa)
else
    sub_140b63b70(arg2 + 0x28, &var_18)

int16_t* const rsi = &data_142d40450
int16_t* rcx_4 = var_18

if (var_10 != 0)
    rsi = rcx_4

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)

*arg1 = rsi
arg1[1].d = zx.d(*(arg2 + 0x48))
*(arg1 + 0xc) = *(arg2 + 0x38)
return arg1
