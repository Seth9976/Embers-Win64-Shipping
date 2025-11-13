// 函数: sub_1409871a0
// 地址: 0x1409871a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg4

if (arg4 != 0)
    void* rdi_1 = arg3 - arg2
    void* rbx_1 = arg2 + 0x60
    int32_t i
    
    do
        sub_14094ded0(rbx_1 - 0x60, rdi_1 - 0x60 + rbx_1)
        sub_14094ded0(rbx_1 - 0x38, rdi_1 - 0x38 + rbx_1)
        sub_140597df0(rbx_1 - 0x10, rdi_1 - 0x10 + rbx_1)
        sub_140597df0(rbx_1, rdi_1 + rbx_1)
        *(rbx_1 + 0x10) = *(rdi_1 + rbx_1 + 0x10)
        *(rbx_1 + 0x14) = *(rdi_1 + rbx_1 + 0x14)
        rbx_1 += 0x78
        i = i_1
        i_1 -= 1
    while (i != 1)

int32_t result
result.b = 1
return result
