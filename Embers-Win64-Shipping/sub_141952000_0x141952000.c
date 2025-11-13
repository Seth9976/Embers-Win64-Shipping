// 函数: sub_141952000
// 地址: 0x141952000
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142d3ff08
arg1[1].d = 0
*arg1 = &data_142ff8be8
*(arg1 + 0x34) = arg7
*(arg1 + 0xc) = 0
arg1[2].w = 0x100
arg1[3] = arg2
__builtin_memset(&arg1[4], 0, 0x11)
arg1[7].b = 1
arg1[8] = 0
arg1[0xa].d = 0xffffffff
*(arg1 + 0x54) = 4
arg1[9] = &data_142ff8ba8
arg1[0xb] = arg2
arg1[0xc] = 0
arg1[0xd] = 0
data_143effa40(0)
int64_t* rdi_1 = &arg1[3][0x115]
int64_t rsi = sx.q(rdi_1[1].d)
int32_t rax_1 = (rsi + 1).d
rdi_1[1].d = rax_1

if (rax_1 s> *(rdi_1 + 0xc))
    sub_1405a4d70(rdi_1)

*(*rdi_1 + (rsi << 3)) = arg1
void* rbp = arg1[3][0x2b77]
*(rbp + 0x70) = 1
int64_t* rax_4 = j_sub_140a82f30(0x30)
*rax_4 = arg3
rax_4[3].b = 0
HDC rax_5 = GetDC(arg3)
rax_4[1] = rax_5
sub_141957e70(rax_5)
sub_141955d20(rax_4, 4, 3, *(rbp + 0x10))
HDC param0_2 = wglGetCurrentDC()
HGLRC param1_2 = wglGetCurrentContext()
HDC param0_1 = rax_4[1]
HGLRC param1 = rax_4[2]

if (param1_2 != param1 || param0_2 != param0_1)
    rdi_1.b = 0
    
    if (wglMakeCurrent(param0_1, param1) == 0)
        wglMakeCurrent(nullptr, nullptr)
else
    rdi_1.b = 1

sub_14190e2d0()
data_143f00108(1, &rax_4[4])

if (rdi_1.b == 0)
    HDC param0
    HGLRC param1_1
    
    if (param1_2 == 0)
        param1_1 = nullptr
        param0 = nullptr
    else
        param1_1 = param1_2
        param0 = param0_2
    
    if (wglMakeCurrent(param0, param1_1) == 0)
        wglMakeCurrent(nullptr, nullptr)

int64_t rsi_2 = sx.q(*(rbp + 0x68))
int32_t rax_8 = (rsi_2 + 1).d
*(rbp + 0x68) = rax_8

if (rax_8 s> *(rbp + 0x6c))
    sub_1405a4d70(rbp + 0x60)

*(*(rbp + 0x60) + (rsi_2 << 3)) = rax_4
arg1[4] = rax_4
sub_14195ab90(arg1, arg4, arg5, arg6)
sub_141997e80(&arg1[9])
return arg1
