// 函数: sub_1417c7020
// 地址: 0x1417c7020
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__builtin_memset(arg1, 0, 0x88)
arg1[0x12] = 0
arg1[0x13] = 0
void* rcx = &arg1[0x14]
*(rcx + 0x10) = 0
*(rcx + 0x18) = 0
*(rcx + 0x1c) = 0x80
void* rax = *(rcx + 0x10)

if (rax != 0)
    rcx = rax

*rcx = 0
*(rcx + 8) = 0
void* rcx_1 = &arg1[0x20]
arg1[0x18].d = 0xffffffff
*(arg1 + 0xc4) = 0
arg1[0x1a] = 0
arg1[0x1b].d = 0
__builtin_memset(&arg1[0x1c], 0, 0x20)
*(rcx_1 + 0x1c) = 0x80
void* rax_1 = *(rcx_1 + 0x10)

if (rax_1 != 0)
    rcx_1 = rax_1

__builtin_memset(rcx_1, 0, 0x1c)
void* rcx_2 = &arg1[0x2c]
arg1[0x24].d = 0xffffffff
*(arg1 + 0x124) = 0
arg1[0x26] = 0
arg1[0x27].d = 0
__builtin_memset(&arg1[0x28], 0, 0x20)
*(rcx_2 + 0x1c) = 0x80
void* rax_2 = *(rcx_2 + 0x10)

if (rax_2 != 0)
    rcx_2 = rax_2

__builtin_memset(rcx_2, 0, 0x1c)
arg1[0x30].d = 0xffffffff
*(arg1 + 0x184) = 0
arg1[0x32] = 0
arg1[0x33].d = 0
__builtin_memset(&arg1[0x34], 0, 0x24)
__builtin_memset(&arg1[0x39], 0, 0x14)
__builtin_memset(&arg1[0x3c], 0, 0x14)
__builtin_memset(&arg1[0x3f], 0, 0x14)
__builtin_memset(&arg1[0x42], 0, 0x14)
__builtin_memset(&arg1[0x45], 0, 0x14)
arg1[0x49] = 0
arg1[0x4a] = 0
arg1[0x48] = &data_142fcabb8
arg1[0x4b].d = 0
arg1[0x4d] = 0
arg1[0x4e] = 0
arg1[0x4c] = &data_142fcab88
sub_14172eb30(&arg1[0x48], &arg1[0x4c])
arg1[0x4f] = 0
arg1[0x50] = 0
arg1[0x52] = 0
arg1[0x54] = 0
int32_t rax_3 = sub_140a20af0()
arg1[0x52] &= 0xfffffffffc000000
uint64_t rdx_1 = zx.q(rax_3)
arg1[0x52] |= rdx_1
arg1[0x54] &= 0xfffffffffc000000
arg1[0x54] |= rdx_1
arg1[0x56].b = 0
sub_1417c7d10(&arg1[0x4f], 0)
arg1[0x57].d = 0
void*** rax_4 = j_sub_140a82f30(0x1b0)
void*** rcx_6

if (rax_4 == 0)
    rcx_6 = nullptr
else
    rcx_6 = sub_141703350(rax_4)

void arg_8

if (arg1 != &arg_8)
    void*** r8_1 = *arg1
    *arg1 = rcx_6
    
    if (r8_1 != 0)
        (**r8_1)(r8_1, 1)
else if (rcx_6 != 0)
    (**rcx_6)(rcx_6, 1)

void*** rax_7 = j_sub_140a82f30(0x1b0)
void*** rcx_8

if (rax_7 == 0)
    rcx_8 = nullptr
else
    rcx_8 = sub_141703350(rax_7)

void arg_10

if (&arg1[1] != &arg_10)
    void*** r8_2 = arg1[1]
    arg1[1] = rcx_8
    
    if (r8_2 != 0)
        (**r8_2)(r8_2, 1)
