// 函数: sub_14295d740
// 地址: 0x14295d740
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
uint64_t rbx = zx.q(arg2[0x16])
*(rbx + &arg2[6]) = 0x80
void* const rbx_1 = rbx + 1

if (rbx_1 u> 0x38)
    memset(rbx_1 + &arg2[6], 0, 0x40 - rbx_1)
    rbx_1 = nullptr
    sub_14295d9f0(arg2, &arg2[6], 1)

memset(rbx_1 + &arg2[6], 0, 0x38 - rbx_1)
arg2[0x14].b = arg2[4].b
*(arg2 + 0x51) = *(arg2 + 0x11)
*(arg2 + 0x52) = *(arg2 + 0x12)
*(arg2 + 0x53) = *(arg2 + 0x13)
arg2[0x15].b = arg2[5].b
*(arg2 + 0x55) = *(arg2 + 0x15)
*(arg2 + 0x56) = *(arg2 + 0x16)
*(arg2 + 0x57) = *(arg2 + 0x17)
sub_14295d9f0(arg2, &arg2[6], 1)
arg2[0x16] = 0
sub_1428b8960(&arg2[6], 0x40)
int32_t rcx_5 = *arg2
*arg1 = rcx_5.b
arg1[1] = (rcx_5 u>> 8).b
arg1[2] = (rcx_5 u>> 0x10).b
arg1[3] = (rcx_5 u>> 0x18).b
int32_t rcx_7 = arg2[1]
arg1[4] = rcx_7.b
arg1[5] = (rcx_7 u>> 8).b
arg1[6] = (rcx_7 u>> 0x10).b
arg1[7] = (rcx_7 u>> 0x18).b
int32_t rcx_9 = arg2[2]
arg1[8] = rcx_9.b
arg1[9] = (rcx_9 u>> 8).b
arg1[0xa] = (rcx_9 u>> 0x10).b
arg1[0xb] = (rcx_9 u>> 0x18).b
int32_t rdx_2 = arg2[3]
arg1[0xc] = rdx_2.b
arg1[0xd] = (rdx_2 u>> 8).b
arg1[0xe] = (rdx_2 u>> 0x10).b
arg1[0xf] = (rdx_2 u>> 0x18).b
return 1
