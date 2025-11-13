// 函数: sub_142bfd220
// 地址: 0x142bfd220
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t rdi_3 =
    (zx.d(*(arg1 + 5)) << 0x10) + (zx.d(*(arg1 + 6)) << 8) + (zx.d(*(arg1 + 4)) << 0x18)
uint32_t rax_4 = zx.d(*(arg1 + 7))
uint32_t rdi_4 = rdi_3 + rax_4

if (rdi_3 == neg.d(rax_4))
    return &data_14369a5d0

int32_t rbp = *(arg2 + 0x2c)
int128_t* const r8 = &data_14369a5d0

if (*(arg2 + 0x28) u> rbp)
    rbp = *(arg2 + 0x28)

if (rbp == 0)
    rbp = 0x40000000

int32_t r14 = 0

if ((zx.d(*(arg1 + 5)) << 0x10) + (zx.d(*(arg1 + 6)) << 8) + (zx.d(*(arg1 + 4)) << 0x18)
        != neg.d(zx.d(*(arg1 + 7))))
    r8 = arg1 + 8

int128_t* const rdx_9 = &data_14369a5d0

if ((zx.d(*(arg1 + 5)) << 0x10) + (zx.d(*(arg1 + 6)) << 8) + (zx.d(*(arg1 + 4)) << 0x18)
        != neg.d(zx.d(*(arg1 + 7))))
    rdx_9 = arg1 + 8

void* r8_1 = r8 + 0x2d
int32_t r9 = 1

if (*(rdx_9 + 0x2c) u> *(r8 + 0x2d))
    r8_1 = rdx_9 + 0x2c

uint32_t r10 = zx.d(*r8_1)

if (rdi_4 u> 1)
    uint32_t rsi_2 = zx.d(*(arg1 + 4)) << 0x18
    
    do
        int128_t* const rbx_1
        
        if (r9 u< zx.d(*(arg1 + 7)) + (zx.d(*(arg1 + 6)) << 8) + rsi_2
                + (zx.d(*(arg1 + 5)) << 0x10))
            rbx_1 = arg1 + 8 + zx.q(r9) * 0x30
        else
            rbx_1 = &data_14369a5d0
        
        void* rdx_21
        
        if (r9 u< zx.d(*(arg1 + 7)) + (zx.d(*(arg1 + 6)) << 8) + rsi_2
                + (zx.d(*(arg1 + 5)) << 0x10))
            rdx_21 = zx.q(r9) * 0x30 + 8 + arg1
        else
            rdx_21 = &data_14369a5d0
        
        void* r8_6 = rbx_1 + 0x2d
        
        if (*(rdx_21 + 0x2c) u> *(rbx_1 + 0x2d))
            r8_6 = rdx_21 + 0x2c
        
        uint32_t rax_24 = zx.d(*r8_6)
        
        if (rbp u<= rax_24 && rax_24 u< r10)
            r14 = r9
            r10 = rax_24
        else if (rbp u> r10 && rax_24 u> r10)
            r14 = r9
            r10 = rax_24
        
        r9 += 1
    while (r9 u< rdi_4)

if (r14 u>= (zx.d(*(arg1 + 5)) << 0x10) + (zx.d(*(arg1 + 6)) << 8) + (zx.d(*(arg1 + 4)) << 0x18)
        + zx.d(*(arg1 + 7)))
    return &data_14369a5d0

return arg1 + 8 + zx.q(r14) * 0x30
