// 函数: sub_142c43cc0
// 地址: 0x142c43cc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_142bf4e80(arg2)
int32_t r15 = *(arg2 + 0x60)
*(arg2 + 0x5c) = 0
int64_t result

if (r15 != 0)
    while (*(arg2 + 0x58) != 0)
        uint64_t rcx_1 = zx.q(*(arg2 + 0x5c))
        int64_t rdx = *(arg2 + 0x70)
        int32_t rdi_1 = *(rdx + rcx_1 * 0x14)
        
        if ((rdi_1 & 0xffffff7f) == 0xe33)
            void* rax_9 = sub_142c22760(arg2, rdi_1 + 0x1a)
            *(rax_9 + 0x10) |= 0x80
            result, arg4 = sub_142c22d20(arg2, rdi_1 - 1)
            
            if (*(arg2 + 0x58) == 0)
                return result
            
            int32_t r14_1 = *(arg2 + 0x64)
            int64_t rax_10 = *(arg2 + 0x78)
            uint64_t rbp_1 = zx.q(r14_1 - 2)
            uint64_t rdi_2 = rbp_1 * 0x14
            *(rdi_2 + rax_10 + 0x10) &= 0xe0
            *(rdi_2 + rax_10 + 0x10) |= 0xc
            
            if (rbp_1.d != 0)
                uint64_t r8_1
                
                do
                    r8_1 = zx.q((rbp_1 - 1).d)
                    int32_t rdx_5 = *(*(arg2 + 0x78) + r8_1 * 0x14) & 0xffffff7f
                    
                    if (rdx_5 - 0xe34 u> 3 && rdx_5 - 0xe47 u> 7 && rdx_5 != 0xe31)
                        break
                    
                    rbp_1 = zx.q(r8_1.d)
                while (r8_1.d != 0)
            
            if ((rbp_1 + 2).d u< r14_1)
                sub_142bf52d0(arg2, rbp_1.d, r14_1)
                int64_t rdx_7 = *(arg2 + 0x78)
                arg4.o = *(rdi_2 + rdx_7)
                int32_t rsi_1 = *(rdi_2 + rdx_7 + 0x10)
                uint64_t rdi_3 = zx.q(rbp_1.d) * 0x14
                int64_t rdx_8 = rdx_7 + rdi_3
                memmove(rdx_8 + 0x14, rdx_8, (r14_1 - rbp_1.d - 2) * 0x14)
                int64_t rax_16 = *(arg2 + 0x78)
                arg4.o = arg4.o
                *(rax_16 + rdi_3) = arg4.o
                *(rax_16 + rdi_3 + 0x10) = rsi_1
            else if (rbp_1.d != 0 && *(arg2 + 0x1c) == 0)
                sub_142bf52d0(arg2, (rbp_1 - 1).d, r14_1)
        else if (*(arg2 + 0x59) == 0)
            *(arg2 + 0x5c) += 1
        else if (*(arg2 + 0x78) != rdx || *(arg2 + 0x64) != rcx_1.d)
            char rax_4
            rax_4, arg4 = sub_142bf50b0(arg2, 1, 1)
            
            if (rax_4 != 0)
                int64_t rdx_1 = *(arg2 + 0x70)
                uint64_t r9_1 = zx.q(*(arg2 + 0x5c)) * 5
                arg4.o = *(rdx_1 + (r9_1 << 2))
                uint64_t rcx_3 = zx.q(*(arg2 + 0x64)) * 5
                int64_t rax_7 = *(arg2 + 0x78)
                *(rax_7 + (rcx_3 << 2)) = arg4.o
                *(rax_7 + (rcx_3 << 2) + 0x10) = *(rdx_1 + (r9_1 << 2) + 0x10)
                *(arg2 + 0x64) += 1
                *(arg2 + 0x5c) += 1
        else
            *(arg2 + 0x64) += 1
            *(arg2 + 0x5c) += 1
        
        if (*(arg2 + 0x5c) u>= r15)
            break

result = sub_142bf5b20(arg2)

if (*(arg1 + 4) == 0x54686169 && *(arg1 + 0x30) == 0)
    return sub_142c43f00(arg4, arg2, arg3)

return result
