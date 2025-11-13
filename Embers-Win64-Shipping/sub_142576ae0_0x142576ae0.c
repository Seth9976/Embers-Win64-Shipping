// 函数: sub_142576ae0
// 地址: 0x142576ae0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg4

if (arg4 != 0)
    void* rdi_1 = arg3 - arg2
    void* rbx_1 = arg2 + 0x20
    int32_t i
    
    do
        sub_140e997c0(rbx_1 - 0x20, rdi_1 - 0x20 + rbx_1)
        sub_140e997c0(rbx_1 - 0x10, rdi_1 - 0x10 + rbx_1)
        sub_140e997c0(rbx_1, rdi_1 + rbx_1)
        *(rbx_1 + 0x10) = *(rdi_1 + rbx_1 + 0x10)
        *(rbx_1 + 0x14) = *(rdi_1 + rbx_1 + 0x14)
        rbx_1 += 0x38
        i = i_1
        i_1 -= 1
    while (i != 1)

int32_t result
result.b = 1
return result
