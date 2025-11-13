// 函数: sub_14226c680
// 地址: 0x14226c680
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_68
int64_t rax_1 = __security_cookie ^ &var_68
*arg1 = 0
int64_t* rcx = *arg2
void var_40
int128_t* rax_3 = (*(*rcx + 0x40))(rcx, &var_40)
int128_t* rax_4 = j_sub_140a82f30(0x30)
int128_t* rbx = rax_4

if (rax_4 == 0)
    rbx = nullptr
else
    *rax_4 = *rax_3
    rax_4[1] = rax_3[1]
    rax_4[2] = rax_3[2]

void var_48

if (arg1 != &var_48)
    int64_t rcx_1 = *arg1
    *arg1 = rbx
    rbx = nullptr
    j_sub_140a74f90(rcx_1)

j_sub_140a74f90(rbx)
__security_check_cookie(rax_1 ^ &var_68)
return arg1
