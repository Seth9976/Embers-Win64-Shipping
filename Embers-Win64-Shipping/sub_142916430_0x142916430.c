// 函数: sub_142916430
// 地址: 0x142916430
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
int64_t* rdi = *(arg1 + 0x28)
int64_t rbx = sx.q(arg3)

if (arg2 == 0x1000)
    *rdi = arg4
else if (arg2 == 0x1001)
    if (arg3 s< 0)
        return 0
    
    int64_t rcx_2 = rdi[1]
    
    if (rcx_2 != 0)
        sub_1428a6890(rcx_2, rdi[2], "crypto\kdf\tls1_prf.c", 0x45)
    
    sub_1428b8960(&rdi[3], rdi[0x83])
    rdi[0x83] = 0
    int64_t rax_3 = sub_1428a6af0(arg4, rbx, "crypto\kdf\tls1_prf.c", 0x48)
    rdi[1] = rax_3
    
    if (rax_3 == 0)
        return 0
    
    rdi[2] = rbx
else
    if (arg2 != 0x1002)
        return 0xfffffffe
    
    if (arg3 != 0 && arg4 != 0)
        if (arg3 s< 0 || rbx.d s> 0x400 - rdi[0x83].d)
            return 0
        
        memcpy(&rdi[3] + rdi[0x83], arg4, rbx.d)
        rdi[0x83] += rbx

return 1
