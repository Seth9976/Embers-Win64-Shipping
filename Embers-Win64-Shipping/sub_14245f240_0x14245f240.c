// 函数: sub_14245f240
// 地址: 0x14245f240
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg4

if (arg4 != 0)
    void* rdi_1 = arg3 - arg2
    void* rbx_1 = arg2 + 0x1b0
    int32_t i
    
    do
        *(rbx_1 - 0x1b0) = *(rdi_1 + rbx_1 - 0x1b0)
        *(rbx_1 - 0x1a0) = *(rdi_1 + rbx_1 - 0x1a0)
        sub_14245e6e0(rbx_1 - 0x198, rdi_1 - 0x198 + rbx_1)
        sub_14245e6e0(rbx_1, rdi_1 + rbx_1)
        sub_14245e6e0(rbx_1 + 0x198, rdi_1 + 0x198 + rbx_1)
        rbx_1 += 0x4e0
        i = i_1
        i_1 -= 1
    while (i != 1)

int128_t* result
result.b = 1
return result
