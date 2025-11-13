// 函数: sub_1424c9020
// 地址: 0x1424c9020
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg4

if (arg4 != 0)
    int64_t* rdi_1 = arg3 - arg2
    void* rbx_1 = arg2 + 0x20
    int32_t i
    
    do
        *(rbx_1 - 0x20) = *(rdi_1 + rbx_1 - 0x20)
        sub_140627710(rbx_1 - 0x18, &rdi_1[-3] + rbx_1)
        *rbx_1 = *(rdi_1 + rbx_1)
        rbx_1 += 0x28
        i = i_1
        i_1 -= 1
    while (i != 1)

int64_t result
result.b = 1
return result
