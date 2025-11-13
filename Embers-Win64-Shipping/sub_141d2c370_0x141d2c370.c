// 函数: sub_141d2c370
// 地址: 0x141d2c370
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[1] = arg2
*arg1 = &data_143222400
int64_t* rax = j_sub_140a82f30(0x50)

if (rax == 0)
    rax = nullptr
else
    *rax = 0
    rax[2] = 0
    rax[4] = 0

arg1[3] = rax
arg1[2] = rax
int64_t* rax_1 = j_sub_140a82f30(0x50)

if (rax_1 == 0)
    rax_1 = nullptr
else
    *rax_1 = 0
    rax_1[2] = 0
    rax_1[4] = 0

arg1[5] = rax_1
arg1[4] = rax_1
int64_t* rax_2 = j_sub_140a82f30(0x10)

if (rax_2 == 0)
    rax_2 = nullptr
else
    *rax_2 = 0
    rax_2[1] = 0

arg1[7] = rax_2
arg1[6] = rax_2
InitializeCriticalSection(&arg1[8])
SetCriticalSectionSpinCount(&arg1[8], 0xfa0)
return arg1
