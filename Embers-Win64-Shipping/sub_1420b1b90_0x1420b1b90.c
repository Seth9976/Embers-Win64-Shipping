// 函数: sub_1420b1b90
// 地址: 0x1420b1b90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t var_28 = zx.o(0)
int64_t var_18
sub_140aa00e0(arg1, arg2, 0, sub_140ab09d0(&var_18), &var_28)
int64_t rcx_2 = var_18

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

int64_t* rbx_1 = var_28:8.q

if (rbx_1 == 0)
    return arg1

rbx_1[1].d -= 1

if (rbx_1[1].d == 1)
    (**rbx_1)(rbx_1)
    int32_t rdi_1 = *(rbx_1 + 0xc)
    *(rbx_1 + 0xc) -= 1
    
    if (rdi_1 == 1)
        (*(*rbx_1 + 8))(rbx_1, zx.q(rdi_1))

return arg1
