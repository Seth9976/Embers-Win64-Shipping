// 函数: sub_14185fed0
// 地址: 0x14185fed0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142fe6c40
sub_140596d10(&arg1[1], arg2)
sub_140596d10(&arg1[3], &arg2[2])
sub_140596d10(&arg1[5], &arg2[4])
arg1[7].d = arg2[6].d
*(arg1 + 0x3c) = *(arg2 + 0x34)
arg1[8] = arg2[7]
arg1[9] = sub_140b18f30()
arg1[0xa] = 0
arg1[0xb].d = 0
void*** rax_4 = sub_1405978f0(0x28, &arg1[0xa])

if (rax_4 != 0)
    rax_4[1] = arg1
    *rax_4 = &data_142d3fe58
    rax_4[2] = sub_141888710
    rax_4[4] = sub_140a387b0()
    *rax_4 = &data_142d3feb0

arg1[0xc] = 0
arg1[0xd].d = 0
arg1[0xe] = sub_141830ee0()
arg1[0xf] = sub_141830f30()
arg1[0x10] = sub_141830e40()
arg1[0x11] = sub_141830f70()
void*** rax_10 = sub_1418a0cd0(0)
arg1[0x12] = rax_10
void*** rax_11 = sub_1418a07c0(arg1[0x11], arg1[0x10], rax_10)
arg1[0x13] = rax_11
int64_t rdi_1 = arg1[0x12]
int64_t rbp = arg1[0xe]
int64_t r14 = arg1[0xf]
int64_t r15 = arg1[9]
void*** rax_12 = j_sub_140a82f30(0x340)
void*** rax_13

if (rax_12 == 0)
    rax_13 = nullptr
else
    int64_t var_20_1 = rdi_1
    rax_13 = sub_141863720(rax_12, r15, r14, rbp, rax_11)

arg1[0x14] = rax_13
arg1[0x15] = sub_1418a1240()
arg1[0x16] = sub_141831070()
arg1[0x17] = 0
arg1[0x18] = 0
arg1[0x19].d = 1
*(arg1 + 0xcc) = 0
arg1[0x1a] = -1
sub_14185f280(&arg1[0x1b])
sub_14185f280(&arg1[0x1e])
arg1[0x1d].b = 1
arg1[0x21] = arg1[0x1b]
void* rax_17 = arg1[0x1c]
arg1[0x22] = rax_17

if (rax_17 != 0)
    *(rax_17 + 8) += 1

arg1[0x20].b = 1
arg1[0x23] = arg1[0x1e]
void* rax_19 = arg1[0x1f]
arg1[0x24] = rax_19

if (rax_19 != 0)
    *(rax_19 + 8) += 1

return arg1
