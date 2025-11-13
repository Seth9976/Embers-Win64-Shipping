// 函数: sub_141e42520
// 地址: 0x141e42520
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    return 

int32_t i = 0

if (*(arg1 + 0x88) s<= 0)
    return 

int64_t r8 = 0
int32_t* r10_1 = nullptr

do
    int64_t* rdx = arg3[2]
    uint32_t rcx = zx.d(*(r8 + *(arg1 + 0x80) + 0x10))
    int16_t rdx_1
    
    if (rcx s>= rdx[1].d)
        rdx_1 = -1
    else
        rdx_1 = *(*rdx + (zx.q(rcx.w) << 1))
    
    if (rdx_1 != 0xffff)
        int64_t rax = *arg3
        uint64_t rcx_2 = zx.q(rdx_1)
        *(rax + (rcx_2 << 3)) = *(r10_1 + *(arg2 + 0x60))
        *(rax + (rcx_2 << 3) + 4) = 1
    
    i += 1
    r10_1 = &r10_1[1]
    r8 += 0x18
while (i s< *(arg1 + 0x88))
