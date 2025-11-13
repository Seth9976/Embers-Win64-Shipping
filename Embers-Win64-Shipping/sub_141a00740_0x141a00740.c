// 函数: sub_141a00740
// 地址: 0x141a00740
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *arg1

if (rcx != 0)
    (**rcx)(rcx, 1)

int64_t* rcx_1 = arg1[2]
arg1[1] = 0

if (rcx_1 != 0)
    (**rcx_1)(rcx_1, 1)

int64_t* rcx_2 = arg1[4]
arg1[3] = 0

if (rcx_2 != 0)
    (**rcx_2)(rcx_2, 1)

int64_t* rcx_3 = arg1[6]
arg1[5] = 0

if (rcx_3 != 0)
    (**rcx_3)(rcx_3, 1)

arg1[6] = 0
void*** rax_5 = j_sub_140a82f30(0x28)
void*** rcx_4 = rax_5

if (rax_5 == 0)
    rcx_4 = nullptr
else
    *rcx_4 = &data_14301dea0
    rcx_4[2] = 0
    rcx_4[3] = 0
    rcx_4[1] = &data_142f3c760
    rcx_4[4].b = 0

*arg1 = rcx_4
(*rcx_4)[1](rcx_4, zx.q(arg2), zx.q(arg3))
void*** rax_7 = j_sub_140a82f30(0x28)
void*** rcx_5 = rax_7

if (rax_7 == 0)
    rcx_5 = nullptr
else
    *rcx_5 = &data_14301df40
    rcx_5[2] = 0
    rcx_5[3] = 0
    rcx_5[1] = &data_14301df00
    rcx_5[4].b = 0

arg1[4] = rcx_5
(*rcx_5)[1](rcx_5, zx.q(arg2), zx.q(arg3))
char rbx = arg1[9].b
void*** rax_9 = j_sub_140a82f30(0x28)
void*** rcx_6 = rax_9

if (rbx == 0)
    if (rcx_6 == 0)
        rcx_6 = nullptr
    else
        *rcx_6 = &data_14301e080
        __builtin_memset(&rcx_6[2], 0, 0x11)
        rcx_6[1] = &data_14301e040
else if (rax_9 == 0)
    rcx_6 = nullptr
else
    *rcx_6 = &data_14301dfe0
    __builtin_memset(&rcx_6[2], 0, 0x11)
    rcx_6[1] = &data_14301dfa0

arg1[2] = rcx_6
(*rcx_6)[1](rcx_6, zx.q(arg2), zx.q(arg3))
void*** rax_12 = j_sub_140a82f30(0x28)
void*** rcx_7 = rax_12

if (rax_12 == 0)
    rcx_7 = nullptr
else
    *rcx_7 = &data_14301e0e0
    rcx_7[2] = 0
    rcx_7[3] = 0
    rcx_7[1] = &data_142da8070
    rcx_7[4].b = 0

*(arg1 + 0x44)
arg1[6] = rcx_7
jump(*(*rcx_7 + 8))
