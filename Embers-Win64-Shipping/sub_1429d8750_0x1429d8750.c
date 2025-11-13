// 函数: sub_1429d8750
// 地址: 0x1429d8750
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* rax = *(arg1 + 8)
int32_t arg_8 = 4
uint64_t rdx = zx.q(*rax)
int64_t r15 = sx.q(rax[1])
int64_t r12 = sx.q(rax[2])
int32_t rsi_2 = ((*(rax + 0x50) - *(rax + 0x48)) s>> 2).d
int32_t rbp_2 = ((*(rax + 0x80) - *(rax + 0x78)) s>> 2).d
sub_1429d8580(arg1 + 0x1f8, sx.q((rdx * 2).d), &arg_8)
uint64_t rax_2 = 0

if (**(arg1 + 8) s> 0)
    int64_t r8_1 = 0
    
    do
        int32_t rdx_2 = (rax_2 << 2).d
        rax_2 = zx.q(rax_2.d + 1)
        r8_1 += 8
        *(r8_1 + *(arg1 + 0x1f8) - 4) = rdx_2
    while (rax_2.d s< **(arg1 + 8))

void* rcx_4 = *(arg1 + 8)
int32_t var_30 = ((*(arg1 + 0x200) - *(arg1 + 0x1f8)) s>> 2).d
int128_t zmm0 = (*(arg1 + 0x1f8)).o
arg_8 = 0
*(arg1 + 0x58) = zmm0
int32_t var_30_1 = ((*(rcx_4 + 0x20) - *(rcx_4 + 0x18)) s>> 2).d
*(arg1 + 0x68) = (*(rcx_4 + 0x18)).o
sub_1429d8580(arg1 + 0x78, sx.q((rdx << 2).d), &arg_8)
sub_1429d8580(arg1 + 0x90, sx.q(rsi_2), &arg_8)
sub_1429d8580(arg1 + 0xc0, sx.q(rbp_2), &arg_8)
sub_1429d8580(arg1 + 0xa8, 0, &arg_8)
sub_1429d8580(arg1 + 0xd8, r15, &arg_8)
return sub_1429d8580(arg1 + 0xf0, r12, &arg_8)
