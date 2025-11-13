// 函数: sub_1428fbbb0
// 地址: 0x1428fbbb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
char* r12 = arg5
int32_t rdi = arg3 - 8
char* rbp = arg1
char* rbx = arg2
uint32_t r14_4 = zx.d(r12[1]) << 8 | zx.d(*r12) | zx.d(r12[2]) << 0x10 | zx.d(r12[3]) << 0x18
uint32_t r15_2 = zx.d(r12[4]) | zx.d(r12[5]) << 8 | (zx.d(r12[7]) << 8 | zx.d(r12[6])) << 0x10
uint32_t var_38

if (arg6 == 0)
    if (rdi s>= 0)
        uint64_t i_3 = zx.q(rdi + 8) u>> 3
        int32_t rdi_2 = rdi + (neg.d(i_3.d) << 3)
        uint64_t i
        
        do
            uint32_t rsi_5 =
                zx.d(*rbp) | zx.d(rbp[1]) << 8 | zx.d(rbp[2]) << 0x10 | zx.d(rbp[3]) << 0x18
            uint32_t rdi_4 = zx.d(rbp[4]) | zx.d(rbp[5]) << 8
            var_38 = rsi_5
            uint32_t rdi_5 = rdi_4 | zx.d(rbp[6]) << 0x10
            uint32_t rax_73 = zx.d(rbp[7]) << 0x18
            rbp = &rbp[8]
            uint32_t rdi_6 = rdi_5 | rax_73
            sub_1428f9590(&var_38, arg4, 0)
            uint32_t rcx_17 = var_38 ^ r14_4
            *rbx = rcx_17.b
            uint32_t rdx_12 = rdi_6 ^ r15_2
            r14_4 = rsi_5
            r15_2 = rdi_6
            rbx[1] = (rcx_17 u>> 8).b
            rbx[2] = (rcx_17 u>> 0x10).b
            rbx[3] = (rcx_17 u>> 0x18).b
            rbx[4] = rdx_12.b
            rbx[5] = (rdx_12 u>> 8).b
            rbx[6] = (rdx_12 u>> 0x10).b
            rbx[7] = (rdx_12 u>> 0x18).b
            rbx = &rbx[8]
            i = i_3
            i_3 -= 1
        while (i != 1)
        r12 = arg5
        rdi = rdi_2
    
    if (rdi != 0xfffffff8)
        uint32_t rcx_20 = zx.d(rbp[7]) << 8
        uint32_t rsi_9 =
            zx.d(*rbp) | zx.d(rbp[1]) << 8 | zx.d(rbp[2]) << 0x10 | zx.d(rbp[3]) << 0x18
        uint32_t r13_3 = zx.d(rbp[4]) | zx.d(rbp[5]) << 8
        var_38 = rsi_9
        uint32_t r13_4 = r13_3 | (rcx_20 | zx.d(rbp[6])) << 0x10
        sub_1428f9590(&var_38, arg4, 0)
        uint32_t r9_1 = var_38 ^ r14_4
        uint32_t rdx_16 = r13_4 ^ r15_2
        char* rbx_1 = &rbx[sx.q(rdi + 8)]
        
        if (rdi + 7 u<= 7)
            switch (rdi)
                case 0
                    rbx_1 -= 1
                    *rbx_1 = (rdx_16 u>> 0x18).b
                label_1428fbfb5:
                    rbx_1 -= 1
                    *rbx_1 = (rdx_16 u>> 0x10).b
                label_1428fbfbf:
                    rbx_1 -= 1
                    *rbx_1 = (rdx_16 u>> 8).b
                label_1428fbfc9:
                    rbx_1 -= 1
                    *rbx_1 = rdx_16.b
                label_1428fbfce:
                    rbx_1 -= 1
                    *rbx_1 = (r9_1 u>> 0x18).b
                label_1428fbfd9:
                    rbx_1 -= 1
                    *rbx_1 = (r9_1 u>> 0x10).b
                    rbx_1 -= 1
                    *rbx_1 = (r9_1 u>> 8).b
                case 0xfffffffa
                    rbx_1 -= 1
                    *rbx_1 = (r9_1 u>> 8).b
                case 0xfffffffb
                    goto label_1428fbfd9
                case 0xfffffffc
                    goto label_1428fbfce
                case 0xfffffffd
                    goto label_1428fbfc9
                case 0xfffffffe
                    goto label_1428fbfbf
                case 0xffffffff
                    goto label_1428fbfb5
            
            rbx_1[-1] = r9_1.b
        
        r14_4 = rsi_9
        r15_2 = r13_4
