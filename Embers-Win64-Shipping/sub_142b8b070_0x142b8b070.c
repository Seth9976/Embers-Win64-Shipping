// 函数: sub_142b8b070
// 地址: 0x142b8b070
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbp = *(arg1 + 0x60)
int32_t rbx = arg2 + 2
int64_t r9 = *(arg1 + 0x58)
int32_t rsi_1
int32_t i

do
    rsi_1 = rbx
    int64_t rax_2 = sx.q(rbx) * 2
    
    if (*(r9 + (rax_2 << 3) + 0xc) s>= rbx)
        rbx = *(r9 + (rax_2 << 3) + 0xc)
    
    if (rbx + 1 s>= rbp)
        break
    
    int32_t* rdx_2 = (sx.q(rbx + 1) << 4) + r9
    
    if (*rdx_2 == 6)
        break
    
    uint64_t zmm0_1 = sub_142b752d0(arg1, rdx_2)
    r9 = *(arg1 + 0x58)
    int16_t rcx_1 = *(arg1 + 0x18)
    int64_t rax_3 = sx.q(rbx + 2)
    rbx += 3
    int64_t rdx_3 = sx.q(*(r9 + rax_3 * 0x10 + 4))
    int32_t rax_6
    
    if (rcx_1 s< 0)
        rax_6 = *(arg1 + 0x1c)
    else
        rax_6 = sx.d(rcx_1) s>> 5
    
    void* rcx_2
    
    if (rdx_3.d u< rax_6)
        rcx_2 = arg1 + 0x1a
        
        if ((rcx_1.b & 2) == 0)
            rcx_2 = *(arg1 + 0x28)
    
    if (rdx_3.d u>= rax_6 || *(rcx_2 + (rdx_3 << 1)) != 0x3c)
        arg3.q f- zmm0_1
        i.b = arg3.q f< zmm0_1
    else
        i.b = arg3.q f<= zmm0_1
while (i == 0)
return zx.q(rsi_1)
