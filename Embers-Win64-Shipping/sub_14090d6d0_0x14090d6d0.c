// 函数: sub_14090d6d0
// 地址: 0x14090d6d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142e1ce68
arg1[1] = &data_142e1ce98
arg1[2] = *arg2
arg1[3] = 0
int64_t rsi = sx.q(arg3[1].d)
int64_t rbp = *arg3
arg1[4].d = rsi.d

if (rsi.d != 0)
    sub_1405c4a00(&arg1[3], rsi.d, 0)
    memcpy(arg1[3], rbp, (rsi << 3).d)
else
    *(arg1 + 0x24) = 0

arg1[5].d = arg4
*(arg1 + 0x2c) = 0
void arg_8
arg1[6] = sub_140fc6160(sub_140b58260(&arg_8, u"WINDOWS", 1))
void* rcx_4 = &arg1[0xc]
__builtin_memset(&arg1[7], 0, 0x28)
*(rcx_4 + 0x10) = 0
*(rcx_4 + 0x18) = 0
*(rcx_4 + 0x1c) = 0x80
void* rax_3 = *(rcx_4 + 0x10)

if (rax_3 != 0)
    rcx_4 = rax_3

*rcx_4 = 0
*(rcx_4 + 8) = 0
arg1[0x10].d = 0xffffffff
*(arg1 + 0x84) = 0
arg1[0x12] = 0
arg1[0x13].d = 0
int64_t* rax_4 = j_sub_140a82f30(0x30)

if (rax_4 == 0)
    rax_4 = nullptr
else
    *rax_4 = 0
    rax_4[1].b = 0
    *(rax_4 + 0xc) = 0
    *(rax_4 + 0x14) = 0
    rax_4[4] = 0
    rax_4[5] = 0

arg1[0x15] = rax_4
arg1[0x14] = rax_4
int64_t rax_5 = j_sub_140a82f30(0x18)

if (rax_5 == 0)
    rax_5 = 0
else
    __builtin_memset(rax_5, 0, 0x18)

arg1[0x17] = rax_5
arg1[0x16] = rax_5
int64_t* rax_6 = j_sub_140a82f30(0x10)

if (rax_6 == 0)
    rax_6 = nullptr
else
    *rax_6 = 0

arg1[0x19] = rax_6
arg1[0x18] = rax_6
arg1[0x1b] = 0
arg1[0x1a] = sub_140a6e140(arg1, u"FTcpMessageTransport", 0x20000, 0, -1, 0)
return arg1
