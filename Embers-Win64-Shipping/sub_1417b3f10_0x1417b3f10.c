// 函数: sub_1417b3f10
// 地址: 0x1417b3f10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t rsi = zx.d(arg2)
int64_t rdx = sx.q(arg1[1].d)
int64_t rcx = *arg1
uint64_t result

if (rdx.d != rsi + 1)
    int64_t* rax_9 = (zx.q(rsi.w) << 4) + rcx
    int64_t* rcx_11 = *rax_9
    *rax_9 = 0
    
    if (rcx_11 != 0)
        (**rcx_11)(rcx_11, 1)
    
    int64_t rdi_1 = sx.q(arg1[3].d)
    int32_t rax_11 = (rdi_1 + 1).d
    arg1[3].d = rax_11
    
    if (rax_11 s> *(arg1 + 0x1c))
        sub_140594770(&arg1[2])
    
    result = arg1[2]
    *(result + (rdi_1 << 1)) = rsi.w
else
    int64_t rax_2 = rdx * 2
    int64_t* rdi = *(rcx + (rax_2 << 3) - 0x10)
    *(rcx + (rax_2 << 3) - 0x10) = 0
    int64_t rdx_1 = sx.q(arg1[1].d)
    int64_t rsi_1 = rdx_1
    int32_t rbp_1 = (rdx_1 - 1).d
    int64_t* rcx_3 = *(*arg1 + rdx_1 * 0x10 - 0x10)
    
    if (rcx_3 != 0)
        (**rcx_3)(rcx_3, 1)
        rdx_1 = zx.q(arg1[1].d)
    
    int32_t rcx_5 = rdx_1.d - rbp_1
    
    if (rcx_5 != 1)
        int64_t rax_5 = *arg1
        memmove((sx.q(rbp_1) << 4) + rax_5, rax_5 + rsi_1 * 0x10, (rcx_5 - 1) << 4)
        rdx_1 = zx.q(arg1[1].d)
    
    result = zx.q((rdx_1 - 1).d)
    arg1[1].d = result.d
    
    if (rdi != 0)
        jump(**rdi)

return result
