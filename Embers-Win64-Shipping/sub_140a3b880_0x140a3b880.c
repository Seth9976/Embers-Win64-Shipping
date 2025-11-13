// 函数: sub_140a3b880
// 地址: 0x140a3b880
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[1] = arg2
*arg1 = &data_142e5d250
InitializeCriticalSection(&arg1[2])
SetCriticalSectionSpinCount(&arg1[2], 0xfa0)
arg1[7] = 0
arg1[8] = 0
InitializeCriticalSection(&arg1[9])
SetCriticalSectionSpinCount(&arg1[9], 0xfa0)
arg1[0xe] = 0
arg1[0xf] = 0
void*** rax_1 = sub_14059e7c0(sub_140a463a0())
void*** rbx = rax_1

if (rax_1 == 0)
    rbx = sub_140b662c0(0)

void*** rax_3 = j_sub_140a82f30(0x18)

if (rax_3 == 0)
    rax_3 = nullptr
else
    rax_3[1].d = 0
    *rax_3 = &data_142e5bfb0
    *(rax_3 + 0xc) = 0
    *rax_3 = &data_142e5e778
    rax_3[2] = rbx

arg1[0x10] = rax_3
arg1[0x12].b = 0
arg1[0x12].b
arg1[0x11] = sub_140a6e140(arg1, u"IoService", 0, 1, -1, 0)
return arg1
