// 函数: sub_1405e5f00
// 地址: 0x1405e5f00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg4

if (arg4 != 0)
    void* rdi_1 = arg3 - arg2
    void* rbx_1 = arg2 + 0x20
    int32_t i
    
    do
        *(rbx_1 - 0x20) = *(rdi_1 + rbx_1 - 0x20)
        sub_140597df0(rbx_1 - 0x18, rdi_1 - 0x18 + rbx_1)
        *(rbx_1 - 8) = *(rdi_1 + rbx_1 - 8)
        sub_140597df0(rbx_1, rdi_1 + rbx_1)
        sub_140597df0(rbx_1 + 0x10, rdi_1 + 0x10 + rbx_1)
        *(rbx_1 + 0x20) = *(rdi_1 + rbx_1 + 0x20)
        sub_140597df0(rbx_1 + 0x28, rdi_1 + 0x28 + rbx_1)
        rbx_1 += 0x58
        i = i_1
        i_1 -= 1
    while (i != 1)

int64_t* result
result.b = 1
return result
