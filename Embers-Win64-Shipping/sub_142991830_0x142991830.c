// 函数: sub_142991830
// 地址: 0x142991830
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* arg_8 = arg1
int64_t var_48 = -2
int64_t r10 = *arg1
int64_t rax_3
int64_t rdx_1
rdx_1:rax_3 = muls.dp.q(0x2aaaaaaaaaaaaaab, arg1[1] - r10)
int64_t rdx_2 = rdx_1 s>> 1
int64_t rdx_3 = rdx_2 + (rdx_2 u>> 0x3f)

if (rdx_3 == 0x1555555555555555)
    sub_1427c7670()
    noreturn

int64_t rax_6
int64_t rdx_4
rdx_4:rax_6 = muls.dp.q(0x2aaaaaaaaaaaaaab, arg1[2] - r10)
int64_t rdx_5 = rdx_4 s>> 1
int64_t rdx_6 = rdx_5 + (rdx_5 u>> 0x3f)
uint64_t rax_10 = rdx_6 u>> 1
int64_t rbx

if (rdx_6 u<= 0x1555555555555555 - rax_10)
    rbx = rax_10 + rdx_6
    
    if (rbx u< rdx_3 + 1)
        rbx = rdx_3 + 1
else
    rbx = rdx_3 + 1

int64_t arg_10 = rbx
int64_t rax_11 = sub_142997ad0(arg1, rbx)
int64_t arg_20 = rax_11
int64_t r12_3 = (arg2 - r10) s/ 0xc * 0xc
*(r12_3 + rax_11) = *arg3
*(r12_3 + rax_11 + 8) = arg3[1].d
int64_t r8_1 = arg1[1]
int64_t rdx_8 = *arg1
int64_t rcx_7 = rax_11
uint32_t count

if (arg2 != r8_1)
    memmove(rcx_7, rdx_8, arg2.d - rdx_8.d)
    rcx_7 = r12_3 + 0xc + rax_11
    count = (arg1[1]).d - arg2.d
    rdx_8 = arg2
else
    count = r8_1.d - rdx_8.d

memmove(rcx_7, rdx_8, count)
sub_142997610(arg1, rax_11, rdx_3 + 1, rbx)
return *arg1 + r12_3
