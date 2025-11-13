// 函数: sub_141ae52e0
// 地址: 0x141ae52e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141adb020(arg1, arg2)
*(arg1 + 0xc8) = *(arg2 + 0xc8)
*(arg1 + 0xd0) = *(arg2 + 0xd0)
*(arg1 + 0xd8) = *(arg2 + 0xd8)
*(arg1 + 0xdc) = *(arg2 + 0xdc)
*(arg1 + 0xe4) = *(arg2 + 0xe4)
*(arg1 + 0xe8) = *(arg2 + 0xe8)
*(arg1 + 0xf0) = *(arg2 + 0xf0)
*(arg1 + 0xf4) = *(arg2 + 0xf4)
*(arg1 + 0xfc) = *(arg2 + 0xfc)
*(arg1 + 0x100) = *(arg2 + 0x100)
*(arg1 + 0x108) = *(arg2 + 0x108)
*(arg1 + 0x10c) = *(arg2 + 0x10c)
*(arg1 + 0x110) = *(arg2 + 0x110)
*(arg1 + 0x120) = *(arg2 + 0x120)
*(arg1 + 0x121) = *(arg2 + 0x121)
*(arg1 + 0x122) = *(arg2 + 0x122)
*(arg1 + 0x123) ^= (*(arg1 + 0x123) ^ *(arg2 + 0x123)) & 1
char rax_11 = *(arg1 + 0x123)
char rcx = ((*(arg2 + 0x123) ^ rax_11) & 2) ^ rax_11
*(arg1 + 0x123) = rcx
char rax_12 = ((*(arg2 + 0x123) ^ rcx) & 4) ^ rcx
*(arg1 + 0x123) = rax_12
char rcx_1 = ((*(arg2 + 0x123) ^ rax_12) & 8) ^ rax_12
*(arg1 + 0x123) = rcx_1
*(arg1 + 0x123) = ((*(arg2 + 0x123) ^ rcx_1) & 0x10) ^ rcx_1
*(arg1 + 0x124) = *(arg2 + 0x124)
*(arg1 + 0x134) = *(arg2 + 0x134)
*(arg1 + 0x13c) = *(arg2 + 0x13c)
*(arg1 + 0x13d) ^= (*(arg1 + 0x13d) ^ *(arg2 + 0x13d)) & 1
char rax_16 = *(arg1 + 0x13d)
char rcx_2 = ((*(arg2 + 0x13d) ^ rax_16) & 2) ^ rax_16
*(arg1 + 0x13d) = rcx_2
*(arg1 + 0x13d) = ((rcx_2 ^ *(arg2 + 0x13d)) & 4) ^ rcx_2
*(arg1 + 0x140) = *(arg2 + 0x140)
*(arg1 + 0x150) = *(arg2 + 0x150)
*(arg1 + 0x160) = *(arg2 + 0x160)
*(arg1 + 0x170) = *(arg2 + 0x170)
*(arg1 + 0x180) = *(arg2 + 0x180)
*(arg1 + 0x190) = *(arg2 + 0x190)
*(arg1 + 0x1a0) = *(arg2 + 0x1a0)
*(arg1 + 0x1b0) = *(arg2 + 0x1b0)
*(arg1 + 0x1c0) = *(arg2 + 0x1c0)
*(arg1 + 0x1d0) = *(arg2 + 0x1d0)
*(arg1 + 0x1d4) = *(arg2 + 0x1d4)
*(arg1 + 0x1d8) = *(arg2 + 0x1d8)
*(arg1 + 0x1dc) = *(arg2 + 0x1dc)
*(arg1 + 0x1e8) = *(arg2 + 0x1e8)
*(arg1 + 0x1f0) = *(arg2 + 0x1f0)
*(arg1 + 0x200) = *(arg2 + 0x200)

if (arg1 + 0x208 != arg2 + 0x208)
    int32_t i_2 = *(arg1 + 0x210)
    int64_t* rbx_1 = *(arg1 + 0x208)
    
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
    
    int32_t i_3 = *(arg2 + 0x210)
    void* rdi_1 = *(arg2 + 0x208)
    int32_t r8_1 = *(arg1 + 0x214)
    *(arg1 + 0x210) = i_3
    
    if (i_3 != 0 || r8_1 != 0)
        sub_14083a1f0(arg1 + 0x208, i_3, r8_1)
        int64_t* rbx_2 = *(arg1 + 0x208)
        
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
                int32_t rax_25 = *(rdi_2 + 8)
                rdi_2 += 0x20
                rbx_2[3].d = rax_25
                rbx_2 = &rbx_2[4]
                i_1 = i_3
                i_3 -= 1
            while (i_1 != 1)
    else
        *(arg1 + 0x214) = 0

