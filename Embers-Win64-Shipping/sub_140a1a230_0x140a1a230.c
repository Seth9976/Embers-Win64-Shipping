// 函数: sub_140a1a230
// 地址: 0x140a1a230
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg4

if (arg4 != 0)
    int32_t* rdi_1 = arg3 - arg2
    void* rbx_1 = arg2 + 0x14
    int32_t i
    
    do
        sub_140a19d00(rbx_1 - 0x14, &rdi_1[-5] + rbx_1)
        *(rbx_1 - 4) = *(rdi_1 + rbx_1 - 4)
        *rbx_1 = *(rdi_1 + rbx_1)
        *(rbx_1 + 4) = *(rdi_1 + rbx_1 + 4)
        *(rbx_1 + 8) = *(rdi_1 + rbx_1 + 8)
        *(rbx_1 + 0xc) = *(rdi_1 + rbx_1 + 0xc)
        *(rbx_1 + 0x10) = *(rdi_1 + rbx_1 + 0x10)
        rbx_1 += 0x28
        i = i_1
        i_1 -= 1
    while (i != 1)

int32_t result
result.b = 1
return result
