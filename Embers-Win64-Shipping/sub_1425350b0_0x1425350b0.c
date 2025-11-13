// 函数: sub_1425350b0
// 地址: 0x1425350b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* rbx = arg1 + 0x1c
void* r15_1 = arg2 - arg1
int64_t i_1 = 5
int64_t i

do
    int64_t* rax_2 = r15_1 - 0x1c + rbx
    
    if (&rbx[-7] != rax_2)
        int64_t rdi_1 = sx.q(*(r15_1 + rbx - 0x14))
        int64_t r14_1 = *rax_2
        int32_t r8_1 = rbx[-4]
        rbx[-5] = rdi_1.d
        
        if (rdi_1.d != 0 || r8_1 != 0)
            sub_1405c4a00(&rbx[-7], rdi_1.d, r8_1)
            memcpy(*(rbx - 0x1c), r14_1, (rdi_1 << 3).d)
        else
            rbx[-4] = rdi_1.d
    
    int64_t* rax_4 = r15_1 - 0xc + rbx
    
    if (&rbx[-3] != rax_4)
        int64_t rdi_2 = sx.q(*(rbx + r15_1 - 4))
        int64_t r14_2 = *rax_4
        int32_t r8_4 = *rbx
        rbx[-1] = rdi_2.d
        
        if (rdi_2.d != 0 || r8_4 != 0)
            sub_1405a4be0(&rbx[-3], rdi_2.d, r8_4)
            memcpy(*(rbx - 0xc), r14_2, (rdi_2 << 4).d)
        else
            *rbx = rdi_2.d
    
    int64_t* rax_6 = r15_1 + 4 + rbx
    
    if (&rbx[1] != rax_6)
        int64_t rdi_3 = sx.q(*(r15_1 + rbx + 0xc))
        int64_t r14_3 = *rax_6
        int32_t r8_7 = rbx[4]
        rbx[3] = rdi_3.d
        
        if (rdi_3.d != 0 || r8_7 != 0)
            sub_1405a4be0(&rbx[1], rdi_3.d, r8_7)
            memcpy(*(rbx + 4), r14_3, (rdi_3 << 4).d)
        else
            rbx[4] = rdi_3.d
    
    sub_14081d8c0(&rbx[5], r15_1 + 0x14 + rbx)
    rbx = &rbx[0x10]
    i = i_1
    i_1 -= 1
while (i != 1)

if (arg1 + 0x140 != arg2 + 0x140)
    int64_t rdi_4 = sx.q(*(arg2 + 0x148))
    int64_t rsi_4 = *(arg2 + 0x140)
    int32_t r8_10 = *(arg1 + 0x14c)
    *(arg1 + 0x148) = rdi_4.d
    
    if (rdi_4.d != 0 || r8_10 != 0)
        sub_140638750(arg1 + 0x140, rdi_4.d, r8_10)
        memcpy(*(arg1 + 0x140), rsi_4, (rdi_4 << 2).d)
    else
        *(arg1 + 0x14c) = rdi_4.d

if (arg1 + 0x150 != arg2 + 0x150)
    int64_t rdi_5 = sx.q(*(arg2 + 0x158))
    int64_t rsi_5 = *(arg2 + 0x150)
    int32_t r8_13 = *(arg1 + 0x15c)
    *(arg1 + 0x158) = rdi_5.d
    
    if (rdi_5.d != 0 || r8_13 != 0)
        sub_14061cb30(arg1 + 0x150, rdi_5.d, r8_13)
        memcpy(*(arg1 + 0x150), rsi_5, (rdi_5 << 4).d)
    else
        *(arg1 + 0x15c) = rdi_5.d

if (arg1 + 0x160 != arg2 + 0x160)
    int64_t rdi_6 = sx.q(*(arg2 + 0x168))
    int64_t rsi_6 = *(arg2 + 0x160)
    int32_t r8_16 = *(arg1 + 0x16c)
    *(arg1 + 0x168) = rdi_6.d
    
    if (rdi_6.d != 0 || r8_16 != 0)
        sub_1405c4a00(arg1 + 0x160, rdi_6.d, r8_16)
        memcpy(*(arg1 + 0x160), rsi_6, (rdi_6 << 3).d)
    else
        *(arg1 + 0x16c) = rdi_6.d

if (arg1 + 0x170 != arg2 + 0x170)
    int64_t rdi_7 = sx.q(*(arg2 + 0x178))
    int64_t rsi_7 = *(arg2 + 0x170)
    int32_t r8_19 = *(arg1 + 0x17c)
    *(arg1 + 0x178) = rdi_7.d
    
    if (rdi_7.d != 0 || r8_19 != 0)
        sub_1405c4a00(arg1 + 0x170, rdi_7.d, r8_19)
        memcpy(*(arg1 + 0x170), rsi_7, (rdi_7 << 3).d)
    else
        *(arg1 + 0x17c) = rdi_7.d

if (arg1 + 0x180 != arg2 + 0x180)
    int64_t rdi_8 = sx.q(*(arg2 + 0x188))
    int64_t rsi_8 = *(arg2 + 0x180)
    int32_t r8_22 = *(arg1 + 0x18c)
    *(arg1 + 0x188) = rdi_8.d
    
    if (rdi_8.d != 0 || r8_22 != 0)
        sub_140638750(arg1 + 0x180, rdi_8.d, r8_22)
        memcpy(*(arg1 + 0x180), rsi_8, (rdi_8 << 2).d)
    else
        *(arg1 + 0x18c) = rdi_8.d

if (arg1 + 0x190 != arg2 + 0x190)
    int64_t rdi_9 = sx.q(*(arg2 + 0x198))
    int64_t rsi_9 = *(arg2 + 0x190)
    int32_t r8_25 = *(arg1 + 0x19c)
    *(arg1 + 0x198) = rdi_9.d
    
    if (rdi_9.d == 0 && r8_25 == 0)
        *(arg1 + 0x19c) = rdi_9.d
        return arg1
    
    sub_1405c4a00(arg1 + 0x190, rdi_9.d, r8_25)
    memcpy(*(arg1 + 0x190), rsi_9, (rdi_9 << 3).d)

return arg1
