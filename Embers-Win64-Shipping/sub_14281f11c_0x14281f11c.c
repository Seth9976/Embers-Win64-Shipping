// 函数: sub_14281f11c
// 地址: 0x14281f11c
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* arg_8 = arg1
int64_t rdi = 0x7fffffffffffffff

if (arg2 u> 0x7fffffffffffffff)
    sub_140610c20()
    noreturn

int64_t r15_1 = arg1[1] - *arg1
int64_t rcx_1 = arg1[2] - *arg1
uint64_t rdx_1 = rcx_1 u>> 1

if (rcx_1 u<= 0x7fffffffffffffff - rdx_1)
    rdi = rdx_1 + rcx_1
    
    if (rdi u< arg2)
        rdi = arg2

int64_t arg_10 = rdi
void* rax_1 = sub_14058b9f0(rdi)
void* arg_20 = rax_1
sub_14281f244(rax_1 + r15_1, arg2 - r15_1)
__std_swap_ranges_trivially_swappable(*arg1, arg1[1], rax_1)
void* rcx_5 = *arg1

if (rcx_5 != 0)
    sub_14058ba50(rcx_5, arg1[2] - rcx_5)

*arg1 = rax_1
arg1[1] = rax_1 + arg2
void* result = rax_1 + rdi
arg1[2] = result
return result
