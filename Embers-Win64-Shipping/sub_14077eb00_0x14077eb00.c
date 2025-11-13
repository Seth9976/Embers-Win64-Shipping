// 函数: sub_14077eb00
// 地址: 0x14077eb00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140745800(arg1)
*arg1 = &data_142daa6b0
arg1[7] = sub_1424a60f0()
void*** rax_1 = j_sub_140a82f30(0xc8)
void*** rdi = rax_1

if (rax_1 == 0)
    rdi = nullptr
else
    memset(rax_1, 0, 0xc8)
    sub_140744780(rdi)
    *rdi = &data_142da8450

int64_t* rcx_2 = arg1[5]

if (rcx_2 != rdi)
    arg1[5] = rdi
    
    if (rcx_2 != 0)
        (**rcx_2)(rcx_2, 1)

return arg1
