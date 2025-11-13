// 函数: sub_142065280
// 地址: 0x142065280
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140a80f40()

if (*(arg1 + 0x468) != 0xffffffff)
    void* rdx = *arg2
    int128_t var_28 = zx.o(0)
    sub_1405d16e0(&var_28, rdx)
    sub_1405d16e0(&var_28:8, arg2[1])
    int32_t r10_1 = data_14399fa54
    uint32_t r9_1 = 0x11
    int32_t rdi_1 = *(*arg2 + 0x18)
    int32_t var_18_1 = rdi_1
    uint32_t r8_1 = 0
    
    do
        uint32_t rax_4 = (r9_1 + r8_1) u>> 1
        
        if (rdi_1 u> *(&data_143a2e1d0 + (zx.q(rax_4 - 1) << 2)))
            r8_1 = rax_4
        else
            r9_1 = rax_4
    while (r9_1 - r8_1 u> 1)
    
    void* rbx_4 = ((zx.q(r8_1) + sx.q(r10_1 u% 3) * 0x11 + 0x12) << 4) + arg1
    int64_t rsi_1 = sx.q(*(rbx_4 + 8))
    int32_t rax_8 = (rsi_1 + 1).d
    *(rbx_4 + 8) = rax_8
    
    if (rax_8 s> *(rbx_4 + 0xc))
        sub_1405a4df0(rbx_4)
    
    int64_t* rdx_5 = *rbx_4 + rsi_1 * 0x18
    void* rax_10 = var_28.q
    *rdx_5 = rax_10
    
    if (rax_10 != 0)
        *(rax_10 + 8) += 1
        rdi_1 = var_18_1
    
    void* rax_11 = var_28:8.q
    rdx_5[1] = rax_11
    
    if (rax_11 != 0)
        *(rax_11 + 8) += 1
        rdi_1 = var_18_1
    
    *(rdx_5 + 0x14) = r10_1
    rdx_5[2].d = rdi_1
    sub_1405ec8a0(&var_28:8)
    sub_1405d1550(&var_28)

sub_1405ec8a0(&arg2[1])
return sub_1405d1550(arg2) __tailcall
