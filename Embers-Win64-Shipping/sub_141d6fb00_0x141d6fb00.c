// 函数: sub_141d6fb00
// 地址: 0x141d6fb00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg3
arg1[1].d = arg3

if (arg3 == 0 && arg5 == 0 && arg4 == 0)
    *(arg1 + 0xc) = arg4
    return arg5

int64_t* rax_1 = sub_140874c00(arg1, arg3 + arg5, arg4)
void* rdi_1 = *arg1

if (i_1 != 0)
    int64_t* rbx_1 = arg2 + 0x10
    int32_t i
    
    do
        sub_140596d10(rdi_1, &rbx_1[-2])
        *(rdi_1 + 0x10) = *rbx_1
        sub_140596d10(rdi_1 + 0x18, &rbx_1[1])
        rax_1 = sub_140596d10(rdi_1 + 0x28, &rbx_1[3])
        rdi_1 += 0x38
        rbx_1 = &rbx_1[7]
        i = i_1
        i_1 -= 1
    while (i != 1)

return rax_1
