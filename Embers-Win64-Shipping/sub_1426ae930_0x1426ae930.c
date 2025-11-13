// 函数: sub_1426ae930
// 地址: 0x1426ae930
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_10 = *arg4
void* rax_1 = sub_140d3c6e0(&arg_10)
int32_t rsi = 0
int16_t* var_28
int32_t var_20

if (rax_1 != 0)
    int64_t arg_20 = *(rax_1 + 0x18)
    sub_140b63b70(&arg_20, &var_28)
else
    var_28 = nullptr
    var_20 = 0
    sub_1405947f0(&var_28, 5)
    int32_t rax_2 = var_20 + 5
    var_20 = rax_2
    
    if (rax_2 s> 0)
        sub_140594770(&var_28)
    
    UnDecorator::getReferenceType(var_28, u"None", 0xa)

int16_t* const rbp = &data_142d40450
int16_t* rcx_5 = var_28

if (var_20 != 0)
    rbp = rcx_5

*arg2 = 0
arg2[1] = 0

if (rbp != 0 && *rbp != 0)
    int64_t rbx_1 = -1
    
    do
        rbx_1 += 1
    while (rbp[rbx_1] != 0)
    
    if (rbx_1.d + 1 s> 0)
        sub_1405947f0(arg2, rbx_1.d + 1)
        rsi = arg2[1].d
    
    int32_t rax_4 = rsi + rbx_1.d + 1
    arg2[1].d = rax_4
    
    if (rax_4 s> *(arg2 + 0xc))
        sub_140594770(arg2)
    
    UnDecorator::getReferenceType(*arg2, rbp, (rbx_1.d + 1) * 2)
    rcx_5 = var_28

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

return arg2
