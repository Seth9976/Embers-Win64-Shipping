// 函数: sub_1424a3600
// 地址: 0x1424a3600
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg4

if (arg4 != 0)
    void* rdi_1 = arg3 - arg2
    void* rbx_1 = arg2 + 0x18
    int32_t i
    
    do
        *(rbx_1 - 0x18) = *(rdi_1 + rbx_1 - 0x18)
        *(rbx_1 - 0x10) = *(rdi_1 + rbx_1 - 0x10)
        *(rbx_1 - 0xc) = *(rdi_1 + rbx_1 - 0xc)
        *(rbx_1 - 4) = *(rdi_1 + rbx_1 - 4)
        sub_140597df0(rbx_1, rdi_1 + rbx_1)
        rbx_1 += 0x28
        i = i_1
        i_1 -= 1
    while (i != 1)

int64_t* result
result.b = 1
return result
