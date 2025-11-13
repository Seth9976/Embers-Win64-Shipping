// 函数: sub_140e913b0
// 地址: 0x140e913b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rax = j_sub_140a82f30(0x6b0)
void*** rbx = rax

if (rax == 0)
    rbx = nullptr
else
    rax[1].d = 1
    *(rax + 0xc) = 1
    *rbx = &data_142edf1b0
    
    if (rbx != -0x10)
        sub_140ee3660(&rbx[2])

*arg1 = &rbx[2]
arg1[1] = rbx
sub_140918950(arg1, &rbx[2])
void* rcx_2 = *arg1
arg1[2] = arg5
int64_t var_18 = 0x6a0
sub_140e23ed0(rcx_2, arg2)
return arg1
