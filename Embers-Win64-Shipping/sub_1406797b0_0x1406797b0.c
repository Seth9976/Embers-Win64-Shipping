// 函数: sub_1406797b0
// 地址: 0x1406797b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *(arg1 + 0xe8)

if (rcx == 0)
    *(arg1 + 0xe8) = sub_140666d50(sub_140cde0b0())
else
    sub_140679620(rcx)

sub_1405e1b50(arg1 + 0x148, 0)
int32_t i_2 = *(arg1 + 0x190)

if (i_2 s> 0)
    int64_t r8_1 = 0
    uint64_t i_1 = zx.q(i_2)
    uint64_t i
    
    do
        void* rcx_3 = *(arg1 + 0x188)
        void* rax_3 = arg1 + 0x180
        int64_t rdx_3 = (sx.q(*(arg1 + 0x190)) - 1) & r8_1
        
        if (rcx_3 != 0)
            rax_3 = rcx_3
        
        r8_1 += 1
        *(rax_3 + (rdx_3 << 2)) = 0xffffffff
        i = i_1
        i_1 -= 1
    while (i != 1)

*(arg1 + 0x198) = 0xffffffff
*(arg1 + 0x88) = 0
*(arg1 + 0xa0) = 0

if (arg1 == &data_143cdcd20)
    return &data_143cdcdb0

int32_t rdi_1 = data_143cdcdb8
int32_t r8_2 = *(arg1 + 0x9c)
int64_t rsi_1 = data_143cdcdb0
*(arg1 + 0x98) = rdi_1

if (rdi_1 == 0 && r8_2 == 0)
    *(arg1 + 0x9c) = 0
    return &data_143cdcdb0

sub_1405a4c70(arg1 + 0x90, rdi_1, r8_2)
return memcpy(*(arg1 + 0x90), rsi_1, rdi_1 * 2)
