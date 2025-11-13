// 函数: sub_1406883e0
// 地址: 0x1406883e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rax = j_sub_140a82f30(0x3d8)
void*** rbx = rax

if (rax == 0)
    rbx = nullptr
else
    rax[1].d = 1
    *(rax + 0xc) = 1
    *rbx = &data_142d8c570
    
    if (rbx != -0x10)
        sub_140f20750(&rbx[2])

arg1[1] = rbx
*arg1 = &rbx[2]
sub_14065fa30(arg1, &rbx[2])
void* rcx_2 = *arg1
arg1[2] = arg5
int64_t var_18 = 0x3c8
sub_140e23ed0(rcx_2, arg2)
return arg1
