// 函数: sub_140847e30
// 地址: 0x140847e30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140597df0(arg1 + 8, arg2 + 8)
sub_140597df0(arg1 + 0x18, arg2 + 0x18)
*(arg1 + 0x28) = *(arg2 + 0x28)
sub_140597970(arg1 + 0x30, arg2 + 0x30)
void* rcx_3 = *(arg2 + 0x40)
void* rbx = *(arg1 + 0x40)
*(arg1 + 0x40) = rcx_3

if (rcx_3 != 0)
    sub_140883b30(rcx_3)

if (rbx != 0)
    sub_1408883d0(rbx)

*(arg1 + 0x48) = *(arg2 + 0x48)

if (arg1 + 0x50 != arg2 + 0x50)
    int32_t i_2 = *(arg1 + 0x58)
    void* rbx_1 = *(arg1 + 0x50)
    
    if (i_2 != 0)
        int32_t i
        
        do
            sub_1408462b0(rbx_1 + 0x20)
            int64_t rcx_6 = *(rbx_1 + 0x10)
            
            if (rcx_6 != 0)
                sub_140a74f90(rcx_6)
            
            int64_t rcx_7 = *rbx_1
            
            if (rcx_7 != 0)
                sub_140a74f90(rcx_7)
            
            rbx_1 += 0x30
            i = i_2
            i_2 -= 1
        while (i != 1)
    
    sub_1408415e0(arg1 + 0x50, *(arg2 + 0x50), *(arg2 + 0x58), *(arg1 + 0x5c), 0)

*(arg1 + 0x60) = *(arg2 + 0x60)
sub_140597970(arg1 + 0x70, arg2 + 0x70)
*(arg1 + 0x80) = *(arg2 + 0x80)
sub_14081d8c0(arg1 + 0x88, arg2 + 0x88)
*(arg1 + 0x98) = *(arg2 + 0x98)

if (arg1 + 0xa8 != arg2 + 0xa8)
    int32_t i_3 = *(arg1 + 0xb0)
    int64_t* rbx_2 = *(arg1 + 0xa8)
    
    if (i_3 != 0)
        int32_t i_1
        
        do
            int64_t rcx_11 = *rbx_2
            
            if (rcx_11 != 0)
                sub_140a74f90(rcx_11)
            
            rbx_2 = &rbx_2[2]
            i_1 = i_3
            i_3 -= 1
        while (i_1 != 1)
    
    sub_140841520(arg1 + 0xa8, *(arg2 + 0xa8), *(arg2 + 0xb0), *(arg1 + 0xb4), 0)

void* rbp_1 = arg2 + 0xb8
void* rbx_3 = arg1 + 0xb8

if (rbx_3 != rbp_1)
    int64_t r14_2 = sx.q(*(rbp_1 + 0x10))
    void* r15_2 = *(rbp_1 + 8)
    int32_t r8_3 = *(rbx_3 + 0x14)
    *(rbx_3 + 0x10) = r14_2.d
    
    if (r14_2.d != 0 || r8_3 != 0)
        sub_1405e3d70(rbx_3, r14_2.d, r8_3)
        void* rax_3 = *(rbx_3 + 8)
        
        if (r15_2 != 0)
            rbp_1 = r15_2
        
        if (rax_3 != 0)
            rbx_3 = rax_3
        
        memcpy(rbx_3, rbp_1, (r14_2 << 2).d)
    else
        *(rbx_3 + 0x14) = 1

*(arg1 + 0xd0) = *(arg2 + 0xd0)
*(arg1 + 0xd4) = *(arg2 + 0xd4)
*(arg1 + 0xd8) ^= (*(arg1 + 0xd8) ^ *(arg2 + 0xd8)) & 1
int32_t rax_9 = *(arg1 + 0xd8)
*(arg1 + 0xd8) = ((rax_9 ^ *(arg2 + 0xd8)) & 2) ^ rax_9
sub_140847d00(arg1 + 0xe0, arg2 + 0xe0)

if (arg1 + 0x150 != arg2 + 0x150)
    int64_t rbp_2 = sx.q(*(arg2 + 0x158))
    int64_t r14_3 = *(arg2 + 0x150)
    int32_t r8_6 = *(arg1 + 0x15c)
    *(arg1 + 0x158) = rbp_2.d
    
    if (rbp_2.d != 0 || r8_6 != 0)
        sub_1405a4be0(arg1 + 0x150, rbp_2.d, r8_6)
        memcpy(*(arg1 + 0x150), r14_3, (rbp_2 << 4).d)
    else
        *(arg1 + 0x15c) = rbp_2.d

sub_140597df0(arg1 + 0x160, arg2 + 0x160)
return arg1
