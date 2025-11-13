// 函数: sub_141e14f20
// 地址: 0x141e14f20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = *arg4
int64_t rdx = sx.q(*arg1)
int32_t rbx = arg4[1].d

if (*(result + rdx * 0xc) != arg2)
    uint64_t r8 = zx.q(rdx.d)
    
    do
        int32_t temp2_1 = rbx
        rbx -= 1
        
        if (temp2_1 - 1 s< 0)
            break
        
        rdx = zx.q((r8 + 1).d)
        *arg1 = rdx.d
        int32_t rcx = arg4[1].d
        
        if (rdx.d == rcx && arg3 == 0)
            break
        
        rdx = zx.q(mods.dp.d(sx.q(rdx.d), rcx))
        *arg1 = rdx.d
        result = *arg4
        r8 = sx.q(rdx.d)
    while (*(result + r8 * 0xc) != arg2)

int64_t rax_2

if (rdx.d s>= 0 && rdx.d s< arg4[1].d)
    rax_2 = sx.q(rdx.d)
    result = *arg4

if (rdx.d s< 0 || rdx.d s>= arg4[1].d || *(result + rax_2 * 0xc) != arg2)
    *arg1 = 0xffffffff

return result
