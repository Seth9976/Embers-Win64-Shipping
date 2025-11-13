// 函数: sub_14080f1a0
// 地址: 0x14080f1a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rbp = zx.q(arg3)

if (*(arg2 + 0xb0) u<= arg3)
    return 0xffffffff

int32_t rdx = *(arg1 + 0xb4)
uint64_t rsi_1 = zx.q(*(arg1 + 0xb0))

if (rsi_1.d == rdx)
    arg3.b = 1
    sub_1407e6590(arg1, rdx + 1, arg3.b)

*(arg1 + 0xb0) = (rsi_1 + 1).d
int32_t rcx = *(*(arg1 + 0x10) + 0x20)
int32_t i = rcx - 1

if (i s>= 0)
    if (rcx s>= 4)
        uint64_t r10_2 = rsi_1 << 2
        
        do
            *(zx.q(i * *(arg1 + 0xb8)) + r10_2 + *(arg1 + 0x18)) =
                *(zx.q(*(arg2 + 0xb8) * i) + *(arg2 + 0x18) + (rbp << 2))
            *(zx.q((i - 1) * *(arg1 + 0xb8)) + r10_2 + *(arg1 + 0x18)) =
                *(zx.q((i - 1) * *(arg2 + 0xb8)) + *(arg2 + 0x18) + (rbp << 2))
            *(zx.q((i - 2) * *(arg1 + 0xb8)) + r10_2 + *(arg1 + 0x18)) =
                *(zx.q((i - 2) * *(arg2 + 0xb8)) + *(arg2 + 0x18) + (rbp << 2))
            int32_t rcx_8 = i - 3
            i -= 4
            *(zx.q(rcx_8 * *(arg1 + 0xb8)) + r10_2 + *(arg1 + 0x18)) =
                *(zx.q(*(arg2 + 0xb8) * rcx_8) + *(arg2 + 0x18) + (rbp << 2))
        while (i s>= 3)
    
    if (i s>= 0)
        int32_t i_2
        
        do
            uint64_t rdx_13 = zx.q(i * *(arg1 + 0xb8)) + (rsi_1 << 2)
            int64_t r8_14 = zx.q(*(arg2 + 0xb8) * i) + *(arg2 + 0x18)
            i_2 = i
            i -= 1
            *(rdx_13 + *(arg1 + 0x18)) = *(r8_14 + (rbp << 2))
        while (i_2 - 1 s>= 0)

int32_t r9 = *(*(arg1 + 0x10) + 0x24)
int32_t r9_1 = r9 - 1

if (r9 - 1 s>= 0)
    int32_t temp1_1
    
    do
        int64_t r8_17 = zx.q(*(arg2 + 0xbc) * r9_1) + *(arg2 + 0x28)
        uint64_t rdx_16 = zx.q(*(arg1 + 0xbc) * r9_1) + (rsi_1 << 2)
        temp1_1 = r9_1
        r9_1 -= 1
        *(rdx_16 + *(arg1 + 0x28)) = *(r8_17 + (rbp << 2))
    while (temp1_1 - 1 s>= 0)

if (arg4 != 0)
    *(arg2 + 0xb0) -= 1
    int32_t r10_7 = 0
    int32_t i_1 = 0
    int32_t rdi_1 = *(*(arg2 + 0x10) + 0x20)
    
    if (rdi_1 u>= 4)
        int32_t rbp_1 = 2
        
        do
            int64_t rdx_17 = *(arg2 + 0x18)
            uint64_t r8_19 = zx.q(*(arg2 + 0xb8) * i_1)
            i_1 += 4
            *(rdx_17 + (rbp << 2) + r8_19) = *(rdx_17 + (zx.q(*(arg2 + 0xb0)) << 2) + r8_19)
            uint64_t r8_21 = zx.q((rbp_1 - 1) * *(arg2 + 0xb8))
            int64_t rdx_19 = *(arg2 + 0x18)
            *(rdx_19 + (rbp << 2) + r8_21) = *(rdx_19 + (zx.q(*(arg2 + 0xb0)) << 2) + r8_21)
            int64_t rdx_21 = *(arg2 + 0x18)
            uint64_t r8_23 = zx.q(*(arg2 + 0xb8) * rbp_1)
            *(rdx_21 + (rbp << 2) + r8_23) = *(rdx_21 + (zx.q(*(arg2 + 0xb0)) << 2) + r8_23)
            uint64_t r8_25 = zx.q((rbp_1 + 1) * *(arg2 + 0xb8))
            rbp_1 += 4
            int64_t rdx_23 = *(arg2 + 0x18)
            *(rdx_23 + (rbp << 2) + r8_25) = *(rdx_23 + (zx.q(*(arg2 + 0xb0)) << 2) + r8_25)
        while (i_1 u< rdi_1 - 3)
    
    while (i_1 u< rdi_1)
        int64_t rdx_25 = *(arg2 + 0x18)
        uint64_t r8_27 = zx.q(*(arg2 + 0xb8) * i_1)
        i_1 += 1
        *(rdx_25 + (rbp << 2) + r8_27) = *(rdx_25 + (zx.q(*(arg2 + 0xb0)) << 2) + r8_27)
    
    int32_t rdi_2 = *(*(arg2 + 0x10) + 0x24)
    
    if (rdi_2 != 0)
        do
            int64_t r9_2 = *(arg2 + 0x28)
            uint64_t r8_29 = zx.q(*(arg2 + 0xbc) * r10_7)
            r10_7 += 1
            *(r8_29 + (rbp << 2) + r9_2) = *(r8_29 + (zx.q(*(arg2 + 0xb0)) << 2) + r9_2)
        while (r10_7 u< rdi_2)

return zx.q(rsi_1.d)
