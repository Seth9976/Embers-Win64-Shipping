// 函数: sub_140d73810
// 地址: 0x140d73810
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *arg1

if (*(rcx + 8) == 0)
    return 

int64_t* rcx_1 = *(rcx + 0x10)

if ((*(*rcx_1 + 0x10))(rcx_1).b == 0)
    return 

int32_t rcx_2 = *arg1[2]
int64_t* rax_4
int64_t r8_1

if (rcx_2 == 0)
    int64_t* rcx_6 = *(*arg1 + 0x10)
    rax_4 = (*(*rcx_6 + 0x98))(rcx_6)
    r8_1 = *rax_4
    (*(r8_1 + 0x30))(rax_4, 0, r8_1)
else if (rcx_2 == 1)
    int64_t* rcx_5 = *(*arg1 + 0x10)
    rax_4 = (*(*rcx_5 + 0x98))(rcx_5)
    r8_1 = *rax_4
    (*(r8_1 + 0x30))(rax_4, 2, r8_1)
else if (rcx_2 == 2)
    int64_t* rcx_4 = *(*arg1 + 0x10)
    rax_4 = (*(*rcx_4 + 0x98))(rcx_4)
    r8_1 = *rax_4
    (*(r8_1 + 0x30))(rax_4, 1, r8_1)
*arg1[1] = 0
