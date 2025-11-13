// 函数: sub_14273bec0
// 地址: 0x14273bec0
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
        sub_14273bcb0(rbx_1 + 4, &rdi_1[1] + rbx_1)
        rbx_1 += 0x38
        i = i_1
        i_1 -= 1
    while (i != 1)

uint64_t* result
result.b = 1
return result
