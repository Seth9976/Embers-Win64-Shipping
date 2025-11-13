// 函数: sub_1420a3aa0
// 地址: 0x1420a3aa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 s< 0 || arg2 s>= *(arg1 + 0x98))
    return zx.q(arg2)

int64_t r10 = *(arg1 + 0x90)
int128_t* rcx = r10 + sx.q(arg2) * 0x18

if (arg4 == 0)
    *rcx = arg3.d
    return zx.q(arg2)

int32_t r8_1 = *(arg1 + 0x98)
int32_t rax_2 = r8_1 - arg2
uint128_t zmm7 = zx.o(rcx[1].q)
int128_t var_48 = *rcx

if (rax_2 != 1)
    memmove(rcx, r10 + sx.q(arg2 + 1) * 0x18, (rax_2 - 1) * 0x18)
    r8_1 = *(arg1 + 0x98)

*(arg1 + 0x98) = r8_1 - 1
sub_1405fde90(arg1 + 0x90)
int64_t rax_8 = sx.q(*(arg1 + 0x98))
int32_t rbx = 0
var_48.d = arg3.d

if (rax_8.d s> 0)
    int64_t rcx_2 = 0
    int32_t* rax_9 = *(arg1 + 0x90)
    
    while (not(arg3.d f<= *rax_9))
        rbx += 1
        rcx_2 += 1
        rax_9 = &rax_9[6]
        
        if (rcx_2 s>= rax_8)
            break

sub_142075390(arg1 + 0x90, rbx, 1)
int64_t rdx_4 = sx.q(rbx) * 3
int64_t rcx_5 = *(arg1 + 0x90)
*(rcx_5 + (rdx_4 << 3)) = 0
*(rcx_5 + (rdx_4 << 3) + 8) = 0
*(rcx_5 + (rdx_4 << 3) + 0x10) = 0
int64_t rcx_6 = *(arg1 + 0x90)
*(rcx_6 + (rdx_4 << 3)) = var_48
*(rcx_6 + (rdx_4 << 3) + 0x10) = zmm7.q
return zx.q(rbx)
