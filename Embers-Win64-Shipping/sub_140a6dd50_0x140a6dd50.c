// 函数: sub_140a6dd50
// 地址: 0x140a6dd50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rax = j_sub_140a82f30(0xd0)
int64_t* rbx = rax

if (rax == 0)
    rbx = nullptr
else
    *rbx = *arg2
    *arg2 = 0
    __builtin_memset(&rbx[1], 0, 0x20)
    int64_t* rcx = *rbx
    (*(*rcx + 0x28))(rcx, &rbx[5])
    rbx[7] = 0
    rbx[8] = 0
    int64_t* rcx_1 = *rbx
    (*(*rcx_1 + 0x38))(rcx_1, &rbx[9])
    int64_t* rcx_2 = *rbx
    (*(*rcx_2 + 0x40))(rcx_2, &rbx[0xb])
    int64_t* rcx_3 = *rbx
    (*(*rcx_3 + 0x48))(rcx_3, &rbx[0xd])
    rbx[0xf] = 0
    rbx[0x10] = 0
    int64_t* rcx_4 = *rbx
    (*(*rcx_4 + 0x60))(rcx_4, &rbx[0x11])
    rbx[0x13] = 0
    rbx[0x14] = 0
    int64_t* rcx_5 = *rbx
    (*(*rcx_5 + 0x68))(rcx_5, &rbx[0x15])
    int64_t* rcx_6 = *rbx
    (*(*rcx_6 + 0x70))(rcx_6, &rbx[0x17])
    int64_t* rcx_7 = *rbx
    char rax_10 = (*(*rcx_7 + 0x78))(rcx_7)
    int64_t var_18 = 0
    rbx[0x19].b = rax_10
    int64_t var_10_1 = 0
    sub_140a84ed0(rbx, &var_18, 1)

void*** rax_11 = j_sub_140a82f30(0x18)

if (rax_11 == 0)
    rax_11 = nullptr
else
    rax_11[1].d = 1
    *rax_11 = &data_142e63360
    *(rax_11 + 0xc) = 1
    rax_11[2] = rbx

*arg1 = rbx
arg1[1] = rax_11
return arg1
