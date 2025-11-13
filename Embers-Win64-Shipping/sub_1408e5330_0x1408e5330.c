// 函数: sub_1408e5330
// 地址: 0x1408e5330
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140cddf60(arg1, arg2)
int32_t i = 0
*(arg2 + 8) += sx.q(arg1[7].d) << 6
int64_t rcx = *(arg2 + 8) + (sx.q(arg1[9].d) << 2)
*(arg2 + 8) = rcx

if (arg1[0xd].d s> 0)
    int64_t rdx_1 = *(arg2 + 0x28)
    int64_t r11_1 = 0
    
    do
        i += 1
        void* r9_2 = arg1[0xc] + r11_1
        r11_1 += 0xa8
        int64_t rdx_2 = rdx_1 + sx.q(*(r9_2 + 8)) * 0xc
        *(arg2 + 0x28) = rdx_2
        int64_t rcx_2 = rdx_2 + (sx.q(*(r9_2 + 0x18)) << 3)
        *(arg2 + 0x28) = rcx_2
        int64_t rdx_3 = rcx_2 + (sx.q(*(r9_2 + 0x28)) << 2)
        *(arg2 + 0x28) = rdx_3
        int64_t rcx_3 = rdx_3 + (sx.q(*(r9_2 + 0x38)) << 2)
        *(arg2 + 0x28) = rcx_3
        int64_t rdx_4 = rcx_3 + (sx.q(*(r9_2 + 0x48)) << 2)
        *(arg2 + 0x28) = rdx_4
        int64_t r8_1 = rdx_4 + sx.q(*(r9_2 + 0x58)) * 0xc
        *(arg2 + 0x28) = r8_1
        int64_t rdx_7 = r8_1 + ((sx.q(*(r9_2 + 0x68)) * 3 + 0x1f) << 2)
        *(arg2 + 0x28) = rdx_7
        rdx_1 = rdx_7 + (sx.q(*(r9_2 + 0x98)) << 2) + 0x18
        *(arg2 + 0x28) = rdx_1
    while (i s< arg1[0xd].d)
    
    rcx = *(arg2 + 8)

*(arg2 + 8) = rcx + 0x10
int64_t result = sx.q(arg1[0xf].d)
*(arg2 + 8) = rcx + 0x10 + (result << 2) + 0x14
return result
