// 函数: sub_1418e6370
// 地址: 0x1418e6370
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* var_58 = arg8
void* var_60 = arg6
void* var_68 = arg5
int64_t var_38
sub_141972960(&var_38, arg3, arg4, arg7)
int64_t rax = var_38

if (rax == 0)
    void*** rax_1 = j_sub_140a82f30(0x58)
    void*** rdi_1 = rax_1
    
    if (rax_1 == 0)
        rdi_1 = nullptr
    else
        *rdi_1 = &data_142d3ff08
        rdi_1[1].d = 0
        *rdi_1 = &data_142feee60
        *(rdi_1 + 0xc) = 0
        rdi_1[2].w = 0x100
        sub_141960d80(&rdi_1[3], arg3, arg4, arg7, arg5, arg6, arg8, rdi_1, 0)
        sub_1419661d0(&rdi_1[3])
    
    *arg2 = rdi_1
    
    if (rdi_1 != 0)
        rdi_1[1].d += 1
    
    sub_14081c9d0(&var_38)
else
    *arg2 = rax
    var_38 = 0
    sub_14081c9d0(&var_38)

return arg2