else
    if (rdi s>= 0)
        uint64_t i_2 = zx.q(rdi + 8) u>> 3
        rdi += neg.d(i_2.d) << 3
        uint64_t i_1
        
        do
            uint32_t rcx_5 = zx.d(rbp[4]) | zx.d(rbp[5]) << 8
            var_38 = (zx.d(*rbp) | zx.d(rbp[1]) << 8 | zx.d(rbp[2]) << 0x10 | zx.d(rbp[3]) << 0x18)
                ^ r14_4
            uint32_t rcx_6 = rcx_5 | zx.d(rbp[6]) << 0x10
            uint32_t rax_21 = zx.d(rbp[7]) << 0x18
            rbp = &rbp[8]
            sub_1428f9590(&var_38, arg4, 1)
            r14_4 = var_38
            r15_2 ^= rcx_6 | rax_21
            *rbx = r14_4.b
            rbx[1] = (r14_4 u>> 8).b
            rbx[2] = (r14_4 u>> 0x10).b
            rbx[3] = (r14_4 u>> 0x18).b
            rbx[4] = r15_2.b
            rbx[5] = (r15_2 u>> 8).b
            rbx[6] = (r15_2 u>> 0x10).b
            rbx[7] = (r15_2 u>> 0x18).b
            rbx = &rbx[8]
            i_1 = i_2
            i_2 -= 1
        while (i_1 != 1)
        r12 = arg5
    
    if (rdi != 0xfffffff8)
        void* rbp_1 = &rbp[sx.q(rdi + 8)]
        uint32_t rcx_11 = 0
        uint32_t rdx_6 = 0
        
        if (rdi + 7 u<= 7)
            switch (rdi)
                case 0
                    uint32_t rcx_12 = zx.d(*(rbp_1 - 1))
                    rbp_1 -= 1
                    rcx_11 = rcx_12 << 0x18
                label_1428fbd66:
                    uint32_t rax_38 = zx.d(*(rbp_1 - 1))
                    rbp_1 -= 1
                    rcx_11 |= rax_38 << 0x10
                label_1428fbd72:
                    uint32_t rax_40 = zx.d(*(rbp_1 - 1))
                    rbp_1 -= 1
                    rcx_11 |= rax_40 << 8
                label_1428fbd7e:
                    uint32_t rax_42 = zx.d(*(rbp_1 - 1))
                    rbp_1 -= 1
                    rcx_11 |= rax_42
                label_1428fbd87:
                    uint32_t rdx_7 = zx.d(*(rbp_1 - 1))
                    rbp_1 -= 1
                    rdx_6 = rdx_7 << 0x18
                label_1428fbd91:
                    uint32_t rax_43 = zx.d(*(rbp_1 - 1))
                    rbp_1 -= 1
                    rdx_6 |= rax_43 << 0x10
                label_1428fbd9d:
                    uint32_t rax_45 = zx.d(*(rbp_1 - 1))
                    rbp_1 -= 1
                    rdx_6 |= rax_45 << 8
                case 0xfffffffa
                    goto label_1428fbd9d
                case 0xfffffffb
                    goto label_1428fbd91
                case 0xfffffffc
                    goto label_1428fbd87
                case 0xfffffffd
                    goto label_1428fbd7e
                case 0xfffffffe
                    goto label_1428fbd72
                case 0xffffffff
                    goto label_1428fbd66
            
            rdx_6 |= zx.d(*(rbp_1 - 1))
        
        var_38 = rdx_6 ^ r14_4
        sub_1428f9590(&var_38, arg4, 1)
        r14_4 = var_38
        r15_2 ^= rcx_11
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
