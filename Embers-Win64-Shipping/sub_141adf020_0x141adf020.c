// 函数: sub_141adf020
// 地址: 0x141adf020
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141adb020(arg1, arg2)
*(arg1 + 0xc8) = *(arg2 + 0xc8)
*(arg1 + 0xd0) = *(arg2 + 0xd0)
*(arg1 + 0xe0) = *(arg2 + 0xe0)
*(arg1 + 0xf0) = *(arg2 + 0xf0)
*(arg1 + 0x100) = *(arg2 + 0x100)
*(arg1 + 0x110) = *(arg2 + 0x110)
*(arg1 + 0x120) = *(arg2 + 0x120)
*(arg1 + 0x130) = *(arg2 + 0x130)
*(arg1 + 0x140) = *(arg2 + 0x140)
*(arg1 + 0x150) = *(arg2 + 0x150)
*(arg1 + 0x160) = *(arg2 + 0x160)
*(arg1 + 0x168) = *(arg2 + 0x168)
*(arg1 + 0x170) = *(arg2 + 0x170)
*(arg1 + 0x174) = *(arg2 + 0x174)
*(arg1 + 0x17c) = *(arg2 + 0x17c)
*(arg1 + 0x180) = *(arg2 + 0x180)
*(arg1 + 0x188) = *(arg2 + 0x188)
*(arg1 + 0x18c) = *(arg2 + 0x18c)
*(arg1 + 0x194) = *(arg2 + 0x194)
*(arg1 + 0x198) = *(arg2 + 0x198)
*(arg1 + 0x1a0) = *(arg2 + 0x1a0)
*(arg1 + 0x1a4) = *(arg2 + 0x1a4)
*(arg1 + 0x1a8) = *(arg2 + 0x1a8)
*(arg1 + 0x1b8) = *(arg2 + 0x1b8)
*(arg1 + 0x1b9) = *(arg2 + 0x1b9)
*(arg1 + 0x1ba) = *(arg2 + 0x1ba)
*(arg1 + 0x1bb) = *(arg2 + 0x1bb)
*(arg1 + 0x1bc) ^= (*(arg1 + 0x1bc) ^ *(arg2 + 0x1bc)) & 1
char rax_13 = *(arg1 + 0x1bc)
char rcx = ((rax_13 ^ *(arg2 + 0x1bc)) & 2) ^ rax_13
*(arg1 + 0x1bc) = rcx
char rax_14 = ((rcx ^ *(arg2 + 0x1bc)) & 4) ^ rcx
*(arg1 + 0x1bc) = rax_14
char rcx_1 = ((rax_14 ^ *(arg2 + 0x1bc)) & 8) ^ rax_14
*(arg1 + 0x1bc) = rcx_1
*(arg1 + 0x1bc) = ((rcx_1 ^ *(arg2 + 0x1bc)) & 0x10) ^ rcx_1
char rax_16 = *(arg1 + 0x1d8)
*(arg1 + 0x1c0) = *(arg2 + 0x1c0)
*(arg1 + 0x1d0) = *(arg2 + 0x1d0)
*(arg1 + 0x1d8) ^= (rax_16 ^ *(arg2 + 0x1d8)) & 1
char rax_17 = *(arg1 + 0x1d8)
char rcx_2 = ((rax_17 ^ *(arg2 + 0x1d8)) & 2) ^ rax_17
*(arg1 + 0x1d8) = rcx_2
*(arg1 + 0x1d8) = ((rcx_2 ^ *(arg2 + 0x1d8)) & 4) ^ rcx_2
*(arg1 + 0x1dc) = *(arg2 + 0x1dc)
*(arg1 + 0x1e0) = *(arg2 + 0x1e0)
*(arg1 + 0x1e4) = *(arg2 + 0x1e4)
*(arg1 + 0x1e8) = *(arg2 + 0x1e8)
*(arg1 + 0x1f0) = *(arg2 + 0x1f0)
*(arg1 + 0x1f8) = *(arg2 + 0x1f8)
*(arg1 + 0x208) = *(arg2 + 0x208)

