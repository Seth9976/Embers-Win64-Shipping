// 函数: sub_140698110
// 地址: 0x140698110
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* i = arg1[4]
*arg1 = &data_142d8c610

while (i != 0)
    void* i_2 = i
    i = *(i + 0x18)
    free(*(i_2 + 0x10))
    j_sub_140a74f90(i_2)

j_sub_140a74f90(arg1[5])
void* rbx_1 = arg1[6]

if (rbx_1 != 0)
    free(*(rbx_1 + 8))
    j_sub_140a74f90(rbx_1)

void* rbx_2 = arg1[7]

if (rbx_2 != 0)
    free(*(rbx_2 + 8))
    j_sub_140a74f90(rbx_2)

void* i_1 = arg1[9]

while (i_1 != 0)
    void* i_3 = i_1
    i_1 = *(i_1 + 0x18)
    free(*(i_3 + 0x10))
    j_sub_140a74f90(i_3)

*arg1 = &data_142d8b590

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
