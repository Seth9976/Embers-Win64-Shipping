// 函数: sub_141b433d0
// 地址: 0x141b433d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg4

if (arg4 != 0)
    int64_t* rdi_1 = arg3 - arg2
    void* rbx_1 = arg2 + 0x38
    int32_t i
    
    do
        *(rbx_1 - 0x30) = *(rdi_1 + rbx_1 - 0x30)
        *(rbx_1 - 0x28) = *(rdi_1 + rbx_1 - 0x28)
        *(rbx_1 - 0x24) = *(rdi_1 + rbx_1 - 0x24)
        *(rbx_1 - 0x18) = *(rdi_1 + rbx_1 - 0x18)
        sub_140597df0(rbx_1 - 0x10, &rdi_1[-2] + rbx_1)
        *rbx_1 = *(rdi_1 + rbx_1)
        *(rbx_1 + 8) = *(rdi_1 + rbx_1 + 8)
        sub_141b37e50(rbx_1 + 0x10, &rdi_1[2] + rbx_1)
        rbx_1 += 0x698
        i = i_1
        i_1 -= 1
    while (i != 1)

void* result
result.b = 1
return result
