// 函数: sub_1429aede0
// 地址: 0x1429aede0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = *arg1

if (rbx == 0)
    return 

int64_t rsi_1 = arg1[1]

if (rbx != rsi_1)
    do
        sub_14297d7d0(rbx)
        rbx = &rbx[3]
    while (rbx != rsi_1)
    
    rbx = *arg1

int64_t rax_1
int64_t rdx_1
rdx_1:rax_1 = muls.dp.q(0x2aaaaaaaaaaaaaab, arg1[2] - rbx)
int64_t rdx_2 = rdx_1 s>> 2

if ((rdx_2 + (rdx_2 u>> 0x3f)) * 0x18 u>= 0x1000)
    int64_t* rax_4 = rbx[-1]
    
    if (rbx - rax_4 - 8 u> 0x1f)
        _invalid_parameter_noinfo_noreturn()
        noreturn
    
    rbx = rax_4

j_sub_140a74f90(rbx)
__builtin_memset(arg1, 0, 0x18)
