// 函数: sub_141adfff0
// 地址: 0x141adfff0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg4

if (arg4 != 0)
    int128_t* rdi_1 = arg3 - arg2
    void* rbx_1 = arg2 + 0x20
    int32_t i
    
    do
        *(rbx_1 - 0x20) = *(rdi_1 + rbx_1 - 0x20)
        *(rbx_1 - 0x10) = *(rdi_1 + rbx_1 - 0x10)
        *rbx_1 = *(rdi_1 + rbx_1)
        *(rbx_1 + 0x10) = *(rdi_1 + rbx_1 + 0x10)
        *(rbx_1 + 0x18) = *(rdi_1 + rbx_1 + 0x18)
        *(rbx_1 + 0x1c) = *(rdi_1 + rbx_1 + 0x1c)
        sub_14086c240(rbx_1 + 0x20, &rdi_1[2] + rbx_1)
        sub_140780b40(rbx_1 + 0x30, &rdi_1[3] + rbx_1)
        sub_141adf970(rbx_1 + 0x40, &rdi_1[4] + rbx_1)
        rbx_1 += 0xa0
        i = i_1
        i_1 -= 1
    while (i != 1)

int64_t* result
result.b = 1
return result
