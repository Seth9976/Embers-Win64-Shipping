// 函数: sub_141af8440
// 地址: 0x141af8440
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_1430507f0
sub_140d3a3a0(&arg1[1], arg2)
arg1[2] = 0
arg1[3].d = 0xffffffff
*(arg1 + 0x1c) = 0
arg1[4].b = 0
int64_t* rax = sub_140d3c6e0(&arg1[1])

if (rax != 0)
    int32_t rdx = *(rax + 0x5c)
    int32_t r9_4 = (rax[0xb].d - 1 + rdx) & not.d(rdx - 1)
    int32_t rcx_4 = 1
    
    if (r9_4 != 0)
        rcx_4 = r9_4
    
    int64_t rax_1 = sub_140a82f30(sx.q(rcx_4), 0, arg3, r9_4)
    arg1[2] = rax_1
    int64_t r9_5 = *rax
    (*(r9_5 + 0x2a0))(rax, rax_1, 1, r9_5)
    arg1[4].b = 1

return arg1
