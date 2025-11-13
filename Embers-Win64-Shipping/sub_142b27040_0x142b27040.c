// 函数: sub_142b27040
// 地址: 0x142b27040
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*arg8 s> 0)
    return 

if (arg7 == 0)
    sub_142b27540(arg1, arg2, arg3, arg4, arg8)
    return 

int64_t rdi_1 = sx.q(arg6)
bool cond:0_1

if (rdi_1.d == 0)
    char* rax_1 = 1
    
    while (true)
        if (rax_1[arg7] == 0)
            cond:0_1 = true
            break
        
        rax_1 = &rax_1[1]
        
        if (rax_1 s>= 0x100)
            cond:0_1 = false
            break
    
    goto label_142b270de

if (rdi_1.d s< 2 || zx.d(*arg5) != 0)
    sub_142b27540(arg1, arg2, arg3, arg4, arg8)
    return 

cond:0_1 = zx.d(arg5[sx.q((rdi_1 - 1).d) * 2]) == 0
label_142b270de:

if (cond:0_1)
    sub_142b27540(arg1, arg2, arg3, arg4, arg8)
    return 

if (*(arg1 + 0x4c) != 0)
    sub_142a7dcd0(*(arg1 + 0x40))
    *(arg1 + 0x4c) = 0

*(arg1 + 0x20) = arg7
int32_t rdx = 0
*(arg1 + 0x40) = arg3
int64_t rax = 0
*(arg1 + 0x48) = arg4

if (rdi_1.d s> 0)
    while ((*(arg5 + (rax << 2)) & 0xff0000) == 0)
        rdx += 1
        rax += 1
        
        if (rax s>= rdi_1)
            break

if (rdx != rdi_1.d)
    *(arg1 + 0x28) = *(arg5 + (sx.q((rdi_1 - 1).d) << 2)) & 0xffff0000
    *(arg1 + 0x38) = rdi_1.d - rdx
    *(arg1 + 0x30) = &arg5[sx.q(rdx) * 2]
else
    *(arg1 + 0x28) = 0
    *(arg1 + 0x30) = 0
    *(arg1 + 0x38) = 0
