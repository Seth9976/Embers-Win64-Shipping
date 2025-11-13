// 函数: sub_140cc2e40
// 地址: 0x140cc2e40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t temp0 = *(arg2 + 0x54)

if (temp0 u< 0xc)
    uint64_t rax = sub_140bdeca0(*(arg1 + 0x80))
    uint64_t rflags
    int32_t rdx
    rdx, rflags = _bit_scan_reverse(rax)
    uint64_t rdx_1
    
    if (temp0 == 0xc)
        rdx_1 = 0x40
    else
        rdx_1 = zx.q(0x3f - rdx)
    
    uint64_t rflags_1
    int32_t rcx_2
    rcx_2, rflags_1 = _bit_scan_reverse(rax - 1)
    uint64_t rcx_3
    
    if (rax == 1)
        rcx_3 = 0x40
    else
        rcx_3 = zx.q(0x3f - rcx_2)
    
    (*(*arg2 + 0x158))(arg2, arg4, (0x40 - rcx_3) & not.q(rdx_1 << 0x39 s>> 0x3f))
    int64_t rax_3
    rax_3.b = 1
    return rax_3

int64_t rdi = sx.q(*(arg1 + 0x3c) << 3)
int64_t rax_6 = sub_140bdeca0(*(arg1 + 0x80))
uint64_t rflags_2
int32_t rdx_6
rdx_6, rflags_2 = _bit_scan_reverse(rax_6 + 1)
uint64_t rdx_7

if (rax_6 == -1)
    rdx_7 = 0x40
else
    rdx_7 = zx.q(0x3f - rdx_6)

uint64_t rflags_3
int32_t rcx_7
rcx_7, rflags_3 = _bit_scan_reverse(rax_6)
uint64_t rax_9

if (rax_6 == 0)
    rax_9 = 0x40
else
    rax_9 = zx.q(0x3f - rcx_7)

int64_t r8_3 = (0x40 - rax_9) & not.q(rdx_7 << 0x39 s>> 0x3f)

if (r8_3 u<= rdi)
    rdi = r8_3

(*(*arg2 + 0x158))(arg2, arg4, rdi)
int64_t rax_11
rax_11.b = 1
return rax_11
