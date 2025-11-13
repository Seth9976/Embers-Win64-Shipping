// 函数: sub_141cbc080
// 地址: 0x141cbc080
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg4

if (arg4 != 0)
    char* rdi_1 = arg3 - arg2
    void* rbx_1 = arg2 + 0x14
    int32_t i
    
    do
        sub_140597df0(rbx_1 - 0x14, &rdi_1[-0x14] + rbx_1)
        *(rbx_1 - 4) = *(rdi_1 + rbx_1 - 4)
        *rbx_1 = *(rdi_1 + rbx_1)
        *(rbx_1 + 4) = *(rdi_1 + rbx_1 + 4)
        sub_140597df0(rbx_1 + 0x14, &rdi_1[0x14] + rbx_1)
        *(rbx_1 + 0x24) = *(rdi_1 + rbx_1 + 0x24)
        *(rbx_1 + 0x34) = *(rdi_1 + rbx_1 + 0x34)
        rbx_1 += 0x50
        i = i_1
        i_1 -= 1
    while (i != 1)

int32_t result
result.b = 1
return result
