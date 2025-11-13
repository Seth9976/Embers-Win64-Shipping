// 函数: sub_14087b500
// 地址: 0x14087b500
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg4

if (arg4 != 0)
    int32_t* rdi_1 = arg3 - arg2
    void* rbx_1 = arg2 + 0x28
    int32_t i
    
    do
        *(rbx_1 - 0x28) = *(rdi_1 + rbx_1 - 0x28)
        *(rbx_1 - 0x18) = *(rdi_1 + rbx_1 - 0x18)
        sub_14081d8c0(rbx_1 - 0x10, &rdi_1[-4] + rbx_1)
        *rbx_1 = *(rdi_1 + rbx_1)
        *(rbx_1 + 4) = *(rdi_1 + rbx_1 + 4)
        rbx_1 += 0x30
        i = i_1
        i_1 -= 1
    while (i != 1)

int32_t result
result.b = 1
return result
