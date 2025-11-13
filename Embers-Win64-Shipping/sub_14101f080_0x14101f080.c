// 函数: sub_14101f080
// 地址: 0x14101f080
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x20) == 0)
    return 

int32_t rax = *(arg1 + 0x1c)
*(arg1 + 0x20) = 0

if (rax == 0)
    return 

*(arg1 + 0x4c) += rax
int32_t rax_2 = *(arg1 + 0x48) + 1
int32_t i = 0
int32_t rcx = 0

if (rax_2 u< *(arg1 + 0x40))
    rcx = rax_2

*(arg1 + 0x48) = rcx
int32_t* rdx_2 = (sx.q(rcx) << 5) + *(arg1 + 0x38)
*rdx_2 = *(arg1 + 0x18)
rdx_2[1] = *(arg1 + 0x1c)
rdx_2[2].b = *(arg1 + 0x20)

if (&rdx_2[4] != arg1 + 0x28)
    int64_t rsi_1 = sx.q(*(arg1 + 0x30))
    int64_t r14_1 = *(arg1 + 0x28)
    int32_t r8_1 = rdx_2[7]
    rdx_2[6] = rsi_1.d
    
    if (rsi_1.d != 0 || r8_1 != 0)
        sub_1405c4a00(&rdx_2[4], rsi_1.d, r8_1)
        memcpy(*(rdx_2 + 0x10), r14_1, (rsi_1 << 3).d)
    else
        rdx_2[7] = 0

int32_t rax_7 = 0
int32_t rcx_4 = *(arg1 + 0x48) + 1

if (rcx_4 u< *(arg1 + 0x40))
    rax_7 = rcx_4

*(arg1 + 0x4c) -= *((sx.q(rax_7) << 5) + *(arg1 + 0x38) + 4)
*(arg2 + 0x3b94) += 1
uint64_t r9_1 = zx.q(*(arg1 + 0x18))
int32_t rdx_5 = *(arg1 + 0x1c)
int32_t r11_1 = *(arg1 + 0x58)
int64_t* rcx_8 = *(*(arg2 + 0x1c8) + 0x30)
uint64_t var_28_1 = zx.q((r9_1 << 3).d)
uint64_t r8_5 = zx.q(*(arg1 + 0x54))
int64_t r10_1 = *rcx_8
int64_t var_30_1 = *(*(arg1 + 0xc0) + 0x20)

if (r9_1.d + rdx_5 u> r11_1)
    int32_t var_38_1 = r11_1 - r9_1.d
    (*(r10_1 + 0x1b0))(rcx_8, *(arg1 + 0x60), r8_5)
    rdx_5 = *(arg1 + 0x18) - *(arg1 + 0x58) + *(arg1 + 0x1c)
    rcx_8 = *(*(arg2 + 0x1c8) + 0x30)
    r9_1 = 0
    r8_5 = zx.q(*(arg1 + 0x54))
    var_28_1 = 0
    r10_1 = *rcx_8
    var_30_1 = *(*(arg1 + 0xc0) + 0x20)

(*(r10_1 + 0x1b0))(rcx_8, *(arg1 + 0x60), r8_5, r9_1, rdx_5, var_30_1, var_28_1)

if (data_1439b4ad4 != 0 && arg1 != -0x68 && *(arg1 + 0x70) != 0)
    sub_141026da0(*(*(arg2 + 0x1c8) + 0x118), arg1 + 0x68)

sub_14105c1a0(*(arg1 + 0xc0), arg2 + 0x1c0)

if (*(arg1 + 0x30) s<= 0)
    return 

void** r14_2 = nullptr

do
    int64_t rdi_2 = *(arg1 + 0xc0)
    void* rsi_2 = *(r14_2 + *(arg1 + 0x28))
    sub_1410101f0(rsi_2 + 0x50, arg2 + 0x1c0)
    *(rsi_2 + 0x4c) |= 2
    r14_2 = &r14_2[1]
    i += 1
    *(rsi_2 + 0x30) = rdi_2
while (i s< *(arg1 + 0x30))
