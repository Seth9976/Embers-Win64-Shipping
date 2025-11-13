// 函数: sub_1408746e0
// 地址: 0x1408746e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg4

if (arg4 != 0)
    void* rdi_1 = arg3 - arg2
    void* rbx_1 = arg2 + 0x28
    int32_t i
    
    do
        *(rbx_1 - 0x28) = *(rdi_1 + rbx_1 - 0x28)
        *(rbx_1 - 0x24) = *(rdi_1 + rbx_1 - 0x24)
        sub_14086c240(rbx_1 - 0x20, rdi_1 - 0x20 + rbx_1)
        sub_14086c240(rbx_1 - 0x10, rdi_1 - 0x10 + rbx_1)
        sub_14086c240(rbx_1, rdi_1 + rbx_1)
        sub_14086c240(rbx_1 + 0x10, rdi_1 + 0x10 + rbx_1)
        rbx_1 += 0x48
        i = i_1
        i_1 -= 1
    while (i != 1)

int64_t* result
result.b = 1
return result
