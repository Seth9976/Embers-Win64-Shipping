// 函数: sub_140acfe40
// 地址: 0x140acfe40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t r9 = arg2
int16_t r10 = arg1

if (arg3 != 0)
    if (arg3 != 1)
        return 0
    
    arg1 = sbb.w(arg1, arg1, (r9.b & 4) != 0) & 0xe69e
    arg2 = (sbb.w(arg2, arg2, (r10.b & 4) != 0) & 0xe69e) ^ arg1
    arg1 = sbb.w(arg1, arg1, (r10.b & arg3.b) != 0) & 0x4414
    arg2 ^= arg1
    arg1 = sbb.w(arg1, arg1, (r10.b & 8) != 0) & 0xae76
    arg2 ^= arg1
    int16_t rax_11
    rax_11.b = r9.b & 2
    arg1 = sbb.w(arg1, arg1, (r9.b & 8) != 0) & 0xae76
    char temp13_1 = rax_11.b
    rax_11.b = neg.b(rax_11.b)
    r9.b &= arg3.b
    char temp14_1 = r9.b
    r9.b = neg.b(r9.b)
    r10.b &= 2
    rax_11 = sbb.w(rax_11, rax_11, temp14_1 != 0) & 0xa28a
    char temp15_1 = r10.b
    r10.b = neg.b(r10.b)
    return (sbb.w(rax_11, rax_11, temp15_1 != 0) & 0x8828) ^ arg2 ^ arg1
        ^ (sbb.w(arg1, arg1, temp13_1 != 0) & 0x265e) ^ rax_11

arg3.w = sbb.w(arg3.w, arg3.w, (arg2.b & 4) != 0)
arg3.w &= 0xfb57
arg1 = sbb.w(arg1, arg1, (arg1.b & 1) != 0) & 0xf68e
arg3.w ^= arg1
arg1 = sbb.w(arg1, arg1, (arg2.b & 2) != 0) & 0x4ac2
arg3.w ^= arg1
arg1 = sbb.w(arg1, arg1, (r10.b & 8) != 0) & 0x220a
arg3.w ^= arg1
int16_t rax_5
rax_5.b = r10.b & 4
arg1 = sbb.w(arg1, arg1, (arg2.b & 1) != 0) & 0x94c4
arg3.w ^= arg1
char temp5 = rax_5.b
rax_5.b = neg.b(rax_5.b)
r10.b &= 2
arg3.w ^= sbb.w(arg1, arg1, temp5 != 0) & 0x1135
char temp6 = r10.b
r10.b = neg.b(r10.b)
r9.b &= 8
rax_5 = sbb.w(rax_5, rax_5, temp6 != 0) & 0x8e56
arg3.w ^= rax_5
char temp7 = r9.b
r9.b = neg.b(r9.b)
return (sbb.w(rax_5, rax_5, temp7 != 0) & 0x454) ^ arg3.w
