// 函数: sub_141f60e30
// 地址: 0x141f60e30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg2[1].d = 0xffffffff
void* rbp = nullptr
void* arg_8 = arg1
*(arg2 + 0xc) = 0
arg2[2] = 0
arg2[3].d = 0xffffffff
*(arg2 + 0x1c) = 0
arg2[4].b = 0
*arg2 = &data_1430507f0
sub_141f50010(arg2, &arg_8)
void* rax = sub_1425a4a90()
void* rax_1 = sub_140d3c6e0(&arg2[1])

if (rax != 0)
    int64_t rcx_2 = sx.q(*(rax + 0x38))
    
    if (rcx_2.d s<= *(rax_1 + 0x38) && *(*(rax_1 + 0x30) + (rcx_2 << 3)) == rax + 0x30)
        rbp = arg2[2]

char rax_4 = *(arg1 + 0x4dd)

if (rax_4 != 0)
    sub_141ae6560(rbp + 0xb0, arg1 + 0x408)
    sub_141f51ba0(rbp + 0xc8, arg1 + 0x420)
    sub_141ae6560(rbp + 0xe0, arg1 + 0x438)
    sub_141f51b20(rbp + 0xf8, arg1 + 0x450)
    *(rbp + 0x110) = *(arg1 + 0x468)
    rax_4 = *(arg1 + 0x4dd)

*(rbp + 0xa8) = rax_4
return arg2
