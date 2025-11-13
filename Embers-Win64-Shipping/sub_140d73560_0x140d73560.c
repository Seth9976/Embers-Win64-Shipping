// 函数: sub_140d73560
// 地址: 0x140d73560
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *arg1

if (*(rcx + 8) == 0)
    return 

int64_t* rcx_1 = *(rcx + 0x10)

if ((*(*rcx_1 + 0x10))(rcx_1).b == 0)
    return 

void* rcx_2 = *arg1
int64_t var_18 = *(rcx_2 + 0x10)
void* rax_3 = *(rcx_2 + 0x18)
void* var_10_1 = rax_3

if (rax_3 != 0)
    *(rax_3 + 8) += 1
    rcx_2 = *arg1

int64_t rax_4 = sub_140d7d8b0(*(rcx_2 + 8), &var_18)
int64_t rdx_2

if (rax_4 == 0)
    rdx_2 = 0
else
    rdx_2 = rax_4 + 0x28

**arg1[2] = rdx_2
*arg1[1] = 0
