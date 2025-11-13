// 函数: sub_141ae0b70
// 地址: 0x141ae0b70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg4

if (arg4 != 0)
    void* rdi_1 = arg3 - arg2
    void* rbx_1 = arg2 + 0x10
    int32_t i
    
    do
        *(rbx_1 - 8) = *(rdi_1 + rbx_1 - 8)
        sub_1405b0be0(rbx_1, rdi_1 + rbx_1)
        sub_140627690(rbx_1 + 0x10, rdi_1 + 0x10 + rbx_1)
        sub_140627690(rbx_1 + 0x20, rdi_1 + 0x20 + rbx_1)
        *(rbx_1 + 0x30) = *(rdi_1 + rbx_1 + 0x30)
        *(rbx_1 + 0x38) = *(rdi_1 + rbx_1 + 0x38)
        *(rbx_1 + 0x39) = *(rdi_1 + rbx_1 + 0x39)
        rbx_1 += 0x50
        i = i_1
        i_1 -= 1
    while (i != 1)

return 1
