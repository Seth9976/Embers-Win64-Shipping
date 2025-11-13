// 函数: sub_140cad390
// 地址: 0x140cad390
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

std::exception::exception(arg1)
arg1[3] = arg2
void* rdx = &arg1[6]
*arg1 = &data_142e9f7c0
arg1[4] = 0
arg1[5] = 0
*(rdx + 0x10) = 0
*(rdx + 0x18) = 0
*(rdx + 0x1c) = 0x80
void* rax = *(rdx + 0x10)

if (rax != 0)
    rdx = rax

*rdx = 0
*(rdx + 8) = 0
arg1[0xa].d = 0xffffffff
*(arg1 + 0x54) = 0
arg1[0xc] = 0
arg1[0xd].d = 0
*(arg1 + 0x81) = arg5
*(arg1 + 0x83) = arg7
arg1[0xe] = arg3
arg1[0xf] = 0
arg1[0x10].b = arg4
char rax_2

if (arg6 == 0 || arg3 == 0)
    rax_2 = 0
else
    rax_2 = 1

*(arg1 + 0x82) = rax_2

if (arg3 != 0)
    int64_t rax_3 = sub_140d3cb50(arg3)
    
    if (rax_3 != 0)
        arg1[0xf] = *(rax_3 + 0x278)

return arg1
