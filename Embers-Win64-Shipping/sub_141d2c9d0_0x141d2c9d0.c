// 函数: sub_141d2c9d0
// 地址: 0x141d2c9d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_1432229d8
int64_t* rax = j_sub_140a82f30(0x10)

if (rax == 0)
    rax = nullptr
else
    *rax = 0
    rax[1] = 0

arg1[1] = rax
arg1[2].b = 0
int64_t* rax_1 = j_sub_140a82f30(0x10)

if (rax_1 == 0)
    rax_1 = nullptr
else
    *rax_1 = 0
    rax_1[1] = 0

arg1[3] = rax_1
arg1[4].b = 0
int64_t* rax_2 = j_sub_140a82f30(0x10)

if (rax_2 == 0)
    rax_2 = nullptr
else
    *rax_2 = 0
    rax_2[1] = 0

arg1[5] = rax_2
arg1[6].b = 0
arg1[7] = &arg1[1]
arg1[8] = &arg1[3]
arg1[9] = &arg1[5]
return arg1
