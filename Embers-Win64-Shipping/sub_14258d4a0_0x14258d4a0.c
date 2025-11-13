// 函数: sub_14258d4a0
// 地址: 0x14258d4a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg4

if (arg4 != 0)
    int32_t* rdi_1 = arg3 - arg2
    void* rbx_1 = arg2 + 0x38
    int32_t i
    
    do
        *(rbx_1 - 0x38) = *(rdi_1 + rbx_1 - 0x38)
        *(rbx_1 - 0x30) = *(rdi_1 + rbx_1 - 0x30)
        *(rbx_1 - 0x2c) = *(rdi_1 + rbx_1 - 0x2c)
        sub_140597df0(rbx_1 - 0x28, &rdi_1[-0xa] + rbx_1)
        *(rbx_1 - 0x18) = *(rdi_1 + rbx_1 - 0x18)
        *(rbx_1 - 0x14) = *(rdi_1 + rbx_1 - 0x14)
        *(rbx_1 - 0x10) = *(rdi_1 + rbx_1 - 0x10)
        *(rbx_1 - 8) = *(rdi_1 + rbx_1 - 8)
        *rbx_1 = *(rdi_1 + rbx_1)
        *(rbx_1 + 8) = *(rdi_1 + rbx_1 + 8)
        sub_140597df0(rbx_1 + 0x10, &rdi_1[4] + rbx_1)
        rbx_1 += 0x58
        i = i_1
        i_1 -= 1
    while (i != 1)

int64_t* result
result.b = 1
return result
