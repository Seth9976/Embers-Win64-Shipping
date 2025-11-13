// 函数: sub_1421e1b50
// 地址: 0x1421e1b50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** result_1 = j_sub_140a82f30(0x178)
void*** result = result_1
int32_t rdi_1

if (result_1 == 0)
    rdi_1 = 0
    result = nullptr
else
    sub_1421d73b0(result_1, 3, arg2)
    rdi_1 = 0
    *result = &data_1432f70a0
    result[0x2a].d = 0
    result[0x2b] = 0
    result[0x2c].d = 0
    result[0x2d] = 0
    result[0x2e].w = 0x100
    *(result + 0x174) = 0

*(result + 0x144) = 0
void* rcx_2 = *((*(*arg1 + 0x60))(arg1) + 0x68)
int32_t rax_2

if ((*(rcx_2 + 0x28) & 1) == 0)
    rax_2 = 4
else
    rax_2 = *(rcx_2 + 4)

result[0x2a].d = rax_2
char rax_3 = (arg1[5].d).b

if ((rax_3 & 1) != 0)
    rdi_1 = (*(*arg1 + 0x58))(arg1)
    rax_3 = arg1[5].b

void** rdx = *result
*(result + 0x171) = rax_3 & 1
*(result + 0x174) = rdi_1
rdx[5](result, rdx)
return result