if (arg1 + 0x210 != arg2 + 0x210)
    int32_t i_2 = *(arg1 + 0x218)
    int64_t* rbx_1 = *(arg1 + 0x210)
    
    if (i_2 != 0)
        int32_t i
        
        do
            int64_t rcx_3 = *rbx_1
            
            if (rcx_3 != 0)
                sub_140a74f90(rcx_3)
            
            rbx_1 = &rbx_1[4]
            i = i_2
            i_2 -= 1
        while (i != 1)
    
    int32_t i_3 = *(arg2 + 0x218)
    void* rdi_1 = *(arg2 + 0x210)
    int32_t r8_1 = *(arg1 + 0x21c)
    *(arg1 + 0x218) = i_3
    
    if (i_3 != 0 || r8_1 != 0)
        sub_14083a1f0(arg1 + 0x210, i_3, r8_1)
        int64_t* rbx_2 = *(arg1 + 0x210)
        
        if (i_3 != 0)
            void* rdi_2 = rdi_1 + 0x10
            int32_t i_1
            
            do
                *rbx_2 = 0
                int64_t r14_1 = sx.q(*(rdi_2 - 8))
                int64_t r12_1 = *(rdi_2 - 0x10)
                rbx_2[1].d = r14_1.d
                
                if (r14_1.d != 0)
                    sub_1405c4a90(rbx_2, r14_1.d, 0)
                    memcpy(*rbx_2, r12_1, (r14_1 << 2).d)
                else
                    *(rbx_2 + 0xc) = 0
                
                rbx_2[2].d = *rdi_2
                *(rbx_2 + 0x14) = *(rdi_2 + 4)
                int32_t rax_26 = *(rdi_2 + 8)
                rdi_2 += 0x20
                rbx_2[3].d = rax_26
                rbx_2 = &rbx_2[4]
                i_1 = i_3
                i_3 -= 1
            while (i_1 != 1)
    else
        *(arg1 + 0x21c) = 0

if (arg1 + 0x220 != arg2 + 0x220)
    int64_t rdi_3 = sx.q(*(arg2 + 0x228))
    int64_t r14_2 = *(arg2 + 0x220)
    int32_t r8_4 = *(arg1 + 0x22c)
    *(arg1 + 0x228) = rdi_3.d
    
    if (rdi_3.d != 0 || r8_4 != 0)
        sub_1405c4a00(arg1 + 0x220, rdi_3.d, r8_4)
        memcpy(*(arg1 + 0x220), r14_2, (rdi_3 << 3).d)
    else
        *(arg1 + 0x22c) = 0

sub_14090a0d0(arg1 + 0x230, arg2 + 0x230)

if (arg1 + 0x240 != arg2 + 0x240)
    int64_t rdi_4 = sx.q(*(arg2 + 0x248))
    int64_t r14_3 = *(arg2 + 0x240)
    int32_t r8_7 = *(arg1 + 0x24c)
    *(arg1 + 0x248) = rdi_4.d
    
    if (rdi_4.d != 0 || r8_7 != 0)
        sub_1407c35c0(arg1 + 0x240, rdi_4.d, r8_7)
        memcpy(*(arg1 + 0x240), r14_3, (rdi_4 << 6).d)
    else
        *(arg1 + 0x24c) = 0

if (arg1 + 0x250 != arg2 + 0x250)
    int64_t rdi_5 = sx.q(*(arg2 + 0x258))
    int64_t r14_4 = *(arg2 + 0x250)
    int32_t r8_10 = *(arg1 + 0x25c)
    *(arg1 + 0x258) = rdi_5.d
    
    if (rdi_5.d != 0 || r8_10 != 0)
        sub_1405c4a00(arg1 + 0x250, rdi_5.d, r8_10)
        memcpy(*(arg1 + 0x250), r14_4, (rdi_5 << 3).d)
    else
        *(arg1 + 0x25c) = 0

