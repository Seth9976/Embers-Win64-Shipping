// 函数: sub_142bd9e60
// 地址: 0x142bd9e60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[1].d != 0)
    return 

int32_t r9 = arg1[3].d
int32_t rdi_1 = arg1[9].d
int64_t r15_1 = *arg1

if (arg3 != rdi_1 + r9)
    return 

int32_t rax = sub_142bd94a0(&arg1[3], arg4, rdi_1, r9, arg2, r15_1)

if (rax != 0)
    arg1[1].d = rax
    return 

rax = sub_142bd94a0(&arg1[9], arg4, 0, rdi_1, arg2, r15_1)

if (rax != 0)
    arg1[1].d = rax
