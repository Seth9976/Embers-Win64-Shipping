// 函数: sub_142b240c0
// 地址: 0x142b240c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint8_t rsi_1 = (arg2 u>> 8).b
char rdi = arg2.b
uint32_t r8 = arg1[7].d
int32_t rcx
rcx.b = arg2.b != 0
int32_t rdx = arg1[1].d
uint64_t rcx_1 = zx.q(rcx + 1)
uint64_t rax = zx.q(r8 + rcx_1.d)

if (rax.d s<= rdx)
label_142b2412d:
    
    if (rdi == 0)
        uint8_t* rax_3 = sx.q(arg1[7].d)
        arg1[7].d = rax_3.d + 1
        int64_t rax_5 = *arg1
        rax_3[rax_5] = rsi_1
        return rax_5
    
    *(sx.q(arg1[7].d) + *arg1) = rdi
    rax = *arg1
    *(sx.q(arg1[7].d + 1) + rax) = rsi_1
    arg1[7].d += 2
else if (*(arg1 + 0x3c) != 0)
    uint32_t rax_1 = rdx * 2
    uint32_t rdx_1 = r8 + (rcx_1 << 1).d
    
    if (rax_1 s>= rdx_1)
        rdx_1 = rax_1
    
    if (rdx_1 s< 0xc8)
        rdx_1 = 0xc8
    
    int64_t rax_2 = sub_142a46cb0(arg1, rdx_1, r8)
    
    if (rax_2 != 0)
        goto label_142b2412d
    
    *(arg1 + 0x3c) = rax_2.b
    return rax_2

return rax