else if (rcx_8 != 0)
    (**rcx_8)(rcx_8, 1)

void*** rax_10 = j_sub_140a82f30(0x228)
void*** rcx_10

if (rax_10 == 0)
    rcx_10 = nullptr
else
    rcx_10 = sub_141703df0(rax_10)

void arg_18

if (&arg1[2] != &arg_18)
    void*** r8_3 = arg1[2]
    arg1[2] = rcx_10
    
    if (r8_3 != 0)
        (**r8_3)(r8_3, 1)
else if (rcx_10 != 0)
    (**rcx_10)(rcx_10, 1)

void*** rax_13 = j_sub_140a82f30(0x228)
void*** rcx_12

if (rax_13 == 0)
    rcx_12 = nullptr
else
    rcx_12 = sub_141703df0(rax_13)

void arg_20

if (&arg1[3] != &arg_20)
    void*** r8_4 = arg1[3]
    arg1[3] = rcx_12
    
    if (r8_4 != 0)
        (**r8_4)(r8_4, 1)
else if (rcx_12 != 0)
    (**rcx_12)(rcx_12, 1)

void*** rax_16 = j_sub_140a82f30(0x420)
void*** rcx_14

if (rax_16 == 0)
    rcx_14 = nullptr
else
    rcx_14 = sub_1417041e0(rax_16)

void var_78

if (&arg1[6] != &var_78)
    void*** r8_5 = arg1[6]
    arg1[6] = rcx_14
    
    if (r8_5 != 0)
        (**r8_5)(r8_5, 1)
else if (rcx_14 != 0)
    (**rcx_14)(rcx_14, 1)

void*** rax_19 = j_sub_140a82f30(0x420)
void*** rcx_16

if (rax_19 == 0)
    rcx_16 = nullptr
else
    rcx_16 = sub_1417041e0(rax_19)

void var_70

if (&arg1[4] != &var_70)
    void*** r8_6 = arg1[4]
    arg1[4] = rcx_16
    
    if (r8_6 != 0)
        (**r8_6)(r8_6, 1)
else if (rcx_16 != 0)
    (**rcx_16)(rcx_16, 1)

void*** rax_23 = j_sub_140a82f30(0x420)
void*** rcx_18

if (rax_23 == 0)
    rcx_18 = nullptr
else
    rcx_18 = sub_1417041e0(rax_23)

void var_68

if (&arg1[5] != &var_68)
    void*** r8_7 = arg1[5]
    arg1[5] = rcx_18
    
    if (r8_7 != 0)
        (**r8_7)(r8_7, 1)
else if (rcx_18 != 0)
    (**rcx_18)(rcx_18, 1)

void*** rax_27 = j_sub_140a82f30(0x510)
void*** rcx_20

if (rax_27 == 0)
    rcx_20 = nullptr
else
    rcx_20 = sub_141703fd0(rax_27)

void var_60

if (&arg1[7] != &var_60)
    void*** r8_8 = arg1[7]
    arg1[7] = rcx_20
    
    if (r8_8 != 0)
        (**r8_8)(r8_8, 1)
else if (rcx_20 != 0)
    (**rcx_20)(rcx_20, 1)

arg1[7][7].b = 1
void*** rax_31 = j_sub_140a82f30(0x510)
void*** rbx_1 = rax_31

if (rax_31 == 0)
    rbx_1 = rax_31
else
    sub_141703fd0(rax_31)
    rbx_1[8].b = 6
    *rbx_1 = &data_142fcab78

void var_58

if (&arg1[8] != &var_58)
    void*** rcx_22 = arg1[8]
    arg1[8] = rbx_1
    
    if (rcx_22 != 0)
        (**rcx_22)(rcx_22, 1)
else if (rbx_1 != 0)
    (**rbx_1)(rbx_1, 1)

arg1[8][7].b = 1
arg1[0x11].b = 0
sub_14175b460(arg1)
return arg1
