// 函数: sub_14192a0f0
// 地址: 0x14192a0f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t r10 = 0
*(arg1 + 0xc0) = arg6
int32_t* rdi = arg4
void* result = arg1
*(arg1 + 0xc8) = arg7
uint64_t i_1 = zx.q(arg2)

if (arg2 != 0)
    void* rdx = arg1 + 0xc
    r10 = zx.q(i_1.d)
    int32_t* rsi_2 = arg5 - arg4
    uint64_t i
    
    do
        __builtin_memset(arg1, 0, 0x18)
        *(rdx - 0xc) = *arg3
        uint64_t rax_3 = *arg3
        
        if (rax_3 != 0)
            rax_3 = zx.q(*(rax_3 + 0x10))
        
        *(rdx - 4) = rax_3.d
        *rdx = *(rsi_2 + arg4)
        int32_t rax_5
        
        if (rdi != 0)
            rax_5 = *arg4
        
        if (rdi == 0 || rax_5 == 0xffffffff)
            rax_5 = -1
        
        *(rdx + 4) = rax_5
        arg1 += 0x18
        rdx += 0x18
        arg3 = &arg3[1]
        arg4 = &arg4[1]
        i = i_1
        i_1 -= 1
    while (i != 1)

if (arg2 == 0 || r10.d u< 8)
    void* rdx_3 = result + ((r10 + ((r10 + 1) << 1)) << 3)
    
    do
        uint64_t rcx = r10 * 3
        *(result + (rcx << 3)) = 0
        rdx_3 += 0x18
        *(result + (rcx << 3) + 8) = 0
        r10 = zx.q(r10.d + 1)
        *(result + (rcx << 3) + 0x10) = 0
        *(rdx_3 - 0x18) = 0xffffffff
    while (r10.d u< 8)

return result
