// 函数: sub_140f5a8c0
// 地址: 0x140f5a8c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rax = j_sub_140a82f30(0x588)
void*** rbx = rax

if (rax == 0)
    rbx = nullptr
else
    rax[1].d = 1
    *(rax + 0xc) = 1
    *rbx = &data_142edf220
    
    if (rbx != -0x10)
        sub_140f1dc90(&rbx[2])

*arg1 = &rbx[2]
arg1[1] = rbx
sub_140e90fe0(arg1, &rbx[2])
return arg1
