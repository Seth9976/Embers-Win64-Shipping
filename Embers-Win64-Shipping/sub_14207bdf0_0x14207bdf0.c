// 函数: sub_14207bdf0
// 地址: 0x14207bdf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbp = arg1[0x94].d
int64_t rsi = sx.q(rbp)
int32_t rax = (rsi + 1).d
arg1[0x94].d = rax

if (rax s> *(arg1 + 0x4a4))
    sub_1405c4fe0(&arg1[0x93])

int64_t rdx_2 = rsi << 6
int128_t* rdx_3 = rdx_2 + arg1[0x93]

if (rdx_2 == neg.q(arg1[0x93]))
    rdx_3 = nullptr
else
    *rdx_3 = data_14399f6e0
    rdx_3[1] = data_14399f6f0
    rdx_3[2] = data_14399f700
    rdx_3[3] = data_14399f710

sub_1420a4250(arg1, rdx_3, rbp, arg2)
int64_t r14_1 = sx.q(arg1[0x95].d)
int64_t rsi_1 = sx.q(arg1[0x97].d)
int32_t rax_1 = (rsi_1 + r14_1).d
arg1[0x97].d = rax_1

if (rax_1 s> *(arg1 + 0x4bc))
    sub_1406105e0(&arg1[0x96])

memset(arg1[0x96] + (rsi_1 << 2), 0, r14_1 << 2)
int64_t r8_3 = *arg1
(*(r8_3 + 0x968))(arg1, zx.q(rbp), r8_3)
*(arg1 + 0x50c) += 1
sub_141ee8490(arg1)
return zx.q(rbp)
