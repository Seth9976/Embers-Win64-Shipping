// 函数: sub_140d9b460
// 地址: 0x140d9b460
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = 0

if (*(arg1 + 0x1f0) s<= 0)
    return 

int64_t rdi_1 = 0

do
    void* rcx = *(rdi_1 + *(arg1 + 0x1e8) + 8)
    uint64_t rax
    
    if (rcx != 0)
        rax = 0
        
        if (0 == *(rcx + 8))
            *(rcx + 8) = 0
        else
            rax = zx.q(*(rcx + 8))
    
    if (rcx == 0 || rax.d != 1)
        i += 1
        rdi_1 += 0x10
    else
        sub_140dbb060(arg1 + 0x1e8, i, rax.d, rax.b)
while (i s< *(arg1 + 0x1f0))
