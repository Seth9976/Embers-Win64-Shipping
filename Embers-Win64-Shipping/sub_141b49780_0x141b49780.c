// 函数: sub_141b49780
// 地址: 0x141b49780
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rdi = arg2
int64_t* rax = j_sub_140a82f30(0x30)

if (rax == 0)
    rax = nullptr
else
    *rax = 0
    __builtin_memset(&rax[2], 0, 0x20)
    rax[1].d = 0x3f800000
    *(rax + 0xc) = 0x3f800000

*arg1 = rax

if (rdi == 0)
    void*** rax_1 = j_sub_140a82f30(zx.q((&rdi[0xb]).d))
    
    if (rax_1 == 0)
        rdi = nullptr
    else
        int64_t arg_8 = 0
        rdi = sub_14234f1f0(rax_1, &arg_8, 0, 0)
    
    rax = *arg1

arg1[1] = rdi
rax[2] = rdi
return arg1
