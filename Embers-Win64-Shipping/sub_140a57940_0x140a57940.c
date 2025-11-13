// 函数: sub_140a57940
// 地址: 0x140a57940
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[0x29].d = 0
int64_t rcx = arg1[0x28]

if (rcx != 0)
    sub_140a74f90(rcx)

sub_140a57610(&arg1[0x20])
arg1[0x1f].d = 0
int64_t rcx_2 = arg1[0x1e]

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

sub_140a57610(&arg1[0x16])
int64_t rcx_4 = arg1[0x14]

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)

sub_1405ae100(&arg1[0xa])
DeleteCriticalSection(&arg1[3])
sub_140b0bbe0(arg1)

if ((arg2 & 1) == 0 || (arg2 & 4) != 0)
    return arg1

free(arg1)
return arg1
