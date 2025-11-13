// 函数: sub_1406989a0
// 地址: 0x1406989a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = *(arg1 + 0x18)

if (arg3 s> 0)
    int32_t rsi_1 = rdi + arg3
    sub_1405a4980(arg1, rsi_1)
    *(arg1 + 0x18) += arg3
    int32_t r8 = rdi
    
    if (rdi != rsi_1)
        if (arg2 == 0)
            do
                void* rax_4 = *(arg1 + 0x10)
                void* rcx_3 = arg1
                
                if (rax_4 != 0)
                    rcx_3 = rax_4
                
                int32_t rax_5 = r8
                
                if (r8 s< 0)
                    rax_5 = r8 + 0x1f
                
                void* r9_2 = rcx_3 + (sx.q(rax_5 s>> 5) << 2)
                char rcx_5 = r8.b & 0x1f
                r8 += 1
                *r9_2 &= not.d(1 << rcx_5)
            while (r8 != rsi_1)
        else
            do
                void* rax_1 = *(arg1 + 0x10)
                void* rdx_1 = arg1
                
                if (rax_1 != 0)
                    rdx_1 = rax_1
                
                int32_t rax_2 = r8
                
                if (r8 s< 0)
                    rax_2 = r8 + 0x1f
                
                void* r9_1 = rdx_1 + (sx.q(rax_2 s>> 5) << 2)
                int32_t rdx_2 = 1 << (r8.b & 0x1f)
                r8 += 1
                *r9_1 |= rdx_2
            while (r8 != rsi_1)

return zx.q(rdi)
