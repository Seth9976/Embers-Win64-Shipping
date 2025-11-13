// 函数: sub_141ae75b0
// 地址: 0x141ae75b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg4

if (arg4 != 0)
    int128_t* rdi_1 = arg3 - arg2
    void* rbx_1 = arg2 + 0x30
    int32_t i
    
    do
        *(rbx_1 - 0x30) = *(rbx_1 + rdi_1 - 0x30)
        *(rbx_1 - 0x20) = *(rbx_1 + rdi_1 - 0x20)
        *(rbx_1 - 0x10) = *(rdi_1 + rbx_1 - 0x10)
        *rbx_1 = *(rdi_1 + rbx_1)
        *(rbx_1 + 0x10) = *(rbx_1 + rdi_1 + 0x10)
        *(rbx_1 + 0x20) = *(rdi_1 + rbx_1 + 0x20)
        *(rbx_1 + 0x30) = *(rdi_1 + rbx_1 + 0x30)
        *(rbx_1 + 0x40) = *(rbx_1 + rdi_1 + 0x40)
        *(rbx_1 + 0x44) = *(rbx_1 + rdi_1 + 0x44)
        *(rbx_1 + 0x4c) = *(rbx_1 + rdi_1 + 0x4c)
        *(rbx_1 + 0x50) = *(rbx_1 + rdi_1 + 0x50)
        *(rbx_1 + 0x54) = *(rbx_1 + rdi_1 + 0x54)
        *(rbx_1 + 0x58) = *(rbx_1 + rdi_1 + 0x58)
        *(rbx_1 + 0x5c) = *(rbx_1 + rdi_1 + 0x5c)
        *(rbx_1 + 0x60) = *(rbx_1 + rdi_1 + 0x60)
        *(rbx_1 + 0x64) = *(rbx_1 + rdi_1 + 0x64)
        sub_141ae65e0(rbx_1 + 0x68, rdi_1 + 0x68 + rbx_1)
        *(rbx_1 + 0xf0) = *(rbx_1 + rdi_1 + 0xf0)
        *(rbx_1 + 0xf4) = *(rbx_1 + rdi_1 + 0xf4)
        *(rbx_1 + 0xf8) = *(rbx_1 + rdi_1 + 0xf8)
        rbx_1 += 0x130
        i = i_1
        i_1 -= 1
    while (i != 1)

return 1
