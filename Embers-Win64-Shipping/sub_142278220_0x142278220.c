// 函数: sub_142278220
// 地址: 0x142278220
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi = *arg1

if (rdi == 0)
    return 

int64_t* rbx_1 = nullptr

if ((*(*rdi + 0x20))(rdi, "PxRigidBody") != 0)
    rbx_1 = rdi

if (rbx_1 == 0)
    return 

char arg_8
(*(*rbx_1 + 0x178))(rbx_1, &arg_8)
char rax_3 = arg_8

if (arg2 != 0)
    if ((rax_3 & 1) == 0)
        rax_3 |= 4
    else
        rax_3 |= 0x20
else if ((rax_3 & 0x20) == 0)
    rax_3 &= 0xfb
else
    rax_3 &= 0xdb

arg_8 = rax_3
char arg_18 = rax_3
(*(*rbx_1 + 0x170))(rbx_1, &arg_18)
