// 函数: sub_14189acf0
// 地址: 0x14189acf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__builtin_memset(arg1, 0, 0x24)
__builtin_memset(&arg1[5], 0, 0x21)
__builtin_memset(&arg1[0xa], 0, 0x12)
sub_140597df0(arg1, arg2)
*(arg1 + 0x10) = *(arg2 + 0x20)
arg1[4].d = arg2[6].d
int32_t rdx = arg2[0xa].d
arg1[6].d = 0

if (*(arg1 + 0x34) != rdx)
    sub_1405a5130(&arg1[5], rdx)

int128_t* rdi = arg2[9]
void* r15 = rdi + sx.q(arg2[0xa].d) * 0x18

while (rdi != r15)
    void var_48
    int128_t* rax_2 = sub_14189acc0(&var_48, rdi)
    int64_t rsi_1 = sx.q(arg1[6].d)
    int128_t zmm0_1 = *rax_2
    int64_t zmm1 = rax_2[1].q
    int32_t rax_3 = (rsi_1 + 1).d
    arg1[6].d = rax_3
    
    if (rax_3 s> *(arg1 + 0x34))
        sub_1405a4df0(&arg1[5])
    
    int64_t rax_4 = arg1[5]
    int64_t rdx_3 = rsi_1 * 3
    rdi += 0x18
    *(rax_4 + (rdx_3 << 3)) = zmm0_1
    *(rax_4 + (rdx_3 << 3) + 0x10) = zmm1

sub_140597970(&arg1[7], &arg2[7])
arg1[9].b = *(arg2 + 0x34) u>> 2 & 1
sub_140597df0(&arg1[0xa], &arg2[2])
arg1[0xc].b = *(arg2 + 0x34) & 1
*(arg1 + 0x61) = *(arg2 + 0x34) u>> 1 & 1
return arg1
