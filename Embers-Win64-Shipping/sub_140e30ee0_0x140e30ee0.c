// 函数: sub_140e30ee0
// 地址: 0x140e30ee0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_38 = -2

if (*(arg1 + 0x28) != 0)
    return &__return_addr

void* arg_18 = &data_143e29ae0
EnterCriticalSection(&data_143e29ae0)
int32_t rax = 0x55

if (arg2 != 0)
    rax = arg2

int32_t rsi_1

if (rax s>= 1)
    rsi_1 = 0x64
    
    if (rax s< 0x64)
        rsi_1 = rax
else
    rsi_1 = 1

int64_t r8_1 = 0

if (*(arg1 + 0x38) == 1)
    int64_t r10_1 = *(arg1 + 8)
    int64_t rax_2
    int32_t rdx
    rdx:rax_2 = sx.o(*(arg1 + 0x10))
    int32_t rax_4 = ((rax_2 + (zx.q(rdx) & 3)) s>> 2).d
    
    if (rax_4 s> 0)
        int64_t i = 0
        
        do
            char rdx_2 = *(r10_1 + (i << 2) + 2) ^ *(r10_1 + (i << 2))
            char rcx = rdx_2 ^ *(r10_1 + (i << 2) + 2)
            *(r10_1 + (i << 2) + 2) = rcx
            *(r10_1 + (i << 2)) = rcx ^ rdx_2
            i += 1
        while (i s< sx.q(rax_4))

int64_t rdx_3 = *(arg1 + 0x10)
*(arg1 + 0x28) = 0

if (rdx_3 s> *(arg1 + 0x30))
    sub_140a4fbe0(arg1 + 0x20, rdx_3)
    r8_1 = *(arg1 + 0x28)

int64_t rax_6 = *(arg1 + 0x10) + r8_1
*(arg1 + 0x28) = rax_6

if (rax_6 s> *(arg1 + 0x30))
    sub_140a4f990(arg1 + 0x20)

int64_t arg_8 = *(arg1 + 0x28)
int32_t var_2c_1 = 3
int16_t var_28_1 = 0
int32_t var_30 = rsi_1
sub_140e3a2c0(*(arg1 + 0x20), &arg_8, sx.q(*(arg1 + 0x3c)), sx.q(*(arg1 + 0x40)), 
    sx.q(*(arg1 + 0x60)), *(arg1 + 8), &var_30)
int64_t rdi_1 = *(arg1 + 0x28)
int64_t rcx_4 = arg_8
int64_t rdi_2 = rdi_1 - rcx_4

if (rdi_1 != rcx_4)
    int64_t rax_9 = *(arg1 + 0x28)
    int64_t r8_4 = rax_9 - rdi_2
    
    if (r8_4 != rcx_4)
        int64_t rcx_5 = rcx_4 + *(arg1 + 0x20)
        memmove(rcx_5, rcx_5 + rdi_2, r8_4.d - rcx_4.d)
        rax_9 = *(arg1 + 0x28)
    
    *(arg1 + 0x28) = rax_9 - rdi_2
    sub_140e33270(arg1 + 0x20)

return LeaveCriticalSection(&data_143e29ae0)
