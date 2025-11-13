// 函数: sub_141862e50
// 地址: 0x141862e50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142fe66f0
sub_141863050(&arg1[1], arg2)
void*** rsi = nullptr
arg1[0x1d] = sub_140b18f30()
arg1[0x1e] = 0
arg1[0x1f].d = 0
void*** rax_1 = sub_1405978f0(0x28, &arg1[0x1e])

if (rax_1 != 0)
    rax_1[1] = arg1
    *rax_1 = &data_142d3fe58
    rax_1[2] = sub_141888890
    rax_1[4] = sub_140a387b0()
    *rax_1 = &data_142d3feb0

arg1[0x20] = 0
arg1[0x21].d = 0
arg1[0x22] = sub_141830ee0()
arg1[0x23] = sub_141830f30()
arg1[0x24] = sub_141830e40()
arg1[0x25] = sub_141830f70()
void*** rax_7 = sub_1418a0cd0(0)
arg1[0x26] = rax_7
void*** rax_8 = sub_1418a07c0(arg1[0x25], arg1[0x24], rax_7)
arg1[0x27] = rax_8
int64_t rbp = arg1[0x26]
int64_t r14 = arg1[0x22]
int64_t r15 = arg1[0x23]
int64_t r12 = arg1[0x1d]
void*** rax_9 = j_sub_140a82f30(0x340)

if (rax_9 != 0)
    int64_t var_20_1 = rbp
    rsi = sub_141863720(rax_9, r12, r15, r14, rax_8)

arg1[0x28] = rsi
arg1[0x29] = sub_141831070()
arg1[0x2a].d = 1
*(arg1 + 0x154) = -1
sub_14185f280(&arg1[0x2c])
sub_14185f280(&arg1[0x2f])
arg1[0x2e].b = 1
arg1[0x32] = arg1[0x2c]
void* rax_13 = arg1[0x2d]
arg1[0x33] = rax_13

if (rax_13 != 0)
    *(rax_13 + 8) += 1

arg1[0x31].b = 1
arg1[0x34] = arg1[0x2f]
void* rax_15 = arg1[0x30]
arg1[0x35] = rax_15

if (rax_15 != 0)
    *(rax_15 + 8) += 1

return arg1
