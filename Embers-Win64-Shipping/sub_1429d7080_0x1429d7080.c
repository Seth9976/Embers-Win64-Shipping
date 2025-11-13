// 函数: sub_1429d7080
// 地址: 0x1429d7080
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r8 = *(arg1 + 8)
int32_t i = 0

if (*(r8 + 4) s<= 0)
    return 

int32_t* r11_1 = nullptr
int32_t rbx_1 = 0

do
    int64_t rdx_1 = sx.q(rbx_1) << 2
    int32_t* rdi_2 = *(arg1 + 0xc0) + rdx_1
    int32_t* rsi_2 = *(r8 + 0x78) + rdx_1
    int32_t rax_2 = *rdi_2
    
    if (rax_2 != 0xffffffff)
        int32_t* r9_1 = *(*(arg1 + 0x10) + 0x78) + (sx.q(rax_2 * 2) << 2)
        *r9_1 = *(r11_1 + *(arg1 + 0xd8))
        r9_1[1] = *(*(arg1 + 0xf0) + (sx.q(*rsi_2) << 2))
    
    uint64_t rax = zx.q(rdi_2[1])
    
    if (rax.d != 0xffffffff)
        int32_t* r9_2 = *(*(arg1 + 0x10) + 0x78) + (sx.q(rax.d * 2) << 2)
        *r9_2 = *(r11_1 + *(arg1 + 0xd8))
        r9_2[1] = *(*(arg1 + 0xf0) + (sx.q(rsi_2[1]) << 2))
    
    r8 = *(arg1 + 8)
    i += 1
    rbx_1 += 2
    r11_1 = &r11_1[1]
while (i s< *(r8 + 4))
