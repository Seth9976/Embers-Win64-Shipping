// 函数: sub_141f09d10
// 地址: 0x141f09d10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* i = *(arg1 + 0xd0)

for (void* r8_1 = sx.q(*(arg1 + 0xd8)) * 0x38 + i; i != r8_1; i += 0x38)
    *(i + 0x30) = 0

void* i_1 = *(arg1 + 0xe0)

for (void* rcx_2 = (sx.q(*(arg1 + 0xe8)) << 6) + i_1; i_1 != rcx_2; i_1 += 0x40)
    *(i_1 + 4) = 0

void* rdx = *(arg1 + 0xf0)
void* r8_2 = rdx + sx.q(*(arg1 + 0xf8)) * 0x48

if (rdx != r8_2)
    int64_t* rcx_4 = rdx + 4
    
    do
        rdx += 0x48
        *rcx_4 = data_143dbb1f8.q
        rcx_4 = &rcx_4[9]
        rcx_4[-8].d = data_143dbb200
    while (rdx != r8_2)

void* i_2 = *(arg1 + 0x100)

for (void* rcx_7 = (sx.q(*(arg1 + 0x108)) << 6) + i_2; i_2 != rcx_7; i_2 += 0x40)
    *(i_2 + 4) = 0

return i_2