if (arg1 + 0x260 != arg2 + 0x260)
    int64_t rdi_6 = sx.q(*(arg2 + 0x268))
    int64_t r14_5 = *(arg2 + 0x260)
    int32_t r8_13 = *(arg1 + 0x26c)
    *(arg1 + 0x268) = rdi_6.d
    
    if (rdi_6.d != 0 || r8_13 != 0)
        sub_1409912e0(arg1 + 0x260, rdi_6.d, r8_13)
        memcpy(*(arg1 + 0x260), r14_5, (rdi_6 * 0x24).d)
    else
        *(arg1 + 0x26c) = 0

if (arg1 + 0x270 != arg2 + 0x270)
    int64_t rdi_7 = sx.q(*(arg2 + 0x2b8))
    void* rbx_7 = arg1 + 0x2a8
    sub_1405a4aa0(rbx_7, 0, rdi_7.d, 4)
    void* rax_31 = *(arg2 + 0x2b0)
    void* rdx_12 = arg2 + 0x2a8
    void* r9_1 = *(rbx_7 + 8)
    
    if (rax_31 != 0)
        rdx_12 = rax_31
    
    if (r9_1 != 0)
        rbx_7 = r9_1
    
    memcpy(rbx_7, rdx_12, (rdi_7 << 2).d)
    *(arg1 + 0x2b8) = rdi_7.d
    int64_t r15_1 = sx.q(*(arg2 + 0x278))
    *(arg1 + 0x278) = 0
    
    if (*(arg1 + 0x27c) != r15_1.d)
        sub_1405a5410(arg1 + 0x270, r15_1.d)
    
    void* rbx_8 = arg1 + 0x280
    *(arg1 + 0x2a0) = 0xffffffff
    *(arg1 + 0x2a4) = 0
    sub_14059a8e0(rbx_8, r15_1.d)
    int32_t rax_32 = *(arg1 + 0x278) + r15_1.d
    *(arg1 + 0x278) = rax_32
    
    if (rax_32 s> *(arg1 + 0x27c))
        sub_1405a4f90(arg1 + 0x270)
    
    void* rdi_8 = arg2 + 0x280
    *(arg1 + 0x2a0) = *(arg2 + 0x2a0)
    *(arg1 + 0x2a4) = *(arg2 + 0x2a4)
    
    if (rbx_8 != rdi_8)
        sub_14059a8e0(rbx_8, *(rdi_8 + 0x18))
        int32_t rax_35 = *(rdi_8 + 0x18)
        *(rbx_8 + 0x18) = rax_35
        
        if (rax_35 != 0)
            void* r9_2 = *(rdi_8 + 0x10)
            void* r10_1 = *(rbx_8 + 0x10)
            
            if (r9_2 != 0)
                rdi_8 = r9_2
            
            if (r10_1 != 0)
                rbx_8 = r10_1
            
            memcpy(rbx_8, rdi_8, (zx.q(rax_35 + 0x1f) u>> 5 << 2).d)
    
    memcpy(*(arg1 + 0x270), *(arg2 + 0x270), (r15_1 << 4).d)

void* rdi_9 = arg2 + 0x310
void* rbx_9 = arg1 + 0x310
*(arg1 + 0x2c0) = *(arg2 + 0x2c0)
*(arg1 + 0x2c8) = *(arg2 + 0x2c8)
*(arg1 + 0x2cc) = *(arg2 + 0x2cc)
*(arg1 + 0x2dc) = *(arg2 + 0x2dc)
*(arg1 + 0x2e0) = *(arg2 + 0x2e0)
*(arg1 + 0x2f0) = *(arg2 + 0x2f0)
*(arg1 + 0x2f8) = *(arg2 + 0x2f8)
*(arg1 + 0x300) = *(arg2 + 0x300)
*(arg1 + 0x301) = *(arg2 + 0x301)
*(arg1 + 0x302) = *(arg2 + 0x302)
*(arg1 + 0x303) = *(arg2 + 0x303)
*(arg1 + 0x304) = *(arg2 + 0x304)
*(arg1 + 0x305) = *(arg2 + 0x305)
*(arg1 + 0x308) = *(arg2 + 0x308)
*(arg1 + 0x30c) = *(arg2 + 0x30c)
*(arg1 + 0x30e) = *(arg2 + 0x30e)

