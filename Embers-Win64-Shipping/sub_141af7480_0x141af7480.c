// 函数: sub_141af7480
// 地址: 0x141af7480
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[1].b = 0
*(arg1 + 0x14) = 0xffffffff
arg1[3].d = 0
arg1[2].b = 0
*arg1 = &data_143054b38
arg1[4] = 0
int64_t rbp = sx.q(*(arg2 + 0x68))
int64_t r14 = *(arg2 + 0x60)
arg1[5].d = rbp.d

if (rbp.d != 0)
    sub_140808f70(&arg1[4], rbp.d, 0)
    memcpy(arg1[4], r14, (rbp * 0x18).d)
else
    *(arg1 + 0x2c) = 0

arg1[6].d ^= (arg1[6].d ^ *(arg2 + 0x58)) & 1
arg1[6].d ^= (*(arg2 + 0x58) ^ arg1[6].d) & 2
return arg1
