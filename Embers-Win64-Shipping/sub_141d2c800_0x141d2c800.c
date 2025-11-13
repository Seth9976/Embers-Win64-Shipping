// 函数: sub_141d2c800
// 地址: 0x141d2c800
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_143222918
int32_t* rax = j_sub_140a82f30(0x18)

if (rax == 0)
    rax = nullptr
else
    *rax = 0xff7fffff
    *(rax + 8) = 0
    *(rax + 0x10) = 0

arg1[1] = rax
arg1[2].b = 0
int32_t* rax_1 = j_sub_140a82f30(0x18)

if (rax_1 == 0)
    rax_1 = nullptr
else
    *rax_1 = 0xff7fffff
    *(rax_1 + 8) = 0
    *(rax_1 + 0x10) = 0

arg1[3] = rax_1
arg1[4].b = 0
int32_t* rax_2 = j_sub_140a82f30(0x18)

if (rax_2 == 0)
    rax_2 = nullptr
else
    *rax_2 = 0xff7fffff
    *(rax_2 + 8) = 0
    *(rax_2 + 0x10) = 0

arg1[5] = rax_2
arg1[6].b = 0
arg1[7] = &arg1[1]
arg1[8] = &arg1[3]
arg1[9] = &arg1[5]
return arg1
