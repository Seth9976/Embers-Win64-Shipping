// 函数: sub_14180b0d0
// 地址: 0x14180b0d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg3
arg1[1].d = arg3

if (arg3 == 0 && arg5 == 0 && arg4 == 0)
    *(arg1 + 0xc) = arg4
    return arg5

int32_t rax_1 = sub_1405a4b40(arg1, arg3 + arg5, arg4)
void* rdi_1 = *arg1

if (i_1 != 0)
    int64_t* rbx_1 = arg2 + 0x20
    int32_t i
    
    do
        sub_140596d10(rdi_1, &rbx_1[-4])
        sub_140596d10(rdi_1 + 0x10, &rbx_1[-2])
        int64_t rax_2 = *rbx_1
        rbx_1 = &rbx_1[6]
        *(rdi_1 + 0x20) = rax_2
        *(rdi_1 + 0x28) = rbx_1[-5].b
        rax_1 = *(rbx_1 - 0x24)
        *(rdi_1 + 0x2c) = rax_1
        rdi_1 += 0x30
        i = i_1
        i_1 -= 1
    while (i != 1)

return rax_1
