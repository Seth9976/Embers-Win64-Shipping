// 函数: sub_140b6e960
// 地址: 0x140b6e960
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdx = 0
int64_t var_38 = 0
int32_t r9 = 0
int64_t var_30 = 0

if (arg2 != 0 && *arg2 != 0)
    int64_t rbx_1 = -1
    
    do
        rbx_1 += 1
    while (arg2[rbx_1] != 0)
    
    if (rbx_1.d + 1 s> 0)
        sub_1405947f0(&var_38, rbx_1.d + 1)
        r9 = var_30:4.d
        rdx = var_30.d
    
    int32_t rax_1 = rdx + rbx_1.d + 1
    var_30.d = rax_1
    
    if (rax_1 s> r9)
        sub_140594770(&var_38)
    
    UnDecorator::getReferenceType(var_38, arg2, (rbx_1.d + 1) * 2)

int64_t var_28 = arg3
int64_t* var_20 = &var_38
int64_t* var_10 = &var_28
uint64_t (* var_18)(int64_t* arg1, int32_t* arg2) = j_sub_140b645f0
char rax_2 = sub_140b6ea50(arg1, arg2, &var_18)
int64_t rcx_4 = var_38

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)

return zx.q(rax_2)
