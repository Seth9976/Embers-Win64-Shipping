// 函数: sub_140919690
// 地址: 0x140919690
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_14091a430(arg1)
arg1[0x3d] = arg2
void* rcx = &arg1[0x4c]
*arg1 = &data_142e21148
arg1[0x3f].d = 0x36b1
arg1[0x3e] = &data_142e21088
*(arg1 + 0x1fc) = 0x270f
arg1[0x40].d = 0xffffffff
*(arg1 + 0x204) = 0x40a00000
arg1[0x41].d = 0x3f800000
arg1[0x42] = 0
arg1[0x43].d = 0
__builtin_memset(&arg1[0x44], 0, 0x40)
*(rcx + 0x10) = 0
*(rcx + 0x18) = 0
*(rcx + 0x1c) = 0x80
void* rax = *(rcx + 0x10)

if (rax != 0)
    rcx = rax

*rcx = 0
*(rcx + 8) = 0
arg1[0x50].d = 0xffffffff
*(arg1 + 0x284) = 0
arg1[0x52] = 0
arg1[0x53].d = 0
arg1[0x54] = 0
arg1[0x55] = 0
arg1[0x56] = 2
arg1[0x57] = 0
arg1[0x58] = 0
arg1[0x59] = 2
arg1[0x5a] = 0
arg1[0x5b] = 0
arg1[0x5c] = 2

if (sub_140af3c10(data_143ddb400, LANSession", LanAnnouncePort", &arg1[0x3f], &data_143de5780) == 0)
    arg1[0x3f].d = 0x36b1

if (sub_140af3c10(data_143ddb400, LANSession", LanGameUniqueId", arg1 + 0x1fc, &data_143de5780)
        == 0)
    *(arg1 + 0x1fc) = 0x270f

InitializeCriticalSection(&arg1[0x5d])
SetCriticalSectionSpinCount(&arg1[0x5d], 0xfa0)
__builtin_memset(&arg1[0x62], 0, 0x28)
return arg1
