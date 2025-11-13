// 函数: sub_140d753b0
// 地址: 0x140d753b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *arg1

if (*(rcx + 8) == 0)
    return 

int64_t* rcx_1 = *(rcx + 0x10)

if ((*(*rcx_1 + 0x10))(rcx_1).b == 0)
    return 

int64_t* rcx_2 = *(*arg1 + 0x10)
int64_t* rax_4 = (*(*rcx_2 + 0xa8))(rcx_2)
int16_t* var_18
(*(*rax_4 + 0x38))(rax_4, sub_140a31300(&var_18, *arg1[2], 1))
int16_t* rcx_6 = var_18

if (rcx_6 != 0)
    sub_140a74f90(rcx_6)

*arg1[1] = 0
