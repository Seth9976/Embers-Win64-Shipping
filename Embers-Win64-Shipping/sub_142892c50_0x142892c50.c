// 函数: sub_142892c50
// 地址: 0x142892c50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
void* rax = *arg1

if ((*(rax + 0x10) & 0x100000) != 0)
    int32_t rax_1 = (*(rax + 0x20))(arg1, arg4, 0, 0)
    
    if (rax_1 s>= 0)
        *arg3 = rax_1
        return 1
    
    return 0

uint64_t rbx = zx.q(*(rax + 4))

if (rbx.d u> 0x20)
    sub_1428bc530()
    noreturn

if (rbx.d != 1)
    uint64_t rax_4 = zx.q(*(arg1 + 0x14))
    
    if ((*(arg1 + 0x6c) & 0x100) == 0)
        int32_t rdx_2 = rbx.d - rax_4.d
        int64_t rcx_2
        int64_t rdi_3
        
        if (rax_4.d u< rbx.d)
            rdi_3, rcx_2 = __memfill_u8(&arg1[7] + rax_4, rdx_2.b, sx.q(rdx_2))
        int32_t result = (*(*arg1 + 0x20))(arg1, arg2, &arg1[7], rbx)
        
        if (result != 0)
            *arg3 = rbx.d
        
        return result
    
    if (rax_4.d != 0)
        sub_1428a5670(6, 0x7f, 0x8a, "crypto\evp\evp_enc.c", 0x195)
        return 0

*arg3 = 0
return 1