if (arg1 + 0x218 != arg2 + 0x218)
    int64_t rdi_3 = sx.q(*(arg2 + 0x220))
    int64_t r14_2 = *(arg2 + 0x218)
    int32_t r8_4 = *(arg1 + 0x224)
    *(arg1 + 0x220) = rdi_3.d
    
    if (rdi_3.d != 0 || r8_4 != 0)
        sub_1405c4a00(arg1 + 0x218, rdi_3.d, r8_4)
        memcpy(*(arg1 + 0x218), r14_2, (rdi_3 << 3).d)
    else
        *(arg1 + 0x224) = 0

sub_14090a0d0(arg1 + 0x228, arg2 + 0x228)

if (arg1 + 0x238 != arg2 + 0x238)
    int64_t rdi_4 = sx.q(*(arg2 + 0x240))
    int64_t r14_3 = *(arg2 + 0x238)
    int32_t r8_7 = *(arg1 + 0x244)
    *(arg1 + 0x240) = rdi_4.d
    
    if (rdi_4.d != 0 || r8_7 != 0)
        sub_1407c35c0(arg1 + 0x238, rdi_4.d, r8_7)
        memcpy(*(arg1 + 0x238), r14_3, (rdi_4 << 6).d)
    else
        *(arg1 + 0x244) = 0

if (arg1 + 0x248 != arg2 + 0x248)
    int64_t rdi_5 = sx.q(*(arg2 + 0x250))
    int64_t r14_4 = *(arg2 + 0x248)
    int32_t r8_10 = *(arg1 + 0x254)
    *(arg1 + 0x250) = rdi_5.d
    
    if (rdi_5.d != 0 || r8_10 != 0)
        sub_1405c4a00(arg1 + 0x248, rdi_5.d, r8_10)
        memcpy(*(arg1 + 0x248), r14_4, (rdi_5 << 3).d)
    else
        *(arg1 + 0x254) = 0

if (arg1 + 0x258 != arg2 + 0x258)
    int64_t rdi_6 = sx.q(*(arg2 + 0x260))
    int64_t r14_5 = *(arg2 + 0x258)
    int32_t r8_13 = *(arg1 + 0x264)
    *(arg1 + 0x260) = rdi_6.d
    
    if (rdi_6.d != 0 || r8_13 != 0)
        sub_1409912e0(arg1 + 0x258, rdi_6.d, r8_13)
        memcpy(*(arg1 + 0x258), r14_5, (rdi_6 * 0x24).d)
    else
        *(arg1 + 0x264) = 0

if (arg1 + 0x268 != arg2 + 0x268)
    int64_t rdi_7 = sx.q(*(arg2 + 0x2b0))
    void* rbx_7 = arg1 + 0x2a0
    sub_1405a4aa0(rbx_7, 0, rdi_7.d, 4)
    void* rax_30 = *(arg2 + 0x2a8)
    void* rdx_12 = arg2 + 0x2a0
    void* r9_1 = *(rbx_7 + 8)
    
    if (rax_30 != 0)
        rdx_12 = rax_30
    
    if (r9_1 != 0)
        rbx_7 = r9_1
    
    memcpy(rbx_7, rdx_12, (rdi_7 << 2).d)
    *(arg1 + 0x2b0) = rdi_7.d
    int64_t r15_1 = sx.q(*(arg2 + 0x270))
    *(arg1 + 0x270) = 0
    
    if (*(arg1 + 0x274) != r15_1.d)
        sub_1405a5410(arg1 + 0x268, r15_1.d)
    
    void* rbx_8 = arg1 + 0x278
    *(arg1 + 0x298) = 0xffffffff
    *(arg1 + 0x29c) = 0
    sub_14059a8e0(rbx_8, r15_1.d)
    int32_t rax_31 = *(arg1 + 0x270) + r15_1.d
    *(arg1 + 0x270) = rax_31
    
    if (rax_31 s> *(arg1 + 0x274))
        sub_1405a4f90(arg1 + 0x268)
    
    void* rdi_8 = arg2 + 0x278
    *(arg1 + 0x298) = *(arg2 + 0x298)
    *(arg1 + 0x29c) = *(arg2 + 0x29c)
    
    if (rbx_8 != rdi_8)
        sub_14059a8e0(rbx_8, *(rdi_8 + 0x18))
        int32_t rax_34 = *(rdi_8 + 0x18)
        *(rbx_8 + 0x18) = rax_34
        
        if (rax_34 != 0)
            void* r9_2 = *(rdi_8 + 0x10)
            void* r10_1 = *(rbx_8 + 0x10)
            
            if (r9_2 != 0)
                rdi_8 = r9_2
            
            if (r10_1 != 0)
                rbx_8 = r10_1
            
            memcpy(rbx_8, rdi_8, (zx.q(rax_34 + 0x1f) u>> 5 << 2).d)
    
    memcpy(*(arg1 + 0x268), *(arg2 + 0x268), (r15_1 << 4).d)

