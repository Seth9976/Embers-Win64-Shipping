// 函数: sub_142957010
// 地址: 0x142957010
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x40)
char* r12 = arg5
char* rbp = arg1
char* rbx = arg2
int32_t* r11 = arg4
uint32_t rsi_3 = zx.d(*arg6) | zx.d(arg6[1]) << 8 | zx.d(arg6[2]) << 0x10 | zx.d(arg6[3]) << 0x18
uint32_t r10_2 = zx.d(arg6[4]) | zx.d(arg6[5]) << 8 | (zx.d(arg6[7]) << 8 | zx.d(arg6[6])) << 0x10
uint32_t var_58 = r10_2
uint32_t r8_3 = zx.d(*arg7) | zx.d(arg7[1]) << 8 | zx.d(arg7[2]) << 0x10 | zx.d(arg7[3]) << 0x18
arg6.d = r8_3
uint32_t r9_2 = zx.d(arg7[4]) | zx.d(arg7[5]) << 8 | (zx.d(arg7[7]) << 8 | zx.d(arg7[6])) << 0x10
uint32_t r14_4 = zx.d(r12[1]) << 8 | zx.d(*r12) | zx.d(r12[2]) << 0x10 | zx.d(r12[3]) << 0x18
arg7.d = r9_2
uint32_t r15_2 = zx.d(r12[4]) | zx.d(r12[5]) << 8 | (zx.d(r12[7]) << 8 | zx.d(r12[6])) << 0x10
uint32_t var_50

if (arg8 == 0)
    uint32_t r13_2 = arg3 - 8
    
    if (r13_2 s> 0)
        uint64_t i_2 = zx.q(((r13_2 - 1) u>> 3) + 1)
        uint64_t i
        
        do
            uint32_t rdi_5 = zx.d(rbp[4])
            uint32_t rsi_8 =
                zx.d(*rbp) | zx.d(rbp[1]) << 8 | zx.d(rbp[2]) << 0x10 | zx.d(rbp[3]) << 0x18
            var_50 = rsi_8 ^ r8_3
            uint32_t rdi_7 = rdi_5 | zx.d(rbp[5]) << 8 | zx.d(rbp[6]) << 0x10
            uint32_t rax_97 = zx.d(rbp[7]) << 0x18
            rbp = &rbp[8]
            uint32_t rdi_8 = rdi_7 | rax_97
            uint32_t rax_99 = rdi_8 ^ r9_2
            sub_1428f9590(&var_50, r11, 0)
            r9_2 = arg7.d
            uint32_t rcx_29 = var_50 ^ r14_4 ^ rsi_3
            r11 = arg4
            uint32_t rdx_17 = rax_99 ^ r15_2 ^ var_58
            *rbx = rcx_29.b
            r14_4 = rsi_8
            r15_2 = rdi_8
            rbx[1] = (rcx_29 u>> 8).b
            rbx[2] = (rcx_29 u>> 0x10).b
            rbx[3] = (rcx_29 u>> 0x18).b
            rbx[4] = rdx_17.b
            rbx[5] = (rdx_17 u>> 8).b
            rbx[6] = (rdx_17 u>> 0x10).b
            rbx[7] = (rdx_17 u>> 0x18).b
            rbx = &rbx[8]
            i = i_2
            i_2 -= 1
        while (i != 1)
        r12 = arg5
        r13_2 += neg.d(((r13_2 - 1) u>> 3) + 1) << 3
        r8_3 = arg6.d
    
    if (r13_2 != 0xfffffff8)
        uint32_t rdx_19 = zx.d(rbp[4])
        uint32_t rcx_32 = zx.d(rbp[7]) << 8
        uint32_t rdi_12 =
            zx.d(*rbp) | zx.d(rbp[1]) << 8 | zx.d(rbp[2]) << 0x10 | zx.d(rbp[3]) << 0x18
        var_50 = rdi_12 ^ r8_3
        uint32_t rdx_21 = rdx_19 | zx.d(rbp[5]) << 8 | (rcx_32 | zx.d(rbp[6])) << 0x10
        sub_1428f9590(&var_50, r11, 0)
        uint32_t rdx_25 = rdx_21 ^ r9_2 ^ r15_2 ^ var_58
        uint32_t r8_6 = var_50 ^ r14_4 ^ rsi_3
        char* rbx_1 = &rbx[sx.q(r13_2 + 8)]
        
        if (r13_2 + 7 u<= 7)
            switch (r13_2)
                case 0
                    rbx_1 -= 1
                    *rbx_1 = (rdx_25 u>> 0x18).b
                label_14295755b:
                    rbx_1 -= 1
                    *rbx_1 = (rdx_25 u>> 0x10).b
                label_142957565:
                    rbx_1 -= 1
                    *rbx_1 = (rdx_25 u>> 8).b
                label_14295756f:
                    rbx_1 -= 1
                    *rbx_1 = rdx_25.b
                label_142957574:
                    rbx_1 -= 1
                    *rbx_1 = (r8_6 u>> 0x18).b
                label_14295757f:
                    rbx_1 -= 1
                    *rbx_1 = (r8_6 u>> 0x10).b
                    rbx_1 -= 1
                    *rbx_1 = (r8_6 u>> 8).b
                case 0xfffffffa
                    rbx_1 -= 1
                    *rbx_1 = (r8_6 u>> 8).b
                case 0xfffffffb
                    goto label_14295757f
                case 0xfffffffc
                    goto label_142957574
                case 0xfffffffd
                    goto label_14295756f
                case 0xfffffffe
                    goto label_142957565
                case 0xffffffff
                    goto label_14295755b
            
            rbx_1[-1] = r8_6.b
        
        r15_2 = rdx_21
        r14_4 = rdi_12
