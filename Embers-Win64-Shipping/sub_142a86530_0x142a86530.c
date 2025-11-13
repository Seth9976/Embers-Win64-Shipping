// 函数: sub_142a86530
// 地址: 0x142a86530
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r13 = *arg1
int32_t r12_1 = arg3 & 0x7fffffff
int64_t r9 = arg2
int32_t rbx = -1
int32_t rbp = 0
*(arg1 + 0x34)
int32_t temp1 = mods.dp.d(sx.q(r12_1 ^ 0x4000000), *(arg1 + 0x34))
int32_t rdi = temp1
int32_t r8 = temp1
int32_t rsi_1
int32_t temp1_2

do
    int64_t r14_1 = sx.q(rdi) * 0x18
    rsi_1 = *(r14_1 + r13)
    
    if (rsi_1 == r12_1)
        if (arg1[2](r9, *(r14_1 + r13 + 0x10)) != 0)
            return r14_1 + r13
        
        r9 = arg2
        r8 = temp1
    else if (rsi_1 s< 0)
        if (rsi_1 == 0x80000001)
            break
        
        if (rbx s< 0)
            rbx = rdi
    
    if (rbp == 0)
        rbp = mods.dp.d(sx.q(r12_1), *(arg1 + 0x34) - 1) + 1
    
    *(arg1 + 0x34)
    temp1_2 = mods.dp.d(sx.q(rdi + rbp), *(arg1 + 0x34))
    rdi = temp1_2
while (temp1_2 != r8)

if (rbx s>= 0)
    rdi = rbx
else if (rsi_1 != 0x80000001)
    abort()
    noreturn

return sx.q(rdi) * 0x18 + r13
