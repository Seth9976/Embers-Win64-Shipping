// 函数: sub_140d72400
// 地址: 0x140d72400
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142ec0620
arg1[0x22] = 0
arg1[0x23] = 0
arg1[0x42] = 0
arg1[0x43] = 0
arg1[0x62] = 0
arg1[0x63] = 0
arg1[0x82] = 0
arg1[0x83] = 0
__builtin_memset(&arg1[0x86], 0, 0xc0)
arg1[0x9e] = *arg2
void* rax_1 = arg2[1]
arg1[0x9f] = rax_1

if (rax_1 != 0)
    *(rax_1 + 8) += 1

memset(&arg1[5], 0, 0x100)
*(arg1 + 0x10c) = 0
memset(&arg1[0x25], 0, 0x100)
*(arg1 + 0x20c) = 1
memset(&arg1[0x45], 0, 0x100)
*(arg1 + 0x30c) = 2
memset(&arg1[0x65], 0, 0x100)
*(arg1 + 0x40c) = 3
arg1[0x85].d = 0x3e4ccccd
arg1[1].w = 1
*(arg1 + 0x42c) = 0x3dcccccd
sub_140af3b00(data_143ddb400, /Script/Engine.InputSettings", InitialButtonRepeatDelay", 
    &arg1[0x85], &data_143de5820)
sub_140af3b00(data_143ddb400, /Script/Engine.InputSettings", ButtonRepeatDelay", arg1 + 0x42c, 
    &data_143de5820)
__builtin_memcpy(arg1 + 0xa, 
    "\x00\x01\x02\x03\x04\x05\x07\x06\x08\x09\x0a\x0b\x0c\x0d\x0e\x0f\x10\x11\x12\x13\x14\x15\x16\x17", 
    0x18)
arg1[0x86] = data_143e204c8
arg1[0x87] = data_143e204d0
arg1[0x88] = data_143e204d8
arg1[0x89] = data_143e204e0
arg1[0x8a] = data_143e204e8
arg1[0x8b] = data_143e204f0
arg1[0x8c] = data_143e204c0
arg1[0x8d] = data_143e204a8
arg1[0x8e] = data_143e20498
arg1[0x8f] = data_143e204a0
arg1[0x90] = data_143e204f8
arg1[0x91] = data_143e20500
arg1[0x92] = data_143e20508
arg1[0x93] = data_143e20510
arg1[0x94] = data_143e20520
arg1[0x95] = data_143e20518
arg1[0x96] = data_143e20528
arg1[0x97] = data_143e20530
arg1[0x98] = data_143e20540
arg1[0x99] = data_143e20538
arg1[0x9a] = data_143e20548
arg1[0x9b] = data_143e20550
arg1[0x9c] = data_143e20560
arg1[0x9d] = data_143e20558
return arg1
