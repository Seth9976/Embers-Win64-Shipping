// 函数: sub_1425e1a50
// 地址: 0x1425e1a50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg4

if (arg4 != 0)
    void* rdi_1 = arg3 - arg2
    void* rbx_1 = arg2 + 0x18
    int32_t i
    
    do
        *(rbx_1 - 0x18) = *(rdi_1 + rbx_1 - 0x18)
        sub_140597df0(rbx_1 - 0x10, rdi_1 - 0x10 + rbx_1)
        sub_140597df0(rbx_1, rdi_1 + rbx_1)
        *(rbx_1 + 0x10) = *(rdi_1 + rbx_1 + 0x10)
        sub_140597df0(rbx_1 + 0x20, rdi_1 + 0x20 + rbx_1)
        sub_140597df0(rbx_1 + 0x30, rdi_1 + 0x30 + rbx_1)
        *(rbx_1 + 0x40) = *(rdi_1 + rbx_1 + 0x40)
        sub_140597df0(rbx_1 + 0x50, rdi_1 + 0x50 + rbx_1)
        sub_140597df0(rbx_1 + 0x60, rdi_1 + 0x60 + rbx_1)
        *(rbx_1 + 0x70) = *(rdi_1 + rbx_1 + 0x70)
        rbx_1 += 0x90
        i = i_1
        i_1 -= 1
    while (i != 1)

return 1
