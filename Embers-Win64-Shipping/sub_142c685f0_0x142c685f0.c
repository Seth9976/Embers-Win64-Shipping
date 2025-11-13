// 函数: sub_142c685f0
// 地址: 0x142c685f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rcx = *(arg1 + 0x880)
int512_t entry_zmm2

if (rcx == 0)
    int64_t entry_r8
    sub_142c64760(arg1, "No URL set!", entry_r8, entry_zmm2)
    return 3

if (*(arg1 + 0x888) != 0)
    data_143ccb8a0(rcx)
    *(arg1 + 0x880) = 0
    *(arg1 + 0x888) = 0

int64_t rdx = *(arg1 + 0x588)
*(arg1 + 0x880) = *(arg1 + 0x6e8)
int32_t rax_2 = sub_142c5b7f0(arg1, rdx)
int32_t rdi = rax_2

if (rax_2 != 0)
    return rax_2

int64_t rcx_3 = *(arg1 + 0x4f20)
*(arg1 + 0x4ba0) = *(arg1 + 0x29c)
*(arg1 + 0x4bb0) = *(arg1 + 0x2a0)
*(arg1 + 0x2a8) = 0
*(arg1 + 0x4a98) = 0
*(arg1 + 0x4b10) = 0
*(arg1 + 0x4e24) = 0
*(arg1 + 0x4bc0) = 0
data_143ccb8a0(rcx_3)
*(arg1 + 0x4f20) = 0

if (*(arg1 + 0x438) != 4)
    char* rcx_4 = *(arg1 + 0x2b8)
    int64_t rax_6 = *(arg1 + 0x2c8)
    *(arg1 + 0x4e68) = rax_6
    
    if (rcx_4 != 0 && rax_6 == -1)
        int64_t rax_5 = rax_6
        
        do
            rax_5 += 1
        while (rcx_4[rax_5] != 0)
        
        *(arg1 + 0x4e68) = rax_5
else
    *(arg1 + 0x4e68) = *(arg1 + 0x398)

if (*(arg1 + 0x8a0) != 0)
    entry_zmm2 = sub_142c58990(arg1)

int32_t rax_7

if (*(arg1 + 0x8a8) != 0)
    rax_7, entry_zmm2 = sub_142c5a1e0(arg1)
    rdi = rax_7

if (*(arg1 + 0x8a8) == 0 || rax_7 == 0)
    *(arg1 + 0x4b18) = 1
    sub_142c63420(arg1)
    sub_142c6f080(arg1)
    sub_142c6f2a0(arg1)
    int64_t rax_8 = sx.q(*(arg1 + 0x380))
    
    if (rax_8.d != 0)
        entry_zmm2 = sub_142c52ab0(arg1, rax_8, 8, entry_zmm2)
    
    int64_t rax_9 = sx.q(*(arg1 + 0x384))
    
    if (rax_9.d != 0)
        sub_142c52ab0(arg1, rax_9, 2, entry_zmm2)
    
    *(arg1 + 0x4ba4) &= *(arg1 + 0x4ba0)
    *(arg1 + 0x4bb4) &= *(arg1 + 0x4bb0)
    
    if (*(arg1 + 0x80c) != 0 && *(arg1 + 0x4ea0) s< 1)
        sub_142c6eab0(arg1 + 0x4ea0)
        rdi = 0

return rdi
