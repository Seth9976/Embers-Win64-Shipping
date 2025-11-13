// 函数: sub_142b96840
// 地址: 0x142b96840
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg3 = 0

if (arg1 == 0)
    return zx.q((arg1 + 0x21).d)

if (arg2 == 0)
    return zx.q((arg2 + 6).d)

int32_t rdi = 0
int64_t rbp = *arg1
int64_t* rax_2 = (*(rbp + 8))(rbp, 0x48)
int64_t* rbx = rax_2

if (rax_2 != 0)
    __builtin_memset(rbx, 0, 0x48)
else
    rdi = (&rax_2[8]).d

if (rdi == 0)
    rbx[6] = rbp
    char rax_3 = (*arg2).b
    
    if ((rax_3 & 1) == 0)
        if ((rax_3 & 4) != 0)
            rdi = sub_142b9ebf0(rbx, *(arg2 + 0x18))
            rbx[3] = *(arg2 + 0x18)
            goto label_142b96931
        
        if ((rax_3 & 2) != 0 && *(arg2 + 0x20) != 0)
            (*(rbp + 0x10))(rbp, rbx)
            rbx = *(arg2 + 0x20)
            goto label_142b96931
        
        rdi = 6
    label_142b96943:
        
        if (rbx != 0)
            (*(rbp + 0x10))(rbp, rbx)
        
        rbx = nullptr
    else
        int32_t rcx_1 = arg2[4]
        *rbx = *(arg2 + 8)
        rbx[1].d = rcx_1
        *(rbx + 0xc) = 0
        rbx[7] = 0
        rbx[4] = 0
        rbx[5] = 0
    label_142b96931:
        
        if (rdi != 0)
            goto label_142b96943
        
        rbx[6] = rbp
    
    *arg3 = rbx

return zx.q(rdi)
