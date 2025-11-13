// 函数: sub_142ba92f0
// 地址: 0x142ba92f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rcx = *(arg1 + 0x1d4)

if (*(arg1 + 0x1c) s< rcx || *(arg1 + 0x1c0) u>= *(arg1 + 0x44))
    if (*(arg1 + 0x315) != 0)
        *(arg1 + 0x18) = 0x86
else if (rcx s> 0)
    do
        *(arg1 + 0x30) -= 1
        int64_t rax_2 = *(arg1 + 0x28)
        int16_t rdi_1 = *(rax_2 + (sx.q(*(arg1 + 0x30)) << 2))
        
        if (rdi_1 u< *(arg1 + 0x84))
            int32_t* r9_1 = *(arg1 + 0x50) + (zx.q(*(arg1 + 0x1c0)) << 3)
            int64_t rax_4 = *(arg1 + 0x90)
            uint64_t rcx_3 = zx.q(rdi_1)
            (*(arg1 + 0x340))(arg1, arg1 + 0x78, zx.q(rdi_1), 
                zx.q(neg.d((*(arg1 + 0x328))(arg1, zx.q(*(rax_4 + (rcx_3 << 3)) - *r9_1), 
                    zx.q(*(rax_4 + (rcx_3 << 3) + 4) - r9_1[1])))))
        else if (*(arg1 + 0x315) != 0)
            *(arg1 + 0x18) = 0x86
            return rax_2
        
        *(arg1 + 0x1d4) -= 1
    while (*(arg1 + 0x1d4) s> 0)

int32_t rax_7 = *(arg1 + 0x30)
*(arg1 + 0x34) = rax_7
*(arg1 + 0x1d4) = 1
return rax_7
