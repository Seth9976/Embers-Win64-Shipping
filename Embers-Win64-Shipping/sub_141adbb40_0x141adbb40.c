// 函数: sub_141adbb40
// 地址: 0x141adbb40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg4

if (arg4 != 0)
    int128_t* rdi_1 = arg3 - arg2
    void* rbx_1 = arg2 + 0x10
    int32_t i
    
    do
        *(rbx_1 - 8) = *(rdi_1 + rbx_1 - 8)
        *rbx_1 = *(rdi_1 + rbx_1)
        *(rbx_1 + 0x10) = *(rdi_1 + rbx_1 + 0x10)
        sub_141a91140(rbx_1 + 0x20, &rdi_1[2] + rbx_1)
        sub_141a91140(rbx_1 + 0x30, &rdi_1[3] + rbx_1)
        *(rbx_1 + 0x40) = *(rdi_1 + rbx_1 + 0x40)
        *(rbx_1 + 0x44) = *(rdi_1 + rbx_1 + 0x44)
        *(rbx_1 + 0x48) = *(rdi_1 + rbx_1 + 0x48)
        *(rbx_1 + 0x50) = *(rdi_1 + rbx_1 + 0x50)
        *(rbx_1 + 0x51) = *(rdi_1 + rbx_1 + 0x51)
        rbx_1 += 0x68
        i = i_1
        i_1 -= 1
    while (i != 1)

return 1
