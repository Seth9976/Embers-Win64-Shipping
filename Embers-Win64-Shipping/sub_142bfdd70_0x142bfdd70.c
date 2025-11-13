// 函数: sub_142bfdd70
// 地址: 0x142bfdd70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r11 = *(arg1 + 0x10)
int128_t* const rdi = &data_14369a5d0
uint32_t rbx

if (arg2 u< r11)
    uint64_t r8 = zx.q(arg2)
    int128_t* rax_1 = *(arg1 + 0x20)
    int32_t rcx_1 = *(arg1 + 0x14) - 1
    
    if (arg2 u>= rcx_1)
        r8 = zx.q(rcx_1)
    
    int128_t* const rcx_2 = &data_14369a5d0
    
    if (rax_1 != 0)
        rcx_2 = rax_1
    
    int64_t rdx = rcx_2[1].q
    int128_t* const rcx_3 = &data_14369a5d0
    int128_t* rax_2 = rdx + (r8 << 2)
    
    if (rax_2 u>= rdx)
        rcx_3 = rax_2
    
    rbx = (zx.d(*rcx_3) << 8) + zx.d(*(rcx_3 + 1))
else if (r11 == 0)
    rbx = *(arg1 + 0x18)
else
    rbx = 0

if (arg2 u>= r11)
    return zx.q(rbx)

int32_t rdx_1 = *(arg3 + 0x34)
float zmm1

if (rdx_1 == 0)
    zmm1 = (zx.o(0)).d
else
    int128_t* rax_4 = *(arg1 + 0x28)
    int128_t* const rcx_4 = &data_14369a5d0
    
    if (rax_4 != 0)
        rcx_4 = rax_4
    
    if (*(rcx_4 + 0x18) u>= 0x14)
        rdi = rcx_4[1].q
    
    zmm1 = sub_142bfde60(rdi, arg2, *(arg3 + 0x38), rdx_1)

return int.q(float.s(zx.q(rbx)) + zmm1)
