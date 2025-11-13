// 函数: sub_14285e590
// 地址: 0x14285e590
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x40)
void* rax = *(arg1 + 0x88)
int64_t r9 = *(arg1 + 0x98)
int64_t arg_8 = 0

if (sub_14285d200(arg1, arg2, *(rax + 8) + *(arg1 + 0xa0), r9, arg3, &arg_8) s>= 0)
    if (arg2 != 0x16)
    label_14285e63e:
        int64_t rdx_2 = *(arg1 + 0x98)
        int64_t rax_8 = arg_8
        
        if (rax_8 != rdx_2)
            *(arg1 + 0xa0) += rax_8
            *(arg1 + 0x98) = rdx_2 - rax_8
            return 0
        
        int64_t r10 = *(arg1 + 0xb8)
        
        if (r10 != 0)
            r10(1, zx.q(*arg1), zx.q(arg2), *(*(arg1 + 0x88) + 8), rdx_2 + *(arg1 + 0xa0), arg1, 
                *(arg1 + 0xc0))
        
        return 1
    
    int32_t* rcx = *(arg1 + 8)
    
    if ((*(*(rcx + 0xc0) + 0x60) & 8) == 0)
        int32_t rax_3 = *rcx
        
        if (rax_3 s< 0x304 || rax_3 == 0x10000)
            goto label_14285e631
        
        int32_t rax_4 = arg1[0x17]
        
        if (rax_4 == 0x21 || rax_4 - 0x2a u<= 1)
            goto label_14285e63e
        
        goto label_14285e631
    
label_14285e631:
    
    if (sub_142882640(arg1, *(*(arg1 + 0x88) + 8) + *(arg1 + 0xa0), arg_8) != 0)
        goto label_14285e63e

return 0xffffffff
