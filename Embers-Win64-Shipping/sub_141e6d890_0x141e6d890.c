// 函数: sub_141e6d890
// 地址: 0x141e6d890
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg3
arg1[1].d = arg3

if (arg3 == 0 && arg5 == 0 && arg4 == 0)
    *(arg1 + 0xc) = arg4
    return arg5

int64_t rax_1 = sub_140976950(arg1, arg3 + arg5, arg4)
int64_t* rdi_1 = *arg1

if (i_1 != 0)
    void* rbx_1 = arg2 + 8
    int32_t i
    
    do
        *rdi_1 = *(rbx_1 - 8)
        rdi_1[1].b = *rbx_1
        *(rdi_1 + 0xc) = *(rbx_1 + 4)
        rdi_1[2].d = *(rbx_1 + 8)
        *(rdi_1 + 0x14) = *(rbx_1 + 0xc)
        rdi_1[3].d = *(rbx_1 + 0x10)
        *(rdi_1 + 0x1c) = *(rbx_1 + 0x14)
        sub_141adec50(&rdi_1[4], rbx_1 + 0x18)
        rax_1 = *(rbx_1 + 0x98)
        rbx_1 += 0xa8
        rdi_1[0x14] = rax_1
        rdi_1 = &rdi_1[0x15]
        i = i_1
        i_1 -= 1
    while (i != 1)

return rax_1
