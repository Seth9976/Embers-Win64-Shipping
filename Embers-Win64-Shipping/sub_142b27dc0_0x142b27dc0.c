// 函数: sub_142b27dc0
// 地址: 0x142b27dc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x190) s<= 2)
    int64_t rax = *(arg1 + 0x188)
    int32_t rax_1 = (*(rax + 0x48))(rax)
    int32_t rdx_1 = rax_1 & 0xfffffc00
    
    if (rdx_1 != 0xdc00)
        if (rax_1 s>= 0)
            int64_t rax_3 = *(arg1 + 0x188)
            (*(rax_3 + 0x50))(rax_3, rdx_1)
    else if (*(arg1 + 0x190) == 2)
        *(arg1 + 0x198) += 1
    
    return zx.q(rax_1.w)

int64_t r8 = sx.q(*(arg1 + 0x198))
int16_t rcx_2 = *(arg1 + 0x1b0)
int32_t rax_6

if (rcx_2 s< 0)
    rax_6 = *(arg1 + 0x1b4)
else
    rax_6 = sx.d(rcx_2) s>> 5

int16_t rdx_2

if (r8.d u>= rax_6)
    rdx_2 = -1
else
    void* rcx_3 = arg1 + 0x1b2
    
    if ((rcx_2.b & 2) == 0)
        rcx_3 = *(arg1 + 0x1c0)
    
    rdx_2 = *(rcx_3 + (r8 << 1))

if ((zx.d(rdx_2) & 0xfffffc00) == 0xdc00)
    *(arg1 + 0x198) = (r8 + 1).d

return zx.q(rdx_2)
