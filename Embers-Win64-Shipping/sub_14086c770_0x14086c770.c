// 函数: sub_14086c770
// 地址: 0x14086c770
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg4

if (arg4 != 0)
    char* rdi_1 = arg3 - arg2
    void* rbx_1 = arg2 + 0x10
    int32_t i
    
    do
        *(rbx_1 - 8) = *(rdi_1 + rbx_1 - 8)
        *rbx_1 = *(rdi_1 + rbx_1)
        *(rbx_1 + 4) = *(rdi_1 + rbx_1 + 4)
        sub_140747710(rbx_1 + 0x10, &rdi_1[0x10] + rbx_1)
        sub_14086c240(rbx_1 + 0x40, &rdi_1[0x40] + rbx_1)
        *(rbx_1 + 0x50) = *(rdi_1 + rbx_1 + 0x50)
        *(rbx_1 + 0x51) = *(rdi_1 + rbx_1 + 0x51)
        sub_14081d8c0(rbx_1 + 0x58, &rdi_1[0x58] + rbx_1)
        sub_141f98dc0(rbx_1 + 0x68)
        rbx_1 += 0xd8
        i = i_1
        i_1 -= 1
    while (i != 1)

int64_t result
result.b = 1
return result
