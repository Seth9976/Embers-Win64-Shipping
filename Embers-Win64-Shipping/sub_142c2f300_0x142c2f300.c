// 函数: sub_142c2f300
// 地址: 0x142c2f300
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbp = 0
uint32_t r14_1 = zx.d(*(arg1 + 0xa)) << 8
uint64_t result = zx.q(*(arg1 + 0xb))
void* rbx_2 = zx.q(((zx.d(*(arg1 + 8)) << 8) + zx.d(*(arg1 + 9))) * 0xc) + arg1 + 0xc
int32_t r14_2 = r14_1 + result.d

if (r14_1 != neg.d(result.d))
    uint64_t rsi
    uint64_t arg_8 = rsi
    
    do
        if ((arg3 & ((zx.d(*(rbx_2 + 5)) << 0x10) + (zx.d(*(rbx_2 + 6)) << 8)
                + (zx.d(*(rbx_2 + 4)) << 0x18) + zx.d(*(rbx_2 + 7)))) != 0)
            int32_t rax_9
            
            if ((0x2000 & (zx.w(*(rbx_2 + 2)) * 0x100 + zx.w(*(rbx_2 + 3)))) == 0)
                rax_9.b = (*(*(arg2 + 0x18) + 0x38) & 0xfffffffe) == 6
            
            if ((0x2000 & (zx.w(*(rbx_2 + 2)) * 0x100 + zx.w(*(rbx_2 + 3)))) != 0 || rax_9
                    == zx.d(((zx.w(*(rbx_2 + 2)) * 0x100 + zx.w(*(rbx_2 + 3))) u>> 0xf).b))
                uint16_t rax_11 = zx.w(*(rbx_2 + 3))
                
                if ((0x1000 & (zx.w(*(rbx_2 + 2)) * 0x100 + zx.w(*(rbx_2 + 3)))) == 0)
                    int32_t rdx_8
                    rdx_8.w = (zx.d(*(rbx_2 + 2)) * 0x100).w + rax_11
                    rdx_8.w u>>= 0xe
                    int32_t rax_13
                    rax_13.b = (*(*(arg2 + 0x18) + 0x38) & 0xfffffffd) == 5
                    rsi.b = (rdx_8 & 1) != rax_13
                else
                    rsi.w = (zx.d(*(rbx_2 + 2)) * 0x100).w + rax_11
                    rsi.w u>>= 0xe
                    rsi.b &= 1
                
                if (sub_142c22650(*(arg2 + 0x18), *(arg2 + 8), "start chain subtable %d", 
                        zx.q(*(arg2 + 0x60))) != 0)
                    if (rsi.b != 0)
                        sub_142bf5780(*(arg2 + 0x18))
                    
                    sub_142c2f4f0(rbx_2, arg2)
                    
                    if (rsi.b != 0)
                        sub_142bf5780(*(arg2 + 0x18))
                    
                    sub_142c22650(*(arg2 + 0x18), *(arg2 + 8), "end chain subtable %d", 
                        zx.q(*(arg2 + 0x60)))
                    result = *(arg2 + 0x18)
                    
                    if (*(result + 0x58) == 0)
                        break
        
        uint64_t rcx_14 = zx.q(*rbx_2)
        rbp += 1
        result = zx.q(*(rbx_2 + 1))
        *(arg2 + 0x60) += 1
        rbx_2 = rbx_2 + result + (rcx_14 << 8)
    while (rbp u< r14_2)

return result
