// 函数: sub_141f131f0
// 地址: 0x141f131f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg2[1].d = 0xffffffff
*(arg2 + 0xc) = 0
arg2[2] = 0
*(arg2 + 0x1c) = 0
arg2[3].d = 0xffffffff
arg2[4].b = 0
*arg2 = &data_1430507f0
sub_141b105d0(arg2)
void* rax = sub_14252eb20()

if (rax != 0)
    sub_140d3a3a0(&arg2[1], rax)
    int32_t rcx_2 = *(rax + 0x5c)
    int32_t rdx_4 = (*(rax + 0x58) - 1 + rcx_2) & not.d(rcx_2 - 1)
    int32_t rax_3 = 1
    
    if (rdx_4 != 0)
        rax_3 = rdx_4
    
    void*** rax_4 = sub_140a82f30(sx.q(rax_3), 0)
    arg2[2] = rax_4
    sub_141f2d8c0(rax_4, arg1)
    *rax_4 = &data_143269c00
    *(rax_4 + 0xb0) = *(arg1 + 0x1c0)
    *(rax_4 + 0xc0) = *(arg1 + 0x1d0)
    *(rax_4 + 0xd0) = *(arg1 + 0x1e0)
    *(rax_4 + 0xe0) = *(arg1 + 0x1f0)
    rax_4[0x1e].d = *(arg1 + 0x234)
    arg2[4].b = 1

return arg2
