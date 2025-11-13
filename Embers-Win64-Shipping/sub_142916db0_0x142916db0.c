// 函数: sub_142916db0
// 地址: 0x142916db0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
int32_t* rdi = *(arg1 + 0x28)
int64_t rbx = sx.q(arg3)

if (arg2 == 0x1003)
    if (arg4 == 0)
        return 0
    
    *(rdi + 8) = arg4
else if (arg2 == 0x1004)
    if (arg3 != 0 && arg4 != 0)
        if (arg3 s< 0)
            return 0
        
        int64_t rcx_4 = *(rdi + 0x10)
        
        if (rcx_4 != 0)
            sub_1428a6890(rcx_4, *(rdi + 0x18), "crypto\kdf\hkdf.c", 0x5e)
        
        int64_t rax_4 = sub_1428a6af0(arg4, rbx, "crypto\kdf\hkdf.c", 0x60)
        *(rdi + 0x10) = rax_4
        
        if (rax_4 == 0)
            return 0
        
        *(rdi + 0x18) = rbx
else if (arg2 == 0x1005)
    if (arg3 s< 0)
        return 0
    
    int64_t rcx_2 = *(rdi + 0x20)
    
    if (rcx_2 != 0)
        sub_1428a6890(rcx_2, *(rdi + 0x28), "crypto\kdf\hkdf.c", 0x6c)
    
    int64_t rax_3 = sub_1428a6af0(arg4, rbx, "crypto\kdf\hkdf.c", 0x6e)
    *(rdi + 0x20) = rax_3
    
    if (rax_3 == 0)
        return 0
    
    *(rdi + 0x28) = rbx
else if (arg2 != 0x1006)
    if (arg2 != 0x1007)
        return 0xfffffffe
    
    *rdi = rbx.d
else if (arg3 != 0 && arg4 != 0)
    if (arg3 s< 0 || rbx.d s> 0x400 - rdi[0x10c])
        return 0
    
    memcpy(&rdi[0xc] + *(rdi + 0x430), arg4, rbx.d)
    *(rdi + 0x430) += rbx

return 1
