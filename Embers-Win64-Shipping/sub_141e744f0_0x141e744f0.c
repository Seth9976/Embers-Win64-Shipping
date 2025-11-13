// 函数: sub_141e744f0
// 地址: 0x141e744f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* arg_10 = arg2
char arg_8 = 0
void arg_18
int32_t* rax = sub_141e6db90(arg1 + 0x450, &arg_18, &arg_10, &arg_8)

if (arg_8 != 0)
    return rax

int64_t rdx_1 = *(arg2 + 0x28)

if (rdx_1 != 0)
    sub_1407c23d0(arg1 + 0x4c8, rdx_1)

int32_t* rax_1 = sub_1405ba450(arg1 + 0x3f0, &arg_8, arg2)

if (*rax_1 == 0xffffffff)
    return sub_142372980(arg1 + 0x5c8, arg2)

*(arg2 + 0x183) |= 0x10
return rax_1
