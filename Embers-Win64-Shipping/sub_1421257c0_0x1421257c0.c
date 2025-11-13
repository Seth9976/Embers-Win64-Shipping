// 函数: sub_1421257c0
// 地址: 0x1421257c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = *(arg1 + 0x28)
int32_t rsi = 0
uint64_t var_18
int32_t var_10

if (rax != 0)
    int64_t arg_8 = *(rax + 0x18)
    sub_140b63b70(&arg_8, &var_18)
else
    var_18 = 0
    var_10 = 0
    sub_1405947f0(&var_18, (rax + 5).d)
    int32_t rax_1 = var_10 + 5
    var_10 = rax_1
    
    if (rax_1 s> 0)
        sub_140594770(&var_18)
    
    UnDecorator::getReferenceType(var_18, u"None", 0xa)

uint64_t rbp = &data_142d40450
uint64_t rcx_4 = var_18

if (var_10 != 0)
    rbp = rcx_4

*arg2 = 0
arg2[1] = 0

if (rbp != 0 && *rbp != 0)
    int64_t rbx_1 = -1
    
    do
        rbx_1 += 1
    while (*(rbp + (rbx_1 << 1)) != 0)
    
    if (rbx_1.d + 1 s> 0)
        sub_1405947f0(arg2, rbx_1.d + 1)
        rsi = arg2[1].d
    
    int32_t rax_3 = rsi + rbx_1.d + 1
    arg2[1].d = rax_3
    
    if (rax_3 s> *(arg2 + 0xc))
        sub_140594770(arg2)
    
    UnDecorator::getReferenceType(*arg2, rbp, (rbx_1.d + 1) * 2)
    rcx_4 = var_18

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)

return arg2
