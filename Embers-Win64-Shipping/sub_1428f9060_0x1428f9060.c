// 函数: sub_1428f9060
// 地址: 0x1428f9060
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
char* r12 = arg7
int32_t rdi = arg3 - 8
char* rbp = arg1
int32_t* r10 = arg4
char* rbx = arg2
uint32_t r14_4 = zx.d(r12[1]) << 8 | zx.d(*r12) | zx.d(r12[2]) << 0x10 | zx.d(r12[3]) << 0x18
uint32_t r15_2 = zx.d(r12[4]) | zx.d(r12[5]) << 8 | (zx.d(r12[7]) << 8 | zx.d(r12[6])) << 0x10
uint32_t arg_8

if (arg8 == 0)
    int32_t* rdx_10 = arg6
    int32_t* r8_2 = arg5
    
    if (rdi s>= 0)
        uint64_t i_3 = zx.q(rdi + 8) u>> 3
        int32_t rdi_2 = rdi + (neg.d(i_3.d) << 3)
        uint64_t i
        
        do
            uint32_t rsi_5 =
                zx.d(*rbp) | zx.d(rbp[1]) << 8 | zx.d(rbp[2]) << 0x10 | zx.d(rbp[3]) << 0x18
            uint32_t rdi_4 = zx.d(rbp[4]) | zx.d(rbp[5]) << 8
            arg_8 = rsi_5
            uint32_t rdi_5 = rdi_4 | zx.d(rbp[6]) << 0x10
            uint32_t rax_73 = zx.d(rbp[7]) << 0x18
            rbp = &rbp[8]
            uint32_t rdi_6 = rdi_5 | rax_73
            sub_1428f8f00(&arg_8, arg4, r8_2, rdx_10)
            uint32_t rdx_13 = rdi_6 ^ r15_2
            r8_2 = arg5
            uint32_t rcx_17 = arg_8 ^ r14_4
            *rbx = rcx_17.b
            r14_4 = rsi_5
            rbx[1] = (rcx_17 u>> 8).b
            r15_2 = rdi_6
            rbx[2] = (rcx_17 u>> 0x10).b
            rbx[3] = (rcx_17 u>> 0x18).b
            rbx[4] = rdx_13.b
            rbx[5] = (rdx_13 u>> 8).b
            rbx[6] = (rdx_13 u>> 0x10).b
            rbx[7] = (rdx_13 u>> 0x18).b
            rbx = &rbx[8]
            rdx_10 = arg6
            i = i_3
            i_3 -= 1
        while (i != 1)
        r12 = arg7
        rdi = rdi_2
        r10 = arg4
    
    if (rdi != 0xfffffff8)
        uint32_t rcx_20 = zx.d(rbp[7]) << 8
        uint32_t rsi_9 =
            zx.d(*rbp) | zx.d(rbp[1]) << 8 | zx.d(rbp[2]) << 0x10 | zx.d(rbp[3]) << 0x18
        uint32_t r13_4 = zx.d(rbp[4]) | zx.d(rbp[5]) << 8
        arg_8 = rsi_9
        uint32_t r13_5 = r13_4 | (rcx_20 | zx.d(rbp[6])) << 0x10
        sub_1428f8f00(&arg_8, r10, r8_2, rdx_10)
        uint32_t r9_5 = arg_8 ^ r14_4
        uint32_t rdx_17 = r13_5 ^ r15_2
        char* rbx_1 = &rbx[sx.q(rdi + 8)]
        
        if (rdi + 7 u<= 7)
            switch (rdi)
                case 0
                    rbx_1 -= 1
                    *rbx_1 = (rdx_17 u>> 0x18).b
                label_1428f94a5:
                    rbx_1 -= 1
                    *rbx_1 = (rdx_17 u>> 0x10).b
                label_1428f94af:
                    rbx_1 -= 1
                    *rbx_1 = (rdx_17 u>> 8).b
                label_1428f94b9:
                    rbx_1 -= 1
                    *rbx_1 = rdx_17.b
                label_1428f94be:
                    rbx_1 -= 1
                    *rbx_1 = (r9_5 u>> 0x18).b
                label_1428f94c9:
                    rbx_1 -= 1
                    *rbx_1 = (r9_5 u>> 0x10).b
                    rbx_1 -= 1
                    *rbx_1 = (r9_5 u>> 8).b
                case 0xfffffffa
                    rbx_1 -= 1
                    *rbx_1 = (r9_5 u>> 8).b
                case 0xfffffffb
                    goto label_1428f94c9
                case 0xfffffffc
                    goto label_1428f94be
                case 0xfffffffd
                    goto label_1428f94b9
                case 0xfffffffe
                    goto label_1428f94af
                case 0xffffffff
                    goto label_1428f94a5
            
            rbx_1[-1] = r9_5.b
        
        r14_4 = rsi_9
        r15_2 = r13_5
else
    int32_t* r11_1 = arg5
    
    if (rdi s>= 0)
        uint64_t i_2 = zx.q(rdi + 8) u>> 3
        rdi += neg.d(i_2.d) << 3
        uint64_t i_1
        
        do
            uint32_t rcx_5 = zx.d(rbp[4]) | zx.d(rbp[5]) << 8
            arg_8 = (zx.d(*rbp) | zx.d(rbp[1]) << 8 | zx.d(rbp[2]) << 0x10 | zx.d(rbp[3]) << 0x18)
                ^ r14_4
            uint32_t rcx_6 = rcx_5 | zx.d(rbp[6]) << 0x10
            uint32_t rax_21 = zx.d(rbp[7]) << 0x18
            rbp = &rbp[8]
            sub_1428fba50(&arg_8, arg4, r11_1, arg6)
            r14_4 = arg_8
            r15_2 ^= rcx_6 | rax_21
            r11_1 = arg5
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
        r12 = arg7
        r10 = arg4
    
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
                label_1428f923c:
                    uint32_t rax_38 = zx.d(*(rbp_1 - 1))
                    rbp_1 -= 1
                    rcx_11 |= rax_38 << 0x10
                label_1428f9248:
                    uint32_t rax_40 = zx.d(*(rbp_1 - 1))
                    rbp_1 -= 1
                    rcx_11 |= rax_40 << 8
                label_1428f9254:
                    uint32_t rax_42 = zx.d(*(rbp_1 - 1))
                    rbp_1 -= 1
                    rcx_11 |= rax_42
                label_1428f925d:
                    uint32_t rdx_7 = zx.d(*(rbp_1 - 1))
                    rbp_1 -= 1
                    rdx_6 = rdx_7 << 0x18
                label_1428f9267:
                    uint32_t rax_43 = zx.d(*(rbp_1 - 1))
                    rbp_1 -= 1
                    rdx_6 |= rax_43 << 0x10
                label_1428f9273:
                    uint32_t rax_45 = zx.d(*(rbp_1 - 1))
                    rbp_1 -= 1
                    rdx_6 |= rax_45 << 8
                case 0xfffffffa
                    goto label_1428f9273
                case 0xfffffffb
                    goto label_1428f9267
                case 0xfffffffc
                    goto label_1428f925d
                case 0xfffffffd
                    goto label_1428f9254
                case 0xfffffffe
                    goto label_1428f9248
                case 0xffffffff
                    goto label_1428f923c
            
            rdx_6 |= zx.d(*(rbp_1 - 1))
        
        arg_8 = rdx_6 ^ r14_4
        sub_1428fba50(&arg_8, r10, r11_1, arg6)
        r14_4 = arg_8
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
