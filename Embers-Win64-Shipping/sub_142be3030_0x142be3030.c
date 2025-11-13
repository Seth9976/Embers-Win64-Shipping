// 函数: sub_142be3030
// 地址: 0x142be3030
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r14 = *(arg1 + 0x98)

if (*(arg1 + 0x350) == 0)
    *(arg1 + 0x350) = 0
    return 

int32_t rax = *(arg1 + 0x270)

if (rax != 0x20000)
    if (rax != 0x25000)
        *(arg1 + 0x350) = 0
        return 
    
    sub_142b99980(r14, *(arg1 + 0x360))
    *(arg1 + 0x360) = 0
    *(arg1 + 0x358) = 0
    *(arg1 + 0x350) = 0
    return 

sub_142b99980(r14, *(arg1 + 0x360))
int16_t i = 0
*(arg1 + 0x360) = 0
*(arg1 + 0x358) = 0

if (0 u< *(arg1 + 0x35a))
    do
        uint64_t rdi_1 = zx.q(i) << 3
        sub_142b99980(r14, *(*(arg1 + 0x368) + rdi_1))
        i += 1
        *(rdi_1 + *(arg1 + 0x368)) = 0
    while (i u< *(arg1 + 0x35a))

sub_142b99980(r14, *(arg1 + 0x368))
*(arg1 + 0x368) = 0
*(arg1 + 0x35a) = 0
*(arg1 + 0x350) = 0
