// 函数: sub_141d015c0
// 地址: 0x141d015c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (sub_141d02260(arg1, arg2, nullptr, nullptr) != 0)
    return 1

int32_t rcx = 0
int32_t rdx = 0
uint64_t rsi
rsi.b = 0
int64_t var_18 = 0
int64_t var_10 = 0

if (arg2 != 0 && *arg2 != 0)
    int64_t rbx_1 = -1
    
    do
        rbx_1 += 1
    while (arg2[rbx_1] != 0)
    
    if (rbx_1.d + 1 s> 0)
        sub_1405947f0(&var_18, rbx_1.d + 1)
        rdx = var_10:4.d
        rcx = var_10.d
    
    int32_t rax_1 = rbx_1.d + 1 + rcx
    var_10.d = rax_1
    
    if (rax_1 s> rdx)
        sub_140594770(&var_18)
    
    UnDecorator::getReferenceType(var_18, arg2, (rbx_1.d + 1) * 2)

char rax_2 = sub_141d06c80(arg1, &var_18)
int64_t rcx_5 = var_18

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

if (rax_2 != 0)
    int64_t* rcx_6 = *(arg1 + 8)
    rsi = zx.q((*(*rcx_6 + 0x70))(rcx_6, arg2))

return zx.q(rsi.b)
