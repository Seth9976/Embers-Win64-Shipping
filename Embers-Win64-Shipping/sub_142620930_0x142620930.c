// 函数: sub_142620930
// 地址: 0x142620930
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdx = sx.q(*(arg1 + 0x10c))
void* rbx = arg1

if (rdx.d == 0)
    goto label_1426209f6

int64_t result = rdx << 5

if (not(arg2.d f< *(result + rbx + 4)))
    if (rdx.d s< 8)
        rbx += rdx << 5
    label_1426209f6:
        *(rbx + 0x24) = arg2.d
        *(rbx + 0x28) = arg4
        *(rbx + 0xc) = *arg3
        *(rbx + 0x1c) = arg3[1].q
        result = zx.q(*(arg1 + 0x10c) + 1)
        
        if (result.d s< 8)
            *(arg1 + 0x10c) = result.d
    
    return result

int32_t rax_2 = 0

if (rdx.d s> 0)
    void* rcx_2 = rbx + 0x24
    
    while (not(arg2.d f<= *rcx_2))
        rax_2 += 1
        rcx_2 += 0x20
        
        if (rax_2 s>= rdx.d)
            break

int32_t rdx_1 = rdx.d - rax_2
int32_t rcx_3 = 8 - (rax_2 + 1)

if (rdx_1 s< rcx_3)
    rcx_3 = rdx_1

int64_t rdi_2 = sx.q(rax_2) << 5

if (rcx_3 s> 0)
    memmove(rbx + 0xc + (sx.q(rax_2 + 1) << 5), rbx + 0xc + rdi_2, rcx_3 << 5)

rbx += rdi_2
goto label_1426209f6
