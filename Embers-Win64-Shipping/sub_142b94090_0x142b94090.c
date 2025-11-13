// 函数: sub_142b94090
// 地址: 0x142b94090
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0)
    return zx.q((arg1 + 0x23).d)

if (arg2 == 0)
    return zx.q((arg2 + 6).d)

if (*(arg1 + 0x90) == 0)
    return 0x22

*arg2 = 0
int64_t rdi = *(arg1 + 0x98)
void* r13 = *(*(arg1 + 0x90) + 0x18)
int32_t arg_8
void** rax_4 = sub_142b99860(rdi, *(r13 + 0x3c), &arg_8)
int32_t rbx = arg_8

if (rbx != 0)
    goto label_142b941bc

int64_t* rax_5 = (*(rdi + 8))(rdi, zx.q(rbx + 0x18))

if (rax_5 != 0)
    __builtin_memset(rax_5, 0, 0x18)
else
    rbx = (&rax_5[8]).d

if (rbx != 0)
label_142b941b1:
    
    if (rax_5 != 0)
        (*(rdi + 0x10))(rdi, rax_5)
    
label_142b941bc:
    
    if (rax_4 != 0)
        (*(rdi + 0x10))(rdi, rax_4)
else
    *rax_4 = arg1
    int64_t rax_6 = (*(rdi + 8))(rdi, zx.q(rbx + 0x28))
    
    if (rax_6 != 0)
        __builtin_memset(rax_6, 0, 0x28)
    else
        rbx = (rax_6 + 0x40).d
    
    if (rbx != 0)
        goto label_142b941b1
    
    rax_4[7] = rax_6
    int64_t rax_7 = *(r13 + 0x58)
    
    if (rax_7 != 0)
        rbx = rax_7(rax_4)
    
    if (rbx != 0)
        goto label_142b941b1
    
    *arg2 = rax_4
    rax_5[2] = rax_4
    sub_142b92db0(arg1 + 0xa8, rax_5)

return zx.q(rbx)
