// 函数: sub_140f95f40
// 地址: 0x140f95f40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rax = j_sub_140a82f30(0x788)
void*** rbx = rax

if (rax == 0)
    rbx = nullptr
else
    rax[1].d = 1
    *(rax + 0xc) = 1
    *rbx = &data_142ef17f0
    
    if (rbx != -0x10)
        sub_140f98820(&rbx[2], 0)

*arg1 = &rbx[2]
arg1[1] = rbx
sub_140918950(arg1, &rbx[2])
void* rcx_2 = *arg1
arg1[2] = arg5
int64_t var_18 = 0x778
sub_140e23ed0(rcx_2, arg2)
return arg1
