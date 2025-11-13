// 函数: sub_140f96380
// 地址: 0x140f96380
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rax = j_sub_140a82f30(0x328)
void*** rbx = rax

if (rax == 0)
    rbx = nullptr
else
    rax[1].d = 1
    *(rax + 0xc) = 1
    *rbx = &data_142ef1750
    
    if (rbx != -0x10)
        sub_140f20a30(&rbx[2])

*arg1 = &rbx[2]
arg1[1] = rbx
sub_140918950(arg1, &rbx[2])
void* rcx_2 = *arg1
arg1[2] = arg5
int64_t var_18 = 0x318
sub_140e23ed0(rcx_2, arg2)
return arg1
