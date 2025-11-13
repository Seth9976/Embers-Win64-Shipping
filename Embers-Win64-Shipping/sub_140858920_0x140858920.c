// 函数: sub_140858920
// 地址: 0x140858920
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 == 0)
    return 

void* r10_1 = *(arg1 + 0x80)
void* rax_1 = arg1
int64_t rsi_1 = sx.q(arg2)
int64_t rbp_2 = rsi_1 << 5
int32_t i_1 = arg3

if (r10_1 != 0)
    rax_1 = r10_1

void* rax_2 = rax_1 + rbp_2
int32_t i

do
    void* rcx = *(rax_2 + 8)
    
    if (rcx != 0)
        *(rcx + 8) -= 1
    
    __builtin_memset(rax_2, 0, 0x18)
    *(rax_2 + 0x18) = 0xffffffff
    *(rax_2 + 0x1c) = 0
    rax_2 += 0x20
    i = i_1
    i_1 -= 1
while (i != 1)
int32_t rax_3 = *(arg1 + 0x88)
int32_t rdx_1 = rax_3 - rsi_1.d

if (rdx_1 != arg3)
    void* rax_4 = *(arg1 + 0x80)
    void* rcx_1 = arg1
    
    if (rax_4 != 0)
        rcx_1 = rax_4
    
    memmove(rcx_1 + rbp_2, (sx.q(rsi_1.d + arg3) << 5) + rcx_1, (rdx_1 - arg3) << 5)
    rax_3 = *(arg1 + 0x88)

*(arg1 + 0x88) = rax_3 - arg3

if (arg4 != 0)
    sub_14085a7e0(arg1)
