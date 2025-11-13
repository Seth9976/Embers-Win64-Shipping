// 函数: sub_142546850
// 地址: 0x142546850
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg4

if (arg4 != 0)
    int64_t* rdi_1 = arg3 - arg2
    void* rbx_1 = arg2 + 0x18
    int32_t i
    
    do
        *(rbx_1 - 0x18) = *(rdi_1 + rbx_1 - 0x18)
        sub_140597df0(rbx_1 - 0x10, &rdi_1[-2] + rbx_1)
        *rbx_1 = *(rdi_1 + rbx_1)
        *(rbx_1 + 8) = *(rdi_1 + rbx_1 + 8)
        *(rbx_1 + 0x18) = *(rdi_1 + rbx_1 + 0x18)
        *(rbx_1 + 0x19) = *(rdi_1 + rbx_1 + 0x19)
        rbx_1 += 0x38
        i = i_1
        i_1 -= 1
    while (i != 1)

return 1
