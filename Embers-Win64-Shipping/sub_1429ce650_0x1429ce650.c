// 函数: sub_1429ce650
// 地址: 0x1429ce650
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_10 = arg2
int64_t var_28 = -2
int128_t* rax = sub_1429ce800(arg1, arg2)
int128_t* arg_18 = rax
char var_30 = arg1.b
char var_38 = 0
sub_1429cdfb0(*arg1, arg1[1], rax)
void* r9_1 = *arg1
int64_t rax_1
int64_t rdx_1
rdx_1:rax_1 = muls.dp.q(0x2aaaaaaaaaaaaaab, arg1[1] - r9_1)
int64_t rdi_1 = rdx_1 s>> 2

if (r9_1 != 0)
    int64_t rax_2
    int64_t rdx_2
    rdx_2:rax_2 = muls.dp.q(0x2aaaaaaaaaaaaaab, arg1[2] - r9_1)
    int64_t rdx_3 = rdx_2 s>> 2
    sub_1429ceb00(arg1, r9_1, (rdx_3 u>> 0x3f) + rdx_3)

arg1[2] = rax + arg2 * 0x18
int64_t result = (rdi_1 + (rdi_1 u>> 0x3f)) * 3
arg1[1] = rax + (result << 3)
*arg1 = rax
return result
