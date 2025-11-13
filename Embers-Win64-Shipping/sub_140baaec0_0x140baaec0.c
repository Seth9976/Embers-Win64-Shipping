// 函数: sub_140baaec0
// 地址: 0x140baaec0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi = sx.q(arg2[1].d)
int32_t rax = (rsi + 1).d
arg2[1].d = rax

if (rax s> *(arg2 + 0xc))
    sub_1405a4f90(arg2)

sub_140596d10((rsi << 4) + *arg2, &arg1[2])
int64_t rsi_1 = sx.q(arg2[1].d)
int32_t rax_1 = (rsi_1 + 1).d
arg2[1].d = rax_1

if (rax_1 s> *(arg2 + 0xc))
    sub_1405a4f90(arg2)

sub_140596d10((rsi_1 << 4) + *arg2, &arg1[4])
EnterCriticalSection(&data_143e1a450)
sub_140b911a0(arg2, &arg1[0xc])
int64_t* result = LeaveCriticalSection(&data_143e1a450)

if (arg3 == 0)
    return result

int64_t rsi_2 = sx.q(arg2[1].d)
int32_t rax_2 = (rsi_2 + 1).d
arg2[1].d = rax_2

if (rax_2 s> *(arg2 + 0xc))
    sub_1405a4f90(arg2)

sub_140596d10((rsi_2 << 4) + *arg2, arg1)
int64_t rsi_3 = sx.q(arg2[1].d)
int32_t rax_3 = (rsi_3 + 1).d
arg2[1].d = rax_3

if (rax_3 s> *(arg2 + 0xc))
    sub_1405a4f90(arg2)

sub_140596d10((rsi_3 << 4) + *arg2, &arg1[6])
int64_t rsi_4 = sx.q(arg2[1].d)
int32_t rax_4 = (rsi_4 + 1).d
arg2[1].d = rax_4

if (rax_4 s> *(arg2 + 0xc))
    sub_1405a4f90(arg2)

sub_140596d10((rsi_4 << 4) + *arg2, &arg1[8])
int64_t rsi_5 = sx.q(arg2[1].d)
int32_t rax_5 = (rsi_5 + 1).d
arg2[1].d = rax_5

if (rax_5 s> *(arg2 + 0xc))
    sub_1405a4f90(arg2)

return sub_140596d10((rsi_5 << 4) + *arg2, &arg1[0xa])
