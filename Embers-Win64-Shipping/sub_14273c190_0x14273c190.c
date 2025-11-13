// 函数: sub_14273c190
// 地址: 0x14273c190
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg4

if (arg4 != 0)
    int64_t* rdi_1 = arg3 - arg2
    void* rbx_1 = arg2 + 0x10
    int32_t i
    
    do
        *(rbx_1 - 0x10) = *(rdi_1 + rbx_1 - 0x10)
        *(rbx_1 - 8) = *(rdi_1 + rbx_1 - 8)
        *rbx_1 = *(rdi_1 + rbx_1)
        sub_1405cd980(rbx_1 + 8, &rdi_1[1] + rbx_1)
        rbx_1 += 0x68
        i = i_1
        i_1 -= 1
    while (i != 1)

int64_t* result
result.b = 1
return result
