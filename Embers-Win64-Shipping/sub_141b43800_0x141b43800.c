// 函数: sub_141b43800
// 地址: 0x141b43800
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg4

if (arg4 != 0)
    int32_t* rdi_1 = arg3 - arg2
    void* rbx_1 = arg2 + 0xc
    int32_t i
    
    do
        *(rbx_1 - 0xc) = *(rdi_1 + rbx_1 - 0xc)
        *(rbx_1 - 4) = *(rdi_1 + rbx_1 - 4)
        *rbx_1 = *(rdi_1 + rbx_1)
        *(rbx_1 + 4) = *(rdi_1 + rbx_1 + 4)
        *(rbx_1 + 8) = *(rdi_1 + rbx_1 + 8)
        *(rbx_1 + 0xc) ^= (*(rdi_1 + rbx_1 + 0xc) ^ *(rbx_1 + 0xc)) & 1
        *(rbx_1 + 0x10) = *(rdi_1 + rbx_1 + 0x10)
        sub_1405af700(rbx_1 + 0x1c, &rdi_1[7] + rbx_1)
        *(rbx_1 + 0xbc) = *(rdi_1 + rbx_1 + 0xbc)
        *(rbx_1 + 0xbd) = *(rdi_1 + rbx_1 + 0xbd)
        *(rbx_1 + 0xc0) = *(rdi_1 + rbx_1 + 0xc0)
        *(rbx_1 + 0xc4) = *(rdi_1 + rbx_1 + 0xc4)
        rbx_1 += 0xd8
        i = i_1
        i_1 -= 1
    while (i != 1)

int32_t result
result.b = 1
return result
