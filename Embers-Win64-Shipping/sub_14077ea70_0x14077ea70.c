// 函数: sub_14077ea70
// 地址: 0x14077ea70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140745800(arg1)
arg1[6].d = 0
*arg1 = &data_142da8110
void*** rax = j_sub_140a82f30(0xc8)
void*** rdi = rax

if (rax == 0)
    rdi = nullptr
else
    memset(rax, 0, 0xc8)
    sub_140744780(rdi)
    *rdi = &data_142da8450

int64_t* rcx_2 = arg1[5]

if (rcx_2 != rdi)
    arg1[5] = rdi
    
    if (rcx_2 != 0)
        (**rcx_2)(rcx_2, 1)

return arg1
