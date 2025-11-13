// 函数: sub_141e174b0
// 地址: 0x141e174b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbp_1 = *arg2 + 0x4a0
int32_t rdx = 0
*(arg1 + 0x20) = rbp_1
int32_t rax = *(arg1 + 0x1c)
int32_t rsi = *(rbp_1 + 8)
*(arg1 + 0x18) = 0

if (rsi s> rax && rax != rsi)
    sub_1405a5220(arg1 + 0x10, rsi)
    rdx = *(arg1 + 0x18)

int32_t rax_1 = rdx + rsi
*(arg1 + 0x18) = rax_1

if (rax_1 s> *(arg1 + 0x1c))
    sub_140638970(arg1 + 0x10)

int32_t rcx_2 = 0
*(arg1 + 0x38) = rbp_1 + 0xc0

if (rbp_1 != -0xc0)
    int64_t i_1 = sx.q(*(rbp_1 + 0xc8))
    
    if (i_1 s> 0)
        void* rdx_3 = *(rbp_1 + 0xc0)
        int64_t i
        
        do
            int32_t rax_2 = rcx_2
            rdx_3 += 2
            rcx_2 += 1
            
            if (*(rdx_3 - 2) == 0xffff)
                rcx_2 = rax_2
            
            i = i_1
            i_1 -= 1
        while (i != 1)

*(arg1 + 0x40) = rcx_2.w
int32_t rax_3 = *(arg1 + 0x34)
*(arg1 + 0x30) = 0

if (rax_3 s< 0 && rax_3 != 0)
    sub_1405c5570(arg1 + 0x28, 0)

uint64_t rbp_2 = zx.q(*(arg1 + 0x40))
int64_t rdi = sx.q(*(arg1 + 0x30))
int32_t rax_4 = (rdi + rbp_2).d
*(arg1 + 0x30) = rax_4

if (rax_4 s> *(arg1 + 0x34))
    sub_1405a4d70(arg1 + 0x28)

int64_t result = memset(*(arg1 + 0x28) + (rdi << 3), 0, rbp_2 << 3)
*(arg1 + 0x42) = 1
return result
