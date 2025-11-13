// 函数: sub_142991d40
// 地址: 0x142991d40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* arg_8 = arg1
int64_t var_40 = -2
int64_t r10 = *arg1
int64_t rax_3
int64_t rdx_1
rdx_1:rax_3 = muls.dp.q(0x2aaaaaaaaaaaaaab, arg1[1] - r10)
int64_t rdx_2 = rdx_1 s>> 3
int64_t rdx_3 = rdx_2 + (rdx_2 u>> 0x3f)

if (rdx_3 == 0x555555555555555)
    sub_1427c7670()
    noreturn

int64_t rax_6
int64_t rdx_4
rdx_4:rax_6 = muls.dp.q(0x2aaaaaaaaaaaaaab, arg1[2] - r10)
int64_t rdx_5 = rdx_4 s>> 3
int64_t rdx_6 = rdx_5 + (rdx_5 u>> 0x3f)
uint64_t rax_10 = rdx_6 u>> 1
int64_t rdi

if (rdx_6 u<= 0x555555555555555 - rax_10)
    rdi = rax_10 + rdx_6
    
    if (rdi u< rdx_3 + 1)
        rdi = rdx_3 + 1
else
    rdi = rdx_3 + 1

int64_t var_58 = rdi
int64_t rax_11 = std::allocator<struct GSISymbolEntry>::allocate(arg1, rdi)
int64_t var_48 = rax_11
int64_t r12_4 = (arg2 - r10) s/ 0x30 * 0x30
int64_t rcx_5 = r12_4 + rax_11
int64_t var_50 = rcx_5 + 0x30
*(rcx_5 + 0x10) = 0
*(rcx_5 + 0x18) = 0
*rcx_5 = *arg3
*(rcx_5 + 0x10) = arg3[1]
arg3[1].q = 0
*(arg3 + 0x18) = 0xf
*arg3 = 0
*(rcx_5 + 0x20) = arg3[2].d
*(rcx_5 + 0x24) = *(arg3 + 0x24)
*(rcx_5 + 0x28) = *(arg3 + 0x28)
*(rcx_5 + 0x2c) = *(arg3 + 0x2c)
int64_t arg_20 = rcx_5
int64_t rdx_8 = arg1[1]
int64_t r8_1 = rax_11
void* rcx_6 = *arg1

if (arg2 != rdx_8)
    sub_142992d40(rcx_6, arg2, r8_1)
    arg_20 = rax_11
    r8_1 = rcx_5 + 0x30
    rdx_8 = arg1[1]
    rcx_6 = arg2

sub_142992d40(rcx_6, rdx_8, r8_1)
sub_142997540(arg1, rax_11, rdx_3 + 1, rdi)
return *arg1 + r12_4
