// 函数: sub_141fe99e0
// 地址: 0x141fe99e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rax_6 = *(arg1 + 0x56)

if (rax_6 == 0)
    *(arg2 + 0xc) = *arg2
else if (rax_6 == 2)
    *(arg2 + 0xc) = (*arg2 ^ 0x80000000).d

char rax_1 = *(arg1 + 0x57)

if (rax_1 == 0)
    arg2[1].d = *(arg2 + 4)
else if (rax_1 == 2)
    arg2[1].d = (*(arg2 + 4) ^ 0x80000000).d

uint32_t rax_3 = zx.d(*(arg1 + 0x58))

if (rax_3.b == 0)
    rax_3 = *(arg2 + 8)
    *(arg2 + 0x14) = rax_3
else if (rax_3.b == 2)
    *(arg2 + 0x14) = (*(arg2 + 8) ^ 0x80000000).d

uint32_t rcx = zx.d(*(arg1 + 0x54))
int128_t zmm0

if (rcx == 1)
    rax_3 = *arg2
    *(arg2 + 4) = rax_3
else if (rcx == 2)
    rax_3 = *arg2
    *(arg2 + 8) = rax_3
else if (rcx == 3)
    rax_3 = *(arg2 + 4)
    *(arg2 + 8) = rax_3
else if (rcx == 4)
    zmm0 = *arg2
    *(arg2 + 4) = zmm0.d
    *(arg2 + 8) = zmm0.d

uint32_t rcx_4 = zx.d(*(arg1 + 0x54))

if (rcx_4 == 1)
    rax_3 = *(arg2 + 0xc)
    arg2[1].d = rax_3
else
    if (rcx_4 == 2)
        int32_t rax_5 = *(arg2 + 0xc)
        *(arg2 + 0x14) = rax_5
        return rax_5
    
    if (rcx_4 == 3)
        int32_t rax_4 = arg2[1].d
        *(arg2 + 0x14) = rax_4
        return rax_4
    
    if (rcx_4 == 4)
        zmm0 = *(arg2 + 0xc)
        arg2[1].d = zmm0.d
        *(arg2 + 0x14) = zmm0.d

return rax_3
