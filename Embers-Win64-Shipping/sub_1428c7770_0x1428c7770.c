// 函数: sub_1428c7770
// 地址: 0x1428c7770
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
uint64_t rbx = zx.q(arg2[0x17])
*(rbx + &arg2[7]) = 0x80
void* const rbx_1 = rbx + 1

if (rbx_1 u> 0x38)
    memset(rbx_1 + &arg2[7], 0, 0x40 - rbx_1)
    rbx_1 = nullptr
    sub_1428c7ac0(arg2, &arg2[7], 1)

memset(rbx_1 + &arg2[7], 0, 0x38 - rbx_1)
arg2[0x15].b = *(arg2 + 0x1b)
*(arg2 + 0x55) = *(arg2 + 0x1a)
*(arg2 + 0x56) = *(arg2 + 0x19)
*(arg2 + 0x57) = arg2[6].b
arg2[0x16].b = *(arg2 + 0x17)
*(arg2 + 0x59) = *(arg2 + 0x16)
*(arg2 + 0x5a) = *(arg2 + 0x15)
*(arg2 + 0x5b) = arg2[5].b
sub_1428c7ac0(arg2, &arg2[7], 1)
arg2[0x17] = 0
sub_1428b8960(&arg2[7], 0x40)
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
int32_t rdx_2 = arg2[4]
arg1[0x10] = (rdx_2 u>> 0x18).b
arg1[0x11] = (rdx_2 u>> 0x10).b
arg1[0x12] = (rdx_2 u>> 8).b
arg1[0x13] = rdx_2.b
return 1
