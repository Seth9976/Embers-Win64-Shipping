// 函数: sub_141ae10f0
// 地址: 0x141ae10f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg4

if (arg4 != 0)
    int64_t* rdi_1 = arg3 - arg2
    void* rbx_1 = arg2 + 0x38
    int32_t i
    
    do
        *(rbx_1 - 0x30) = *(rdi_1 + rbx_1 - 0x30)
        *(rbx_1 - 0x28) = *(rdi_1 + rbx_1 - 0x28)
        sub_140780b40(rbx_1 - 0x20, &rdi_1[-4] + rbx_1)
        sub_140780c40(rbx_1 - 0x10, &rdi_1[-2] + rbx_1)
        *rbx_1 = *(rdi_1 + rbx_1)
        *(rbx_1 + 8) = *(rdi_1 + rbx_1 + 8)
        *(rbx_1 + 0x10) = *(rdi_1 + rbx_1 + 0x10)
        *(rbx_1 + 0x18) = *(rdi_1 + rbx_1 + 0x18)
        sub_14090a0d0(rbx_1 + 0x20, &rdi_1[4] + rbx_1)
        sub_140780c40(rbx_1 + 0x30, &rdi_1[6] + rbx_1)
        *(rbx_1 + 0x40) = *(rdi_1 + rbx_1 + 0x40)
        *(rbx_1 + 0x48) = *(rdi_1 + rbx_1 + 0x48)
        *(rbx_1 + 0x50) = *(rdi_1 + rbx_1 + 0x50)
        rbx_1 += 0x90
        i = i_1
        i_1 -= 1
    while (i != 1)

int64_t result
result.b = 1
return result
