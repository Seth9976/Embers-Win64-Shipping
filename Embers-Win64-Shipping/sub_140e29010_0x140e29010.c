// 函数: sub_140e29010
// 地址: 0x140e29010
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg3
arg1[1].d = arg3

if (arg3 == 0 && arg5 == 0 && arg4 == 0)
    *(arg1 + 0xc) = arg4
    return arg5

int64_t rax_1 = sub_1407751d0(arg1, arg3 + arg5, arg4)
int64_t* rsi_1 = *arg1

if (i_1 != 0)
    char* rbx_1 = arg2 + 0x19
    void* rdi_1 = rsi_1 + 0x19
    int32_t i
    
    do
        *rsi_1 = *(rbx_1 - 0x19)
        sub_140596d10(rdi_1 - 0x11, &rbx_1[-0x11])
        rsi_1 = &rsi_1[5]
        *(rdi_1 - 1) = rbx_1[-1]
        rdi_1 += 0x28
        char rax_4 = *rbx_1
        rbx_1 = &rbx_1[0x28]
        *(rdi_1 - 0x28) = rax_4
        *(rdi_1 - 0x25) = *(rbx_1 - 0x25)
        rax_1 = *(rbx_1 - 0x21)
        *(rdi_1 - 0x21) = rax_1
        i = i_1
        i_1 -= 1
    while (i != 1)

return rax_1
