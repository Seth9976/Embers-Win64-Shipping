// 函数: sub_141853f50
// 地址: 0x141853f50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rsi = arg1[1]
*arg2 = **arg1
arg2[1].q = 0
int64_t rdi = sx.q(rsi[1].d)
int64_t r14 = *rsi
*(arg2 + 0x18) = rdi.d

if (rdi.d != 0)
    sub_140808f70(&arg2[1], rdi.d, 0)
    memcpy(arg2[1].q, r14, (rdi * 0x18).d)
else
    *(arg2 + 0x1c) = 0

arg2[2].d = rsi[2].d
void* rdx_2 = arg2 + 0x38
*(arg2 + 0x28) = 0
arg2[3].q = 0
*(rdx_2 + 0x10) = 0
*(rdx_2 + 0x18) = 0
*(rdx_2 + 0x1c) = 0x80
void* rax_2 = *(rdx_2 + 0x10)

if (rax_2 != 0)
    rdx_2 = rax_2

*rdx_2 = 0
*(rdx_2 + 8) = 0
*(arg2 + 0x58) = 0xffffffff
*(arg2 + 0x5c) = 0
*(arg2 + 0x68) = 0
arg2[7].d = 0
sub_1418235f0(arg2 + 0x28, &rsi[3])
*(arg2 + 0x78) = rsi[0xd]
return arg2
