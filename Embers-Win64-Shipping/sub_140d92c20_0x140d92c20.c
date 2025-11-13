// 函数: sub_140d92c20
// 地址: 0x140d92c20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142ec2888
__builtin_memset(&arg1[2], 0, 0x20)
arg1[6] = arg1
arg1[9] = 0
arg1[0xa] = 0
__builtin_memset(&arg1[0x10], 0, 0x20)
void*** rax = j_sub_140a82f30(0x80)
void*** rbx

if (rax == 0)
    rbx = nullptr
else
    rbx = sub_140dd9840(rax)

arg1[0x15] = rbx
void*** rax_2 = j_sub_140a82f30(0x18)

if (rax_2 == 0)
    rax_2 = nullptr
else
    rax_2[1].d = 1
    *rax_2 = &data_142d42ea8
    *(rax_2 + 0xc) = 1
    rax_2[2] = rbx

arg1[0x16] = rax_2
arg1[0x17] = 0
arg1[0x18] = 0
arg1[0x19] = 2
arg1[0x1a] = 0
arg1[0x1b] = 0
arg1[0x1c] = 2
InitializeCriticalSection(&arg1[0x1d])
SetCriticalSectionSpinCount(&arg1[0x1d], 0xfa0)
arg1[0x22].b = 0
return arg1
