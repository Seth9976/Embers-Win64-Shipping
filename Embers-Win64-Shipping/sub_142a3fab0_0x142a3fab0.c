// 函数: sub_142a3fab0
// 地址: 0x142a3fab0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_142a43f80(arg3 + 0xa0, zx.q(*(arg2 + 2)) * *(arg2 + 0x30))
sub_142a43f80(arg3 + 0x20, 1)

if (*(arg1 + 8) == 0 && (arg2[1] & 2) == 0 && sub_142a43d70(8) != 0)
    int32_t rdx_2 = *(arg1 + 0x68)
    int64_t r8 = *(arg2 + 0x30)
    int64_t rdi_1
    
    if (rdx_2 != 3)
        rdi_1 = 1 << (*(arg1 + 0x58)).b
    else
        rdi_1 = *(arg1 + 0x40)
    
    uint32_t rax_2 = zx.d(*arg2)
    void* rcx_5 = zx.q(rax_2) * rdi_1 + arg1
    
    if (rax_2.b == 0)
        rcx_5 += *(arg1 + 0x48)
        rdi_1 -= *(arg1 + 0x48)
        
        if (r8 != 0 && rdx_2 s<= 1)
            int64_t rax_5 = r8 - modu.dp.q(0:rcx_5, r8)
            
            if (rax_5 u< r8)
                rcx_5 += rax_5
                rdi_1 -= rax_5
    
    arg2[1] |= 2
    j_sub_142a423a0(rcx_5, rdi_1, arg3)

arg2[1] &= 0xf7
__builtin_memset(&arg2[2], 0, 0x4e)
arg2[1] &= 0xfe
*(arg1 + 0x30) -= 1
return 0
