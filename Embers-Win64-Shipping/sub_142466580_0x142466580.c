// 函数: sub_142466580
// 地址: 0x142466580
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg4

if (arg4 != 0)
    void* rdi_1 = arg3 - arg2
    void* rbx_1 = arg2 + 0x10
    int32_t i
    
    do
        *(rbx_1 - 8) = *(rdi_1 + rbx_1 - 8)
        sub_140780c40(rbx_1, rdi_1 + rbx_1)
        sub_140780c40(rbx_1 + 0x10, rdi_1 + 0x10 + rbx_1)
        *(rbx_1 + 0x20) = *(rdi_1 + rbx_1 + 0x20)
        sub_140780c40(rbx_1 + 0x28, rdi_1 + 0x28 + rbx_1)
        sub_140780c40(rbx_1 + 0x38, rdi_1 + 0x38 + rbx_1)
        sub_1405b0be0(rbx_1 + 0x48, rdi_1 + 0x48 + rbx_1)
        sub_140780c40(rbx_1 + 0x58, rdi_1 + 0x58 + rbx_1)
        *(rbx_1 + 0x68) = *(rdi_1 + rbx_1 + 0x68)
        *(rbx_1 + 0x70) = *(rdi_1 + rbx_1 + 0x70)
        *(rbx_1 + 0x78) = *(rdi_1 + rbx_1 + 0x78)
        *(rbx_1 + 0x80) = *(rbx_1 + rdi_1 + 0x80)
        *(rbx_1 + 0x84) = *(rbx_1 + rdi_1 + 0x84)
        *(rbx_1 + 0x88) ^= (*(rbx_1 + 0x88) ^ *(rbx_1 + rdi_1 + 0x88)) & 1
        char rax = *(rbx_1 + 0x88)
        *(rbx_1 + 0x88) = ((*(rbx_1 + rdi_1 + 0x88) ^ rax) & 2) ^ rax
        rbx_1 += 0xa0
        i = i_1
        i_1 -= 1
    while (i != 1)

return 1
