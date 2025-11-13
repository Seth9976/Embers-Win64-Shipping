// 函数: sub_14289baa0
// 地址: 0x14289baa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
uint64_t r15 = zx.q(arg2[0x1a])
int32_t i = 0
void* rbx = arg1
*(r15 + &arg2[0xa]) = 0x80
void* const r15_1 = r15 + 1

if (r15_1 u> 0x38)
    memset(r15_1 + &arg2[0xa], 0, 0x40 - r15_1)
    r15_1 = nullptr
    sub_14289bf90(arg2, &arg2[0xa], 1)

memset(r15_1 + &arg2[0xa], 0, 0x38 - r15_1)
arg2[0x18].b = *(arg2 + 0x27)
*(arg2 + 0x61) = *(arg2 + 0x26)
*(arg2 + 0x62) = *(arg2 + 0x25)
*(arg2 + 0x63) = arg2[9].b
arg2[0x19].b = *(arg2 + 0x23)
*(arg2 + 0x65) = *(arg2 + 0x22)
*(arg2 + 0x66) = *(arg2 + 0x21)
*(arg2 + 0x67) = arg2[8].b
sub_14289bf90(arg2, &arg2[0xa], 1)
arg2[0x1a] = 0
sub_1428b8960(&arg2[0xa], 0x40)
int32_t rax_8 = arg2[0x1b]

if (rax_8 == 0x1c)
    int32_t rcx_14 = *arg2
    *rbx = (rcx_14 u>> 0x18).b
    *(rbx + 1) = (rcx_14 u>> 0x10).b
    *(rbx + 2) = (rcx_14 u>> 8).b
    *(rbx + 3) = rcx_14.b
    int32_t rcx_15 = arg2[1]
    *(rbx + 4) = (rcx_15 u>> 0x18).b
    *(rbx + 5) = (rcx_15 u>> 0x10).b
    *(rbx + 6) = (rcx_15 u>> 8).b
    *(rbx + 7) = rcx_15.b
    int32_t rcx_16 = arg2[2]
    *(rbx + 8) = (rcx_16 u>> 0x18).b
    *(rbx + 9) = (rcx_16 u>> 0x10).b
    *(rbx + 0xa) = (rcx_16 u>> 8).b
    *(rbx + 0xb) = rcx_16.b
    int32_t rcx_17 = arg2[3]
    *(rbx + 0xc) = (rcx_17 u>> 0x18).b
    *(rbx + 0xd) = (rcx_17 u>> 0x10).b
    *(rbx + 0xe) = (rcx_17 u>> 8).b
    *(rbx + 0xf) = rcx_17.b
    int32_t rcx_18 = arg2[4]
    *(rbx + 0x10) = (rcx_18 u>> 0x18).b
    *(rbx + 0x11) = (rcx_18 u>> 0x10).b
    *(rbx + 0x12) = (rcx_18 u>> 8).b
    *(rbx + 0x13) = rcx_18.b
    int32_t rcx_19 = arg2[5]
    *(rbx + 0x14) = (rcx_19 u>> 0x18).b
    *(rbx + 0x15) = (rcx_19 u>> 0x10).b
    *(rbx + 0x16) = (rcx_19 u>> 8).b
    *(rbx + 0x17) = rcx_19.b
    int32_t rdx_2 = arg2[6]
    *(rbx + 0x18) = (rdx_2 u>> 0x18).b
    *(rbx + 0x19) = (rdx_2 u>> 0x10).b
    *(rbx + 0x1a) = (rdx_2 u>> 8).b
    *(rbx + 0x1b) = rdx_2.b
else if (rax_8 == 0x20)
    int32_t rcx_6 = *arg2
    *rbx = (rcx_6 u>> 0x18).b
    *(rbx + 1) = (rcx_6 u>> 0x10).b
    *(rbx + 2) = (rcx_6 u>> 8).b
    *(rbx + 3) = rcx_6.b
    int32_t rcx_7 = arg2[1]
    *(rbx + 4) = (rcx_7 u>> 0x18).b
    *(rbx + 5) = (rcx_7 u>> 0x10).b
    *(rbx + 6) = (rcx_7 u>> 8).b
    *(rbx + 7) = rcx_7.b
    int32_t rcx_8 = arg2[2]
    *(rbx + 8) = (rcx_8 u>> 0x18).b
    *(rbx + 9) = (rcx_8 u>> 0x10).b
    *(rbx + 0xa) = (rcx_8 u>> 8).b
    *(rbx + 0xb) = rcx_8.b
    int32_t rcx_9 = arg2[3]
    *(rbx + 0xc) = (rcx_9 u>> 0x18).b
    *(rbx + 0xd) = (rcx_9 u>> 0x10).b
    *(rbx + 0xe) = (rcx_9 u>> 8).b
    *(rbx + 0xf) = rcx_9.b
    int32_t rcx_10 = arg2[4]
    *(rbx + 0x10) = (rcx_10 u>> 0x18).b
    *(rbx + 0x11) = (rcx_10 u>> 0x10).b
    *(rbx + 0x12) = (rcx_10 u>> 8).b
    *(rbx + 0x13) = rcx_10.b
    int32_t rcx_11 = arg2[5]
    *(rbx + 0x14) = (rcx_11 u>> 0x18).b
    *(rbx + 0x15) = (rcx_11 u>> 0x10).b
    *(rbx + 0x16) = (rcx_11 u>> 8).b
    *(rbx + 0x17) = rcx_11.b
    int32_t rcx_12 = arg2[6]
    *(rbx + 0x18) = (rcx_12 u>> 0x18).b
    *(rbx + 0x19) = (rcx_12 u>> 0x10).b
    *(rbx + 0x1a) = (rcx_12 u>> 8).b
    *(rbx + 0x1b) = rcx_12.b
    int32_t rcx_13 = arg2[7]
    *(rbx + 0x1c) = (rcx_13 u>> 0x18).b
    *(rbx + 0x1d) = (rcx_13 u>> 0x10).b
    *(rbx + 0x1e) = (rcx_13 u>> 8).b
    *(rbx + 0x1f) = rcx_13.b
else
    if (rax_8 u> 0x20)
        return 0
    
    if ((rax_8 & 0xfffffffc) u> 0)
        do
            uint64_t i_1 = zx.q(i)
            rbx += 4
            i += 1
            int32_t rcx_5 = arg2[i_1]
            *(rbx - 4) = (rcx_5 u>> 0x18).b
            *(rbx - 3) = (rcx_5 u>> 0x10).b
            *(rbx - 2) = (rcx_5 u>> 8).b
            *(rbx - 1) = rcx_5.b
        while (i u< arg2[0x1b] u>> 2)

return 1
