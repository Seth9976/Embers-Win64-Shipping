// 函数: sub_142b9bd30
// 地址: 0x142b9bd30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0 || arg1 == 0 || arg1[1] == 0)
    return 6

int64_t** rdi = nullptr
*arg2 = 0
int32_t* r14 = arg1[1]

if (r14 == 0)
    return 6

int64_t* rbp = *arg1
int32_t arg_10
int64_t** rax = sub_142b99860(*rbp, *r14, &arg_10)
int32_t rbx = arg_10

if (rbx == 0)
    *rax = rbp
    rdi = rax
    rax[1] = r14
    rax[2].d = r14[1]
    rbx = arg_10

if (rbx == 0)
    *(rdi + 0x14) = *(arg1 + 0x14)
    rdi[2].d = arg1[2].d
    int64_t rax_3 = *(r14 + 0x18)
    int32_t rax_4
    
    if (rax_3 != 0)
        rax_4 = rax_3(arg1, rdi)
        rbx = rax_4
    
    if (rax_3 == 0 || rax_4 == 0)
        *arg2 = rdi
    else
        sub_142b9bc20(rdi)

return zx.q(rbx)
