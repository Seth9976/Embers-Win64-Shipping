// 函数: sub_14086c820
// 地址: 0x14086c820
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg4

if (arg4 != 0)
    char* rdi_1 = arg3 - arg2
    void* rbx_1 = arg2 + 0x10
    int32_t i
    
    do
        *(rbx_1 - 8) = *(rdi_1 + rbx_1 - 8)
        *rbx_1 = *(rdi_1 + rbx_1)
        *(rbx_1 + 4) = *(rdi_1 + rbx_1 + 4)
        sub_140747710(rbx_1 + 0x10, &rdi_1[0x10] + rbx_1)
        sub_1405af700(rbx_1 + 0x38, &rdi_1[0x38] + rbx_1)
        sub_1405af700(rbx_1 + 0xd8, &rdi_1[0xd8] + rbx_1)
        sub_1405af700(rbx_1 + 0x178, &rdi_1[0x178] + rbx_1)
        sub_1405af700(rbx_1 + 0x218, &rdi_1[0x218] + rbx_1)
        rbx_1 += 0x2c8
        i = i_1
        i_1 -= 1
    while (i != 1)

void* result
result.b = 1
return result
