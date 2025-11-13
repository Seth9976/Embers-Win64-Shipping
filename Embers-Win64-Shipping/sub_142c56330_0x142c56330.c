// 函数: sub_142c56330
// 地址: 0x142c56330
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rcx = *arg2

if (rcx != 0)
    int64_t rdx = arg2[2]
    
    if (arg2[1] + 1 u>= rdx)
        int64_t rdi_1 = rdx * 2
        
        if (rdi_1 u<= rdx)
            arg2[3].d = 1
            return 0xffffffff
        
        int64_t rax_4 = data_143ccb8a8(rcx, rdi_1)
        
        if (rax_4 == 0)
            arg2[3].d = 1
            return 0xffffffff
        
        *arg2 = rax_4
        arg2[2] = rdi_1
else
    int64_t rax = data_143ccb898(0x20)
    *arg2 = rax
    
    if (rax == 0)
        arg2[3].d = 1
        return 0xffffffff
    
    arg2[2] = 0x20
    arg2[1] = 0

(*arg2)[arg2[1]] = arg1
arg2[1] += 1
return zx.q(arg1)
