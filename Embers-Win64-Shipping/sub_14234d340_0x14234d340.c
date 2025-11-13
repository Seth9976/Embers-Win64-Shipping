// 函数: sub_14234d340
// 地址: 0x14234d340
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg3
arg1[1].d = arg3

if (arg3 == 0 && arg5 == 0 && arg4 == 0)
    *(arg1 + 0xc) = arg4
    return arg5

int64_t rax_1 = sub_140a05d20(arg1, arg3 + arg5, arg4)
char* rdi_1 = *arg1

if (i_1 != 0)
    void* rbx_1 = arg2 + 8
    int32_t i
    
    do
        *rdi_1 = *(rbx_1 - 8)
        *(rdi_1 + 8) = *rbx_1
        *(rdi_1 + 0x10) = *(rbx_1 + 8)
        *(rdi_1 + 0x14) = *(rbx_1 + 0xc)
        *(rdi_1 + 0x18) = *(rbx_1 + 0x10)
        *(rdi_1 + 0x1c) = *(rbx_1 + 0x14)
        *(rdi_1 + 0x20) = *(rbx_1 + 0x18)
        sub_141adec50(&rdi_1[0x28], rbx_1 + 0x20)
        rax_1 = *(rbx_1 + 0xa0)
        rbx_1 += 0xb0
        *(rdi_1 + 0xa8) = rax_1
        rdi_1 = &rdi_1[0xb0]
        i = i_1
        i_1 -= 1
    while (i != 1)

return rax_1
