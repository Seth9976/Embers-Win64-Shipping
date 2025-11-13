// 函数: sub_141c55ed0
// 地址: 0x141c55ed0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(arg1[1].d)
int32_t rax = (rdi + 1).d
arg1[1].d = rax

if (rax s> *(arg1 + 0xc))
    sub_1405a4cf0(arg1)

int64_t result = *arg1
*(result + (rdi << 2)) = arg2

if (*(arg1 + 0x54) != arg3)
    int32_t rbp_2 = arg1[0xb].d * arg3
    *(arg1 + 0x54) = arg3
    void* rbx_1 = &arg1[7]
    int64_t i_1 = 2
    int64_t i
    
    do
        int32_t rax_1 = *(rbx_1 + 4)
        int32_t rdi_1 = 0
        *rbx_1 = 0
        
        if (rax_1 s< 0 && rax_1 != 0)
            sub_1405dadb0(rbx_1 - 8, 0)
            rdi_1 = *rbx_1
        
        int32_t rax_2 = rdi_1 + rbp_2
        *rbx_1 = rax_2
        
        if (rax_2 s> *(rbx_1 + 4))
            sub_1406105e0(rbx_1 - 8)
        
        result = memset(*(rbx_1 - 8) + (sx.q(rdi_1) << 2), 0, sx.q(rbp_2) << 2)
        rbx_1 += 0x10
        i = i_1
        i_1 -= 1
    while (i != 1)

return result
