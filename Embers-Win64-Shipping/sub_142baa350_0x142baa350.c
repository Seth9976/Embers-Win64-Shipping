// 函数: sub_142baa350
// 地址: 0x142baa350
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t r10 = arg2[6]
int16_t rbp = *arg2
int16_t r8 = arg2[2]
int16_t r9 = arg2[4]
int16_t rax = *(arg1 + 0x44)
int16_t rcx = arg2[8]

if (r10 u< rax && rcx u< rax)
    rax = *(arg1 + 0x84)
    
    if (r8 u< rax && r9 u< rax && rbp u< *(arg1 + 0xc4))
        int64_t rcx_1 = *(arg1 + 0x50)
        uint64_t rdi = zx.q(rcx) << 3
        uint64_t r15 = zx.q(r10) << 3
        int32_t r10_1 = *(r15 + rcx_1)
        int32_t rax_4 = *(rdi + rcx_1) - r10_1
        int32_t r11 = *(r15 + rcx_1 + 4)
        int32_t rbx_1 = *(rdi + rcx_1 + 4) - r11
        int64_t rcx_2 = *(arg1 + 0x90)
        uint64_t r12 = zx.q(r9) << 3
        uint64_t r14 = zx.q(r8) << 3
        int32_t rdx = *(r14 + rcx_2)
        int32_t r9_2 = *(r12 + rcx_2) - rdx
        int32_t rax_7 = *(r14 + rcx_2 + 4)
        int32_t rcx_4 = *(r12 + rcx_2 + 4) - rax_7
        int32_t rax_9 = neg.d(rbx_1)
        uint32_t r13_1 = sub_142b93dd0(r9_2, rax_9, 0x40) + sub_142b93dd0(rcx_4, rax_4, 0x40)
        uint32_t rax_12 = sub_142b93dd0(rcx_4, rbx_1, 0x40)
        int32_t temp0
        int32_t temp1
        temp0:temp1 = sx.q(sub_142b93dd0(r9_2, rax_4, 0x40) + rax_12)
        int32_t temp2
        int32_t temp3
        temp2:temp3 = sx.q(r13_1)
        uint64_t r9_4
        
        if (((temp3 ^ temp2) - temp2) * 0x13 s<= (temp1 ^ temp0) - temp0)
            int64_t rdx_11 = *(arg1 + 0x50)
            int64_t rcx_18 = *(arg1 + 0x90)
            r9_4 = zx.q(rbp)
            int32_t temp4_1
            int32_t temp5_1
            temp4_1:temp5_1 =
                sx.q(*(r14 + rcx_18) + *(r12 + rcx_18) + *(r15 + rdx_11) + *(rdi + rdx_11))
            *(*(arg1 + 0xd0) + (r9_4 << 3)) = (temp5_1 + (temp4_1 & 3)) s>> 2
            int64_t rcx_20 = *(arg1 + 0x90)
            int64_t rdx_14 = *(arg1 + 0x50)
            int32_t temp6_1
            int32_t temp7_1
            temp6_1:temp7_1 = sx.q(*(r14 + rcx_20 + 4) + *(r12 + rcx_20 + 4) + *(r15 + rdx_14 + 4)
                + *(rdi + rdx_14 + 4))
            *(*(arg1 + 0xd0) + (r9_4 << 3) + 4) = (temp7_1 + (temp6_1 & 3)) s>> 2
        else
            uint32_t rdi_2 =
                sub_142b93dd0(r10_1 - rdx, rax_9, 0x40) + sub_142b93dd0(r11 - rax_7, rax_4, 0x40)
            uint32_t rax_22 = sub_142b93dd0(rdi_2, r9_2, r13_1)
            uint32_t rax_23 = sub_142b93dd0(rdi_2, rcx_4, r13_1)
            r9_4 = zx.q(rbp)
            *(*(arg1 + 0xd0) + (r9_4 << 3)) = *(r14 + *(arg1 + 0x90)) + rax_22
            *(*(arg1 + 0xd0) + (r9_4 << 3) + 4) = *(r14 + *(arg1 + 0x90) + 4) + rax_23
        
        int64_t rax_39 = *(arg1 + 0xe0)
        *(rax_39 + r9_4) |= 0x18
        return rax_39

if (*(arg1 + 0x315) != 0)
    *(arg1 + 0x18) = 0x86

return rax