else
    uint32_t rdi_1 = arg3 - 8
    
    if (rdi_1 s>= 0)
        uint64_t i_3 = zx.q(rdi_1 + 8) u>> 3
        uint32_t rdi_2 = rdi_1 + (neg.d(i_3.d) << 3)
        uint64_t i_1
        
        do
            uint32_t rcx_14 = zx.d(rbp[4]) | zx.d(rbp[5]) << 8 | zx.d(rbp[6]) << 0x10
            var_50 = (zx.d(*rbp) | zx.d(rbp[1]) << 8 | zx.d(rbp[2]) << 0x10 | zx.d(rbp[3]) << 0x18)
                ^ r14_4 ^ rsi_3
            uint32_t rax_41 = zx.d(rbp[7]) << 0x18
            rbp = &rbp[8]
            uint32_t rcx_17 = (rcx_14 | rax_41) ^ r15_2 ^ r10_2
            sub_1428f9590(&var_50, r11, 1)
            r14_4 = var_50 ^ r8_3
            r10_2 = var_58
            r15_2 = rcx_17 ^ r9_2
            r11 = arg4
            *rbx = r14_4.b
            rbx[1] = (r14_4 u>> 8).b
            rbx[2] = (r14_4 u>> 0x10).b
            rbx[3] = (r14_4 u>> 0x18).b
            rbx[4] = r15_2.b
            rbx[5] = (r15_2 u>> 8).b
            rbx[6] = (r15_2 u>> 0x10).b
            rbx[7] = (r15_2 u>> 0x18).b
            rbx = &rbx[8]
            i_1 = i_3
            i_3 -= 1
        while (i_1 != 1)
        r12 = arg5
        rdi_1 = rdi_2
    
    if (rdi_1 != 0xfffffff8)
        void* rbp_1 = &rbp[sx.q(rdi_1 + 8)]
        uint32_t rcx_20 = 0
        uint32_t rdx_9 = 0
        
        if (rdi_1 + 7 u<= 7)
            switch (rdi_1)
                case 0
                    uint32_t rcx_21 = zx.d(*(rbp_1 - 1))
                    rbp_1 -= 1
                    rcx_20 = rcx_21 << 0x18
                label_1429572b6:
                    uint32_t rax_58 = zx.d(*(rbp_1 - 1))
                    rbp_1 -= 1
                    rcx_20 |= rax_58 << 0x10
                label_1429572c2:
                    uint32_t rax_60 = zx.d(*(rbp_1 - 1))
                    rbp_1 -= 1
                    rcx_20 |= rax_60 << 8
                label_1429572ce:
                    uint32_t rax_62 = zx.d(*(rbp_1 - 1))
                    rbp_1 -= 1
                    rcx_20 |= rax_62
                label_1429572d7:
                    uint32_t rdx_10 = zx.d(*(rbp_1 - 1))
                    rbp_1 -= 1
                    rdx_9 = rdx_10 << 0x18
                label_1429572e1:
                    uint32_t rax_63 = zx.d(*(rbp_1 - 1))
                    rbp_1 -= 1
                    rdx_9 |= rax_63 << 0x10
                label_1429572ed:
                    uint32_t rax_65 = zx.d(*(rbp_1 - 1))
                    rbp_1 -= 1
                    rdx_9 |= rax_65 << 8
                case 0xfffffffa
                    goto label_1429572ed
                case 0xfffffffb
                    goto label_1429572e1
                case 0xfffffffc
                    goto label_1429572d7
                case 0xfffffffd
                    goto label_1429572ce
                case 0xfffffffe
                    goto label_1429572c2
                case 0xffffffff
                    goto label_1429572b6
            
            rdx_9 |= zx.d(*(rbp_1 - 1))
        
        var_50 = rdx_9 ^ r14_4 ^ rsi_3
        sub_1428f9590(&var_50, r11, 1)
        r14_4 = var_50 ^ arg6.d
        r15_2 = rcx_20 ^ r15_2 ^ r10_2 ^ r9_2
        *rbx = r14_4.b
        rbx[1] = (r14_4 u>> 8).b
        rbx[2] = (r14_4 u>> 0x10).b
        rbx[3] = (r14_4 u>> 0x18).b
        rbx[4] = r15_2.b
        rbx[5] = (r15_2 u>> 8).b
        rbx[6] = (r15_2 u>> 0x10).b
        rbx[7] = (r15_2 u>> 0x18).b
*r12 = r14_4.b
uint8_t result = (r15_2 u>> 0x18).b
r12[1] = (r14_4 u>> 8).b
r12[2] = (r14_4 u>> 0x10).b
r12[3] = (r14_4 u>> 0x18).b
r12[4] = r15_2.b
r12[5] = (r15_2 u>> 8).b
r12[6] = (r15_2 u>> 0x10).b
r12[7] = result
return result
