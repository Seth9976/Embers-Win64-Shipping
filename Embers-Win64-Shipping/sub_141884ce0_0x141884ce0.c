// 函数: sub_141884ce0
// 地址: 0x141884ce0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141820930(arg1)
sub_140597df0(arg1, arg2)
*(arg1 + 0x20) = *(arg2 + 0x10)
arg1[6].d = arg2[4].d
int32_t rdx_1 = arg2[6].d
arg1[0xa].d = 0

if (*(arg1 + 0x54) != rdx_1)
    sub_1405a5130(&arg1[9], rdx_1)

int128_t* rdi = arg2[5]
void* r15 = rdi + sx.q(arg2[6].d) * 0x18

while (rdi != r15)
    void var_38
    int128_t* rax_2 = sub_141884ca0(&var_38, rdi)
    int64_t rsi_1 = sx.q(arg1[0xa].d)
    int128_t zmm0_1 = *rax_2
    int64_t zmm1 = rax_2[1].q
    int32_t rax_3 = (rsi_1 + 1).d
    arg1[0xa].d = rax_3
    
    if (rax_3 s> *(arg1 + 0x54))
        sub_1405a4df0(&arg1[9])
    
    int64_t rax_4 = arg1[9]
    int64_t rcx_5 = rsi_1 * 3
    rdi += 0x18
    *(rax_4 + (rcx_5 << 3)) = zmm0_1
    *(rax_4 + (rcx_5 << 3) + 0x10) = zmm1

sub_140597970(&arg1[7], &arg2[7])
char rcx_8
char rdx_6
rcx_8, rdx_6 = sub_140597df0(&arg1[2], &arg2[0xa])
*(arg1 + 0x34) |= arg2[0xc].b != 0
rdx_6 = (sbb.b(rdx_6, rdx_6, *(arg2 + 0x61) != 0) & 2) | *(arg1 + 0x34)
*(arg1 + 0x34) = rdx_6
*(arg1 + 0x34) = (sbb.b(rcx_8, rcx_8, arg2[9].b != 0) & 4) | rdx_6
return arg1
