// 函数: sub_140d722a0
// 地址: 0x140d722a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142ebf640
arg1[1] = *arg2
void* rax_1 = arg2[1]
arg1[2] = rax_1

if (rax_1 != 0)
    *(rax_1 + 8) += 1

void*** rax_2 = j_sub_140a82f30(8)
void*** rdi = rax_2

if (rax_2 == 0)
    rdi = nullptr
else
    *rdi = &data_142ebf368

void*** rax_3 = j_sub_140a82f30(0x18)

if (rax_3 == 0)
    rax_3 = nullptr
else
    rax_3[1].d = 1
    *rax_3 = &data_142d42ea8
    *(rax_3 + 0xc) = 1
    rax_3[2] = rdi

arg1[3] = rdi
arg1[4] = rax_3
void*** rax_4 = j_sub_140a82f30(0x20)
void*** rdi_1 = rax_4

if (rax_4 == 0)
    rdi_1 = nullptr
else
    rdi_1[1].w = 0
    *rdi_1 = &data_142ebf330
    rdi_1[2] = 0
    rdi_1[3].d = 0

void*** rax_5 = j_sub_140a82f30(0x18)

if (rax_5 == 0)
    rax_5 = nullptr
else
    rax_5[1].d = 1
    *rax_5 = &data_142d42ea8
    *(rax_5 + 0xc) = 1
    rax_5[2] = rdi_1

arg1[5] = rdi_1
arg1[6] = rax_5
arg1[7] = 0
arg1[8] = 0
arg1[9] = 2
arg1[0xa] = 0
arg1[0xb] = 0
arg1[0xc] = 2
arg1[0xd] = 0
arg1[0xe] = 0
arg1[0xf] = 2
return arg1
