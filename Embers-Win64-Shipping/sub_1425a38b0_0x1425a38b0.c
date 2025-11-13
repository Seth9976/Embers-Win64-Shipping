// 函数: sub_1425a38b0
// 地址: 0x1425a38b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg4

if (arg4 != 0)
    int32_t* rdi_1 = arg3 - arg2
    void* rbx_1 = arg2 + 0x10
    int32_t i
    
    do
        *(rbx_1 - 0x10) = *(rdi_1 + rbx_1 - 0x10)
        *(rbx_1 - 8) = *(rdi_1 + rbx_1 - 8)
        *rbx_1 = *(rdi_1 + rbx_1)
        *(rbx_1 + 4) = *(rdi_1 + rbx_1 + 4)
        *(rbx_1 + 8) = *(rdi_1 + rbx_1 + 8)
        *(rbx_1 + 0xc) = *(rdi_1 + rbx_1 + 0xc)
        *(rbx_1 + 0x10) = *(rdi_1 + rbx_1 + 0x10)
        sub_141ae65e0(rbx_1 + 0x18, &rdi_1[6] + rbx_1)
        rbx_1 += 0xb0
        i = i_1
        i_1 -= 1
    while (i != 1)

void* result
result.b = 1
return result
