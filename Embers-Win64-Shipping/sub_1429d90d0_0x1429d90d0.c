// 函数: sub_1429d90d0
// 地址: 0x1429d90d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* r8 = *(arg1 + 8)
int32_t i = 0

if (*r8 s<= 0)
    return 

int64_t r10_1 = 0

do
    int32_t* r8_1 = *(r8 + 0x48) + (sx.q(*(*(r8 + 0x18) + r10_1 + 4)) << 2)
    int32_t* r11_1 = *(arg1 + 0x90) + (sx.q(*(r10_1 + *(arg1 + 0x68) + 4)) << 2)
    int64_t rdx_3 = *(arg1 + 0xd8)
    int32_t rbx_1 = *(rdx_3 + (sx.q(*r8_1) << 2))
    int32_t rdi_1 = *(rdx_3 + (sx.q(r8_1[1]) << 2))
    int32_t rsi_1 = *(rdx_3 + (sx.q(r8_1[2]) << 2))
    int32_t rax_8 = *r11_1
    
    if (rax_8 != 0xffffffff)
        int64_t r8_2 = sx.q(rax_8 * 2)
        int64_t rdx_4 = *(*(arg1 + 0x10) + 0x78)
        *(rdx_4 + (r8_2 << 2)) = rbx_1
        *(rdx_4 + (r8_2 << 2) + 4) = rsi_1
    
    int32_t rax_11 = r11_1[1]
    
    if (rax_11 != 0xffffffff)
        int64_t r8_3 = sx.q(rax_11 * 2)
        int64_t rdx_5 = *(*(arg1 + 0x10) + 0x78)
        *(rdx_5 + (r8_3 << 2)) = rdi_1
        *(rdx_5 + (r8_3 << 2) + 4) = rbx_1
    
    uint64_t rax = zx.q(r11_1[2])
    
    if (rax.d != 0xffffffff)
        int64_t r8_4 = sx.q(rax.d * 2)
        int64_t rdx_6 = *(*(arg1 + 0x10) + 0x78)
        *(rdx_6 + (r8_4 << 2)) = rsi_1
        *(rdx_6 + (r8_4 << 2) + 4) = rdi_1
    
    r8 = *(arg1 + 8)
    i += 1
    r10_1 += 8
while (i s< *r8)
