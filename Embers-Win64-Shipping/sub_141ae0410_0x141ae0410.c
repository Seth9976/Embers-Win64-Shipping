// 函数: sub_141ae0410
// 地址: 0x141ae0410
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg4

if (arg4 != 0)
    int128_t* rdi_1 = arg3 - arg2
    void* rbx_1 = arg2 + 0xd8
    int32_t i
    
    do
        sub_141adb020(rbx_1 - 0xd8, rdi_1 - 0xd8 + rbx_1)
        *(rbx_1 - 0x10) = *(rdi_1 + rbx_1 - 0x10)
        *rbx_1 = *(rdi_1 + rbx_1)
        *(rbx_1 + 0x10) = *(rdi_1 + rbx_1 + 0x10)
        *(rbx_1 + 0x20) = *(rdi_1 + rbx_1 + 0x20)
        sub_1405b0be0(rbx_1 + 0x30, &rdi_1[3] + rbx_1)
        *(rbx_1 + 0x40) = *(rdi_1 + rbx_1 + 0x40)
        rbx_1 += 0x120
        i = i_1
        i_1 -= 1
    while (i != 1)

int32_t result
result.b = 1
return result
