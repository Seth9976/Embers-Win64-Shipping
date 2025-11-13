// 函数: sub_142c427b0
// 地址: 0x142c427b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_20 = arg4
void* r14 = *(arg1 + 0x98)
void* r11 = arg3
int64_t r12 = *(arg3 + 0x70)
uint64_t r8 = zx.q(arg4 + 1)
int32_t i_1 = arg5
int32_t r10_2 = *(r14 + 0x24) | *(r14 + 0x20) | *(r14 + 0x1c)

if (r8.d u< i_1)
    uint64_t i_2 = zx.q(i_1 - r8.d)
    int32_t* rdx_2 = r12 + (((r8 << 2) + 1 + zx.q(r8.d)) << 2)
    uint64_t i
    
    do
        *rdx_2 |= r10_2
        rdx_2 = &rdx_2[5]
        i = i_2
        i_2 -= 1
    while (i != 1)

int32_t rsi = 0

if (r8.d u>= i_1)
    return 

uint64_t rbp_1 = zx.q((r8 + 2).d)
int32_t r8_1 = 0xffffffff - arg4
arg5 = r8_1
int128_t* r13_1 = r12 + r8 * 0x14

do
    char rax_2 = *(r13_1 + 0x12)
    uint64_t rcx_1
    
    if (rax_2 == 0xe && rsi u<= 2)
        rcx_1 = zx.q((rbp_1 - 1).d)
    
    if (rax_2 == 0xe && rsi u<= 2 && rcx_1.d u< i_1)
        uint64_t rcx_2 = rcx_1 * 5
        rsi += 1
        int128_t* rbx_1 = r12 + (rcx_2 << 2)
        
        if (*(r12 + (rcx_2 << 2) + 0x12) == 0x10)
            uint64_t rdx_3 = zx.q((rbp_1 - 2).d)
            uint64_t rcx_3 = rdx_3 * 5
            *(r12 + (rcx_3 << 2) + 4) |= *(r14 + 0x18)
            *(rbx_1 + 4) |= *(r14 + 0x18)
            
            if ((rbp_1 + 1).d + r8_1 u>= 2)
                sub_142bf5140(r11, arg4, rbp_1.d)
                arg4 = arg_20
                rdx_3 = zx.q(rdx_3.d)
            
            int32_t rsi_1 = rbx_1[1].d
            int32_t rdi_1 = r13_1[1].d
            int128_t var_60_1 = *r13_1
            int128_t* rbx_2 = r12 + zx.q(arg4) * 0x14
            int128_t var_50_1 = *rbx_1
            memmove(r12 + zx.q(arg4 + 2) * 0x14, rbx_2, (rdx_3.d - arg4) * 0x14)
            *rbx_2 = var_60_1
            rbx_2[1].d = rdi_1
            uint64_t rcx_7 = zx.q(r8.d) * 5
            *(r12 + (rcx_7 << 2)) = var_50_1
            *(r12 + (rcx_7 << 2) + 0x10) = rsi_1
            
            if (*(r14 + 0x28) != 0 && rbp_1.d u< i_1)
                uint64_t j_1 = zx.q(i_1 - rbp_1.d)
                int32_t* rax_14 = r12 + ((rbp_1 * 5 + 1) << 2)
                uint64_t j
                
                do
                    *rax_14 |= *(r14 + 0x28)
                    rax_14 = &rax_14[5]
                    j = j_1
                    j_1 -= 1
                while (j != 1)
            
            rsi = 2
        label_142c429f8:
            r11 = arg3
            r8_1 = arg5
            arg4 = arg_20
    else if (rax_2 == 0x1c)
        if (r8_1 + rbp_1.d u>= 2)
            sub_142bf5140(r11, arg4, (rbp_1 - 1).d)
            arg4 = arg_20
        
        int128_t zmm0 = *r13_1
        int32_t rdi_2 = r13_1[1].d
        int128_t* rbx_3 = r12 + zx.q(arg4) * 0x14
        memmove(r12 + zx.q(arg4 + 1) * 0x14, rbx_3, (rbp_1.d - arg4 - 2) * 0x14)
        *rbx_3 = zmm0
        rbx_3[1].d = rdi_2
        goto label_142c429f8
    
    rbp_1 = zx.q(rbp_1.d + 1)
    r13_1 += 0x14
while ((rbp_1 - 2).d u< i_1)
