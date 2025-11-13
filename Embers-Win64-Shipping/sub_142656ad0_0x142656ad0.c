// 函数: sub_142656ad0
// 地址: 0x142656ad0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg2[1].d = 0xffffffff
void* rsi = nullptr
*(arg2 + 0xc) = 0
arg2[2] = 0
arg2[3].d = 0xffffffff
*(arg2 + 0x1c) = 0
arg2[4].b = 0
*arg2 = &data_1430507f0
sub_141b105d0(arg2)
void* rax = sub_1426a1680()

if (rax != 0)
    sub_140d3a3a0(&arg2[1], rax)
    int32_t rcx_2 = *(rax + 0x5c)
    int32_t rdx_4 = (*(rax + 0x58) - 1 + rcx_2) & not.d(rcx_2 - 1)
    int32_t rax_3 = 1
    
    if (rdx_4 != 0)
        rax_3 = rdx_4
    
    void*** rax_4 = sub_140a82f30(sx.q(rax_3), 0)
    arg2[2] = rax_4
    sub_141eb5100(rax_4, arg1)
    rax_4[0xb].d = 0
    *rax_4 = &data_1434567d8
    arg2[4].b = 1

void* rax_5 = sub_1426a1680()
void* rax_6 = sub_140d3c6e0(&arg2[1])

if (rax_5 != 0)
    int64_t rcx_6 = sx.q(*(rax_5 + 0x38))
    
    if (rcx_6.d s<= *(rax_6 + 0x38) && *(*(rax_6 + 0x30) + (rcx_6 << 3)) == rax_5 + 0x30)
        rsi = arg2[2]

*(rsi + 0x58) = *(arg1 + 0xe8)
return arg2