if (rbx_9 != rdi_9)
    int64_t r14_7 = sx.q(*(rdi_9 + 0x28))
    void* r15_2 = *(rdi_9 + 0x20)
    int32_t r8_24 = *(rbx_9 + 0x2c)
    *(rbx_9 + 0x28) = r14_7.d
    
    if (r14_7.d != 0 || r8_24 != 0)
        sub_140775110(rbx_9, r14_7.d, r8_24)
        void* rax_49 = *(rbx_9 + 0x20)
        
        if (r15_2 != 0)
            rdi_9 = r15_2
        
        if (rax_49 != 0)
            rbx_9 = rax_49
        
        memcpy(rbx_9, rdi_9, (r14_7 << 2).d)
    else
        *(rbx_9 + 0x2c) = 8

void* rdi_10 = arg2 + 0x340
void* rbx_10 = arg1 + 0x340

if (rbx_10 != rdi_10)
    int64_t r14_8 = sx.q(*(rdi_10 + 0x18))
    void* r15_3 = *(rdi_10 + 0x10)
    int32_t r8_27 = *(rbx_10 + 0x1c)
    *(rbx_10 + 0x18) = r14_8.d
    
    if (r14_8.d != 0 || r8_27 != 0)
        sub_140775080(rbx_10, r14_8.d, r8_27)
        void* rax_50 = *(rbx_10 + 0x10)
        
        if (r15_3 != 0)
            rdi_10 = r15_3
        
        if (rax_50 != 0)
            rbx_10 = rax_50
        
        memcpy(rbx_10, rdi_10, (r14_8 << 2).d)
    else
        *(rbx_10 + 0x1c) = 4

*(arg1 + 0x360) = *(arg2 + 0x360)
*(arg1 + 0x368) = *(arg2 + 0x368)
*(arg1 + 0x378) = *(arg2 + 0x378)
sub_141a914e0(arg1 + 0x380, arg2 + 0x380)
sub_140780b40(arg1 + 0x4c8, arg2 + 0x4c8)
*(arg1 + 0x4d8) = *(arg2 + 0x4d8)
sub_14081d8c0(arg1 + 0x4e0, arg2 + 0x4e0)
sub_14081d8c0(arg1 + 0x4f0, arg2 + 0x4f0)
sub_14086c240(arg1 + 0x500, arg2 + 0x500)
sub_140780b40(arg1 + 0x510, arg2 + 0x510)
*(arg1 + 0x520) = *(arg2 + 0x520)
sub_14081d8c0(arg1 + 0x528, arg2 + 0x528)
sub_14081d8c0(arg1 + 0x538, arg2 + 0x538)
sub_14086c240(arg1 + 0x548, arg2 + 0x548)

if (arg1 + 0x558 != arg2 + 0x558)
    int64_t r14_9 = sx.q(*(arg2 + 0x560))
    int64_t r15_4 = *(arg2 + 0x558)
    int32_t r8_30 = *(arg1 + 0x564)
    *(arg1 + 0x560) = r14_9.d
    
    if (r14_9.d != 0 || r8_30 != 0)
        sub_1405c4a00(arg1 + 0x558, r14_9.d, r8_30)
        memcpy(*(arg1 + 0x558), r15_4, (r14_9 << 3).d)
    else
        *(arg1 + 0x564) = 0

*(arg1 + 0x568) = *(arg2 + 0x568)
*(arg1 + 0x570) = *(arg2 + 0x570)
*(arg1 + 0x572) = *(arg2 + 0x572)
*(arg1 + 0x578) = *(arg2 + 0x578)
*(arg1 + 0x580) = *(arg2 + 0x580)
return arg1
