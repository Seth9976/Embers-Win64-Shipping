// 函数: sub_142967d40
// 地址: 0x142967d40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
uint64_t rdi = zx.q(arg2[0x1a])
*(rdi + &arg2[0xa]) = 0x80
void* const rdi_1 = rdi + 1

if (rdi_1 u> 0x38)
    memset(rdi_1 + &arg2[0xa], 0, 0x40 - rdi_1)
    rdi_1 = nullptr
    sub_142965420(arg2, &arg2[0xa], 1)

memset(rdi_1 + &arg2[0xa], 0, 0x38 - rdi_1)
arg2[0x18].b = *(arg2 + 0x27)
*(arg2 + 0x61) = *(arg2 + 0x26)
*(arg2 + 0x62) = *(arg2 + 0x25)
*(arg2 + 0x63) = arg2[9].b
arg2[0x19].b = *(arg2 + 0x23)
*(arg2 + 0x65) = *(arg2 + 0x22)
*(arg2 + 0x66) = *(arg2 + 0x21)
*(arg2 + 0x67) = arg2[8].b
sub_142965420(arg2, &arg2[0xa], 1)
arg2[0x1a] = 0
sub_1428b8960(&arg2[0xa], 0x40)
int32_t rcx_5 = *arg2
*arg1 = (rcx_5 u>> 0x18).b
arg1[1] = (rcx_5 u>> 0x10).b
arg1[2] = (rcx_5 u>> 8).b
arg1[3] = rcx_5.b
int32_t rcx_6 = arg2[1]
arg1[4] = (rcx_6 u>> 0x18).b
arg1[5] = (rcx_6 u>> 0x10).b
arg1[6] = (rcx_6 u>> 8).b
arg1[7] = rcx_6.b
int32_t rcx_7 = arg2[2]
arg1[8] = (rcx_7 u>> 0x18).b
arg1[9] = (rcx_7 u>> 0x10).b
arg1[0xa] = (rcx_7 u>> 8).b
arg1[0xb] = rcx_7.b
int32_t rcx_8 = arg2[3]
arg1[0xc] = (rcx_8 u>> 0x18).b
arg1[0xd] = (rcx_8 u>> 0x10).b
arg1[0xe] = (rcx_8 u>> 8).b
arg1[0xf] = rcx_8.b
int32_t rcx_9 = arg2[4]
arg1[0x10] = (rcx_9 u>> 0x18).b
arg1[0x11] = (rcx_9 u>> 0x10).b
arg1[0x12] = (rcx_9 u>> 8).b
arg1[0x13] = rcx_9.b
int32_t rcx_10 = arg2[5]
arg1[0x14] = (rcx_10 u>> 0x18).b
arg1[0x15] = (rcx_10 u>> 0x10).b
arg1[0x16] = (rcx_10 u>> 8).b
arg1[0x17] = rcx_10.b
int32_t rcx_11 = arg2[6]
arg1[0x18] = (rcx_11 u>> 0x18).b
arg1[0x19] = (rcx_11 u>> 0x10).b
arg1[0x1a] = (rcx_11 u>> 8).b
arg1[0x1b] = rcx_11.b
int32_t rdx_2 = arg2[7]
arg1[0x1c] = (rdx_2 u>> 0x18).b
arg1[0x1d] = (rdx_2 u>> 0x10).b
arg1[0x1e] = (rdx_2 u>> 8).b
arg1[0x1f] = rdx_2.b
return 1
