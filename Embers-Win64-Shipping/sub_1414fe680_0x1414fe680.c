// 函数: sub_1414fe680
// 地址: 0x1414fe680
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* rbx = arg4
arg4.b = 1
uint64_t rdi = zx.q(**(arg1 + 0x38))
sub_14151c0b0(arg1, arg2, rdi.w, arg4.b)
int32_t* rdx = *(arg1 + 0x70) + (rdi << 3)
uint64_t rbx_1 = zx.q(rdi.d)
*rdx = *rbx
int32_t r12_1 = zx.d(arg7) & 0xf
rdx[1] = (((arg6 & 0xffffff) | r12_1 << 0x18) & 0xfffffff) | zx.d(arg5) << 0x1c
int64_t rcx_8 = (*rdx u>> 0x21 ^ *rdx) * -0xae502812aa7333
int64_t rax_10 = (rcx_8 u>> 0x21 ^ rcx_8) * -0x3b314601e57a13ad
int32_t temp0 = *(arg1 + 0x58)

if (rdi.d u>= temp0)
    uint64_t rflags_1
    int32_t temp0_1
    temp0_1, rflags_1 = _bit_scan_reverse((rdi + 1).d)
    int32_t rcx_9
    
    if (rdi.d == temp0)
        rcx_9 = 0x20
    else
        rcx_9 = 0x1f - temp0_1
    
    int32_t rcx_11 = rcx_9 << 0x1a s>> 0x1f
    uint64_t rflags_2
    char temp0_2
    temp0_2, rflags_2 = _bit_scan_reverse(rbx_1.d)
    char rdx_1
    
    if (rcx_11 == 0)
        rdx_1 = 0x20
    else
        rdx_1 = 0x1f - temp0_2
    
    int32_t rdx_2 = 1 << ((not.d(rcx_11)).b & (0x20 - rdx_1))
    
    if (rdx_2 u<= 0x20)
        rdx_2 = 0x20
    
    sub_140a30d10(arg1 + 0x50, rdx_2)

uint64_t r8_3 = zx.q(*(arg1 + 0x54)) & (zx.q((rax_10 u>> 0x21).w) ^ zx.q(rax_10.w))
*(*(arg1 + 0x68) + (rdi << 2)) = *(*(arg1 + 0x60) + (r8_3 << 2))
*(*(arg1 + 0x60) + (r8_3 << 2)) = rbx_1.d

if (arg8 == 0)
    int32_t rsi_2 = (arg3 << 4) + r12_1
    *(*(arg1 + 0x40) + (rdi << 2)) = rsi_2
    int16_t rdx_6 = *(*(arg1 + 0x48) + (rdi << 1))
    
    if (rdx_6 == 0 || rsi_2 u>= *(*(arg1 + 0x40)
            + (zx.q(*(*(arg1 + 0x38) + (zx.q(((zx.d(rdx_6) - 1) s>> 1).w) << 1))) << 2)))
        sub_141505070(arg1 + 0x28, rdx_6)
    else
        sub_14151c590(arg1 + 0x28, rdx_6)
else
    int16_t* rdx_4 = *(arg1 + 0x38)
    uint64_t r8_4 = zx.q(*rdx_4)
    *(arg1 + 0x28) -= 1
    *rdx_4 = rdx_4[zx.q(*(arg1 + 0x28))]
    *(*(arg1 + 0x48) + (zx.q(**(arg1 + 0x38)) << 1)) = 0
    *(*(arg1 + 0x48) + (r8_4 << 1)) = 0xffff
    sub_141505070(arg1 + 0x28, 0)

return zx.q(rbx_1.d)
