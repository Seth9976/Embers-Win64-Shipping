// 函数: sub_140916520
// 地址: 0x140916520
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg3
arg1[1].d = arg3

if (arg3 == 0 && arg5 == 0 && arg4 == 0)
    *(arg1 + 0xc) = 0
    return arg5

char rax_1 = sub_1407751d0(arg1, arg3 + arg5, arg4)
char* rbx_1 = *arg1

if (i_1 != 0)
    void* rdi_1 = arg2 + 4
    int32_t i
    
    do
        rax_1 = *(rdi_1 - 4)
        *rbx_1 = rax_1
        *(rbx_1 + 4) = *rdi_1
        *(rbx_1 + 0x18) = 0
        int32_t r14_1 = *(rdi_1 + 0x1c)
        int64_t r12_1 = *(rdi_1 + 0x14)
        *(rbx_1 + 0x20) = r14_1
        
        if (r14_1 != 0)
            sub_1405a4c70(&rbx_1[0x18], r14_1, 0)
            rax_1 = memcpy(*(rbx_1 + 0x18), r12_1, r14_1 * 2)
        else
            *(rbx_1 + 0x24) = 0
        
        rbx_1 = &rbx_1[0x28]
        rdi_1 += 0x28
        i = i_1
        i_1 -= 1
    while (i != 1)

return rax_1
