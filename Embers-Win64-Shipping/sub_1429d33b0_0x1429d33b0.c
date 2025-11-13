// 函数: sub_1429d33b0
// 地址: 0x1429d33b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *(arg1 + 0x20)
sub_1429cd3a0(rcx + 0xa8, sx.q(*(rcx + 0x10)))
void* rcx_2 = *(arg1 + 0x20)

if (*(rcx_2 + 0xd) == 0)
    sub_1429d1b70(rcx_2 + 0xc0, sx.q(*(rcx_2 + 0x10)))

sub_1429cd2b0(arg1 + 0x28, sx.q(*(*(arg1 + 0x20) + 0x10)))
void* rcx_5 = *(arg1 + 0x20)
sub_14058d4e0(rcx_5 + 0x90, sx.q(*(rcx_5 + 0x10)))
void* rcx_7 = *(arg1 + 0x20)
int32_t i = 0

if (*(rcx_7 + 0x10) s> 0)
    int64_t rdx_4 = 0
    
    do
        rdx_4 += 4
        *(rdx_4 + *(rcx_7 + 0x90) - 4) = i
        i += 1
        rcx_7 = *(arg1 + 0x20)
    while (i s< *(rcx_7 + 0x10))

return i
