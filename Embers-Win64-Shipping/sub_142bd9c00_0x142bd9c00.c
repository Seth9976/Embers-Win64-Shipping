// 函数: sub_142bd9c00
// 地址: 0x142bd9c00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[1].d != 0)
    return 

int64_t rdi_1 = *arg1

if (arg1[2].d != 1)
    arg1[1].d = 6
    return 

uint64_t rax_1 = zx.q(arg1[5].d)

if (rax_1.d != 0)
    *(arg1[6] + rax_1 * 0x18 - 8) = arg2

void arg_8
int32_t rax = sub_142bd9f90(&arg1[5], rdi_1, &arg_8)

if (rax != 0)
    arg1[1].d = rax
    return 

uint64_t rax_3 = zx.q(arg1[0xb].d)

if (rax_3.d != 0)
    *(arg1[0xc] + rax_3 * 0x18 - 8) = arg2

rax = sub_142bd9f90(&arg1[0xb], rdi_1, &arg_8)

if (rax != 0)
    arg1[1].d = rax
