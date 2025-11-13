// 函数: sub_14227a2a0
// 地址: 0x14227a2a0
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
(*(*rbx_1 + 0x60))(rbx_1, &arg_8)
char rax_3 = arg_8

if (arg2 == 0)
    rax_3 &= 0xfb
else
    rax_3 |= 4

arg_8 = rax_3
char arg_18 = rax_3
(*(*rbx_1 + 0x58))(rbx_1, &arg_18)