void* rdi_9 = arg2 + 0x308
void* rbx_9 = arg1 + 0x308
*(arg1 + 0x2b8) = *(arg2 + 0x2b8)
*(arg1 + 0x2c0) = *(arg2 + 0x2c0)
*(arg1 + 0x2c4) = *(arg2 + 0x2c4)
*(arg1 + 0x2d4) = *(arg2 + 0x2d4)
*(arg1 + 0x2d8) = *(arg2 + 0x2d8)
*(arg1 + 0x2e8) = *(arg2 + 0x2e8)
*(arg1 + 0x2f0) = *(arg2 + 0x2f0)
*(arg1 + 0x2f8) = *(arg2 + 0x2f8)
*(arg1 + 0x2f9) = *(arg2 + 0x2f9)
*(arg1 + 0x2fa) = *(arg2 + 0x2fa)
*(arg1 + 0x2fb) = *(arg2 + 0x2fb)
*(arg1 + 0x2fc) = *(arg2 + 0x2fc)
*(arg1 + 0x2fd) = *(arg2 + 0x2fd)
*(arg1 + 0x300) = *(arg2 + 0x300)
*(arg1 + 0x304) = *(arg2 + 0x304)
*(arg1 + 0x306) = *(arg2 + 0x306)

if (rbx_9 != rdi_9)
    int64_t r14_7 = sx.q(*(rdi_9 + 0x28))
    void* r15_2 = *(rdi_9 + 0x20)
    int32_t r8_24 = *(rbx_9 + 0x2c)
    *(rbx_9 + 0x28) = r14_7.d
    
    if (r14_7.d != 0 || r8_24 != 0)
        sub_140775110(rbx_9, r14_7.d, r8_24)
        void* rax_48 = *(rbx_9 + 0x20)
        
        if (r15_2 != 0)
            rdi_9 = r15_2
        
        if (rax_48 != 0)
            rbx_9 = rax_48
        
        memcpy(rbx_9, rdi_9, (r14_7 << 2).d)
    else
        *(rbx_9 + 0x2c) = 8

void* rdi_10 = arg2 + 0x338
void* rbx_10 = arg1 + 0x338

if (rbx_10 != rdi_10)
    int64_t r14_8 = sx.q(*(rdi_10 + 0x18))
    void* r15_3 = *(rdi_10 + 0x10)
    int32_t r8_27 = *(rbx_10 + 0x1c)
    *(rbx_10 + 0x18) = r14_8.d
    
    if (r14_8.d != 0 || r8_27 != 0)
        sub_140775080(rbx_10, r14_8.d, r8_27)
        void* rax_49 = *(rbx_10 + 0x10)
        
        if (r15_3 != 0)
            rdi_10 = r15_3
        
        if (rax_49 != 0)
            rbx_10 = rax_49
        
        memcpy(rbx_10, rdi_10, (r14_8 << 2).d)
    else
        *(rbx_10 + 0x1c) = 4

*(arg1 + 0x358) = *(arg2 + 0x358)
*(arg1 + 0x360) = *(arg2 + 0x360)
*(arg1 + 0x370) = *(arg2 + 0x370)
sub_141a914e0(arg1 + 0x378, arg2 + 0x378)
sub_140780b40(arg1 + 0x4c0, arg2 + 0x4c0)
*(arg1 + 0x4d0) = *(arg2 + 0x4d0)
sub_14081d8c0(arg1 + 0x4d8, arg2 + 0x4d8)
sub_14081d8c0(arg1 + 0x4e8, arg2 + 0x4e8)
sub_14086c240(arg1 + 0x4f8, arg2 + 0x4f8)
sub_140780b40(arg1 + 0x508, arg2 + 0x508)
*(arg1 + 0x518) = *(arg2 + 0x518)
sub_14081d8c0(arg1 + 0x520, arg2 + 0x520)
sub_14081d8c0(arg1 + 0x530, arg2 + 0x530)
sub_14086c240(arg1 + 0x540, arg2 + 0x540)

if (arg1 + 0x550 != arg2 + 0x550)
    int64_t r14_9 = sx.q(*(arg2 + 0x558))
    int64_t r15_4 = *(arg2 + 0x550)
    int32_t r8_30 = *(arg1 + 0x55c)
    *(arg1 + 0x558) = r14_9.d
    
    if (r14_9.d != 0 || r8_30 != 0)
        sub_1405c4a00(arg1 + 0x550, r14_9.d, r8_30)
        memcpy(*(arg1 + 0x550), r15_4, (r14_9 << 3).d)
    else
        *(arg1 + 0x55c) = 0

*(arg1 + 0x560) = *(arg2 + 0x560)
*(arg1 + 0x568) = *(arg2 + 0x568)
*(arg1 + 0x56a) = *(arg2 + 0x56a)
*(arg1 + 0x570) = *(arg2 + 0x570)
*(arg1 + 0x578) = *(arg2 + 0x578)
return arg1
