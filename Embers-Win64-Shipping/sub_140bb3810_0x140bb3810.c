// 函数: sub_140bb3810
// 地址: 0x140bb3810
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140ba9350()
int64_t rdi = sx.q(arg1[1].d)
int32_t rdx = (rdi + 1).d
arg1[1].d = rdx

if (rdx s> *(arg1 + 0xc))
    sub_1405a4f90(arg1)

sub_140596d10((rdi << 4) + *arg1, 0x143e1a660)
int64_t rdi_1 = sx.q(arg1[1].d)
int32_t rax = (rdi_1 + 1).d
arg1[1].d = rax

if (rax s> *(arg1 + 0xc))
    sub_1405a4f90(arg1)

sub_140596d10((rdi_1 << 4) + *arg1, 0x143e1a670)
EnterCriticalSection(&data_143e1a450)
sub_140b911a0(arg1, 0x143e1a6b0)
return LeaveCriticalSection(&data_143e1a450) __tailcall
