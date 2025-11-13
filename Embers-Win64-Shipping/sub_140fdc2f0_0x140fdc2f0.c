// 函数: sub_140fdc2f0
// 地址: 0x140fdc2f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_48
int64_t rax_1 = __security_cookie ^ &var_48
int64_t* rdi = arg1[7]
*arg1 = &data_142ef5a48
arg1[4] = &data_142ef5a50

if (rdi != 0)
    (*(*rdi + 8))(rdi)
    void var_28
    (*(*rdi + 0x50))(rdi, &var_28)
    (*(*rdi + 0x10))(rdi)

int64_t* rcx_3 = arg1[7]

if (rcx_3 != 0)
    int64_t rdx_1 = *rcx_3
    (*(rdx_1 + 0x10))(rcx_3, rdx_1)

arg1[4] = &data_142dd6680
*arg1 = &data_142d3ff08

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

__security_check_cookie(rax_1 ^ &var_48)
return arg1
