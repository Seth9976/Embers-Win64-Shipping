// 函数: sub_142826308
// 地址: 0x142826308
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[1].w = 0
*arg1 = arg3
void** rbx = arg2
int64_t* rcx = arg2

if (arg2[3] u>= 0x10)
    rcx = *arg2

int64_t rsi_1 = sub_14058e700(rcx) + rbx[2]

if (rbx[3] u>= 0x10)
    rbx = *rbx

char* rax_1 = sub_14058e700(rbx)
int64_t r9
r9.b = arg4
__builtin_memset(&arg1[2], 0, 0x18)
sub_142826180(&arg1[2], rax_1, rsi_1)
return arg1
