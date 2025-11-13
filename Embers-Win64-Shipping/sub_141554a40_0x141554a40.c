// 函数: sub_141554a40
// 地址: 0x141554a40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg3
arg1[1].d = i_1

if (arg3 == 0 && arg5 == 0 && arg4 == 0)
    *(arg1 + 0xc) = arg4
    return arg5

void* rax_1 = sub_14174fdd0(arg1, arg3 + arg5, arg4)
int64_t* r8_1 = *arg1

if (i_1 != 0)
    void* rdx_1 = &r8_1[3]
    rax_1 = arg2 + 0x18
    int32_t i
    
    do
        rdx_1 += 0x3c
        *r8_1 = *(rax_1 - 0x18)
        r8_1 += 0x3c
        int32_t rcx = *(rax_1 - 0x10)
        rax_1 += 0x3c
        *(r8_1 - 0x34) = rcx
        *(rdx_1 - 0x48) = *(rax_1 - 0x48)
        *(rdx_1 - 0x40) = *(rax_1 - 0x40)
        *(rdx_1 - 0x3c) = *(rax_1 - 0x3c)
        *(rdx_1 - 0x34) = *(rax_1 - 0x34)
        *(rdx_1 - 0x30) = *(rax_1 - 0x30)
        *(rdx_1 - 0x28) = *(rax_1 - 0x28)
        *(rdx_1 - 0x24) = *(rax_1 - 0x24)
        *(rdx_1 - 0x1c) = *(rax_1 - 0x1c)
        i = i_1
        i_1 -= 1
    while (i != 1)

return rax_1
