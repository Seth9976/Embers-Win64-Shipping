// 函数: sub_142597020
// 地址: 0x142597020
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg4

if (arg4 != 0)
    int64_t* rdi_1 = arg3 - arg2
    void* rbx_1 = arg2 + 0x68
    int32_t i
    
    do
        sub_14090a0d0(rbx_1 - 0x68, &rdi_1[-0xd] + rbx_1)
        sub_14090a0d0(rbx_1 - 0x58, &rdi_1[-0xb] + rbx_1)
        sub_14090a0d0(rbx_1 - 0x48, &rdi_1[-9] + rbx_1)
        sub_142596580(rbx_1 - 0x38, &rdi_1[-7] + rbx_1)
        *(rbx_1 - 8) = *(rdi_1 + rbx_1 - 8)
        *rbx_1 = *(rdi_1 + rbx_1)
        *(rbx_1 + 8) = *(rdi_1 + rbx_1 + 8)
        rbx_1 += 0x78
        i = i_1
        i_1 -= 1
    while (i != 1)

int32_t result
result.b = 1
return result
