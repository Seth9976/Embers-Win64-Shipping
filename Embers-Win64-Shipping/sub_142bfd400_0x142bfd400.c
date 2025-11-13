// 函数: sub_142bfd400
// 地址: 0x142bfd400
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t* rbp = *arg1
int128_t* const rsi = &data_14369a5d0
int128_t* const rcx = &data_14369a5d0

if (rbp != 0)
    rcx = rbp

int128_t* const rcx_1

if (*(rcx + 0x18) u>= 8)
    rcx_1 = rcx[1].q
else
    rcx_1 = &data_14369a5d0

uint32_t r14_3 =
    (zx.d(*(rcx_1 + 5)) << 0x10) + (zx.d(*(rcx_1 + 6)) << 8) + (zx.d(*(rcx_1 + 4)) << 0x18)
uint32_t rax_4 = zx.d(*(rcx_1 + 7))
uint32_t r14_4 = r14_3 + rax_4

if (r14_3 == neg.d(rax_4))
    return &data_14369a5d0

int128_t* const rcx_2 = &data_14369a5d0
int32_t r15 = *(arg2 + 0x2c)

if (*(arg2 + 0x28) u> r15)
    r15 = *(arg2 + 0x28)

if (r15 == 0)
    r15 = 0x40000000

int32_t r12 = 0

if (rbp != 0)
    rcx_2 = rbp

int128_t* const rcx_3

if (*(rcx_2 + 0x18) u>= 8)
    rcx_3 = rcx_2[1].q
else
    rcx_3 = &data_14369a5d0

void* rax_6 = sub_142c002a0(rcx_3, 0)
int32_t rbx = 1
uint32_t rdi_2 = (zx.d(*rax_6) << 8) + zx.d(*(rax_6 + 1))

if (r14_4 u> 1)
    do
        int128_t* rax_8 = &data_14369a5d0
        int128_t* const rcx_4 = &data_14369a5d0
        
        if (rbp != 0)
            rax_8 = rbp
        
        if (*(rax_8 + 0x18) u>= 8)
            rcx_4 = rax_8[1].q
        
        void* rax_9 = sub_142c002a0(rcx_4, rbx)
        uint32_t rcx_7 = (zx.d(*rax_9) << 8) + zx.d(*(rax_9 + 1))
        
        if (r15 u<= rcx_7 && rcx_7 u< rdi_2)
            r12 = rbx
            rdi_2 = rcx_7
        else if (r15 u> rdi_2 && rcx_7 u> rdi_2)
            r12 = rbx
            rdi_2 = rcx_7
        
        rbx += 1
    while (rbx u< r14_4)

int128_t* rax_11 = &data_14369a5d0

if (rbp != 0)
    rax_11 = rbp

if (*(rax_11 + 0x18) u>= 8)
    rsi = rax_11[1].q

return sub_142c002a0(rsi, r12) __tailcall
