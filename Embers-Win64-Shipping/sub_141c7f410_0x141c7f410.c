// 函数: sub_141c7f410
// 地址: 0x141c7f410
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rax = j_sub_140a82f30(0xf0)
void*** rdi = rax

if (rax == 0)
    rdi = nullptr
else
    rax[1].d = 1
    *(rax + 0xc) = 1
    *rdi = &data_14320f108
    int128_t var_18 = *arg3
    sub_141c81bf0(&rdi[2], &var_18, arg4, arg5)

void*** var_20 = rdi
void* var_28 = &rdi[2]
sub_141c813a0(&var_28, &rdi[2])
*arg2 = &rdi[2]
arg2[1] = rdi

if (rdi != 0)
    rdi[1].d += 1
    rdi[1].d -= 1
    
    if (rdi[1].d == 1)
        (**rdi)(rdi)
        int32_t rbx_2 = *(rdi + 0xc)
        *(rdi + 0xc) -= 1
        
        if (rbx_2 == 1)
            (*rdi)[1](rdi, zx.q(rbx_2))

return arg2
