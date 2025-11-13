// 函数: sub_142127b90
// 地址: 0x142127b90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* arg_20 = arg4
void* arg_18 = arg3
void* rbx = *(arg1 + 0x10)
void* rax = sub_142126240(*(rbx + 0x28), arg4 + 0x20)
void* arg_8 = rax
void* rdi_1

if (rax == 0)
    rdi_1 = nullptr
else
    rdi_1 = sub_1419a30a0(rax, arg3)

if (rdi_1 == 0 && arg6 != rdi_1.b)
    void* var_38 = arg1
    int64_t* var_30_1 = &arg_18
    void** var_28_1 = &arg_8
    int64_t* var_20_1 = &arg_20
    sub_14211ccb0(&var_38, arg5)
    rbx = *(arg1 + 0x10)

arg2[1] = rbx
*arg2 = rdi_1
return arg2
