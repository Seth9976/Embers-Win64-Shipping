// 函数: sub_142b273d0
// 地址: 0x142b273d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r15 = sx.q(arg3)

if (*arg7 s> 0)
    return 

uint64_t rbp_1 = zx.q(arg5)
int32_t rsi_1 = (r15 + rbp_1).d
int64_t rax
int64_t rdi_1

if (rsi_1 s> *(arg1 + 0x4c))
    uint64_t rsi_3 = zx.q(rsi_1 + 3) & 0xfffffffc
    rax = sub_142a7dd00(sx.q(((rsi_3 << 2) + 0x100).d))
    rdi_1 = rax
    
    if (rax != 0)
        if (*(arg1 + 0x4c) != 0)
            sub_142a7dcd0(*(arg1 + 0x40))
        
        *(arg1 + 0x40) = rdi_1
        *(arg1 + 0x4c) = rsi_3.d
        goto label_142b2746e
    
    *(arg1 + 0x20) = rax
    *(arg1 + 0x28) = rax.d
    *(arg1 + 0x38) = rax.d
    *(arg1 + 0x48) = rax.d
    *arg7 = 7
else
    rdi_1 = *(arg1 + 0x40)
label_142b2746e:
    int64_t i_1 = 2
    void* rcx_2 = rdi_1 + (sx.q(*(arg1 + 0x4c)) << 2)
    int128_t* rax_3 = arg6
    int64_t i
    
    do
        rcx_2 += 0x80
        int128_t zmm0 = *rax_3
        rax_3 = &rax_3[8]
        *(rcx_2 - 0x80) = zmm0
        *(rcx_2 - 0x70) = rax_3[-7]
        *(rcx_2 - 0x60) = rax_3[-6]
        *(rcx_2 - 0x50) = rax_3[-5]
        *(rcx_2 - 0x40) = rax_3[-4]
        *(rcx_2 - 0x30) = rax_3[-3]
        *(rcx_2 - 0x20) = rax_3[-2]
        *(rcx_2 - 0x10) = rax_3[-1]
        i = i_1
        i_1 -= 1
    while (i != 1)
    memcpy(rdi_1, arg2, (r15 << 2).d)
    int64_t rdi_2 = rdi_1 + (r15 << 2)
    memcpy(rdi_2, arg4, (rbp_1 << 2).d)
    int64_t rcx_5 = sx.q(*(arg1 + 0x4c))
    rax = *(arg1 + 0x40)
    *(arg1 + 0x48) = r15.d
    *(arg1 + 0x30) = rdi_2
    *(arg1 + 0x38) = rbp_1.d
    *(arg1 + 0x20) = rax + (rcx_5 << 2)
