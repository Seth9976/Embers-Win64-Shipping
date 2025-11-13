// 函数: sub_1429003d0
// 地址: 0x1429003d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
char* rbp = arg1
char* rbx = arg2
uint32_t r14_4 = zx.d(arg5[1]) << 8 | zx.d(*arg5) | zx.d(arg5[2]) << 0x10 | zx.d(arg5[3]) << 0x18
uint32_t r15_3 = zx.d(arg5[4]) | zx.d(arg5[5]) << 8 | zx.d(arg5[6]) << 0x10 | zx.d(arg5[7]) << 0x18
void* rbx_1
void* rsi_3
void* rdi_4
void* r11_1
void* r12_2
void* r13
uint32_t var_38

if (arg6 == 0)
    int32_t r13_1 = arg3 - 8
    void* r12_3 = arg5
    void* var_30_1 = r12_3
    
    if (r13_1 s>= 0)
        uint64_t i_3 = zx.q(r13_1 + 8) u>> 3
        int32_t r13_2 = r13_1 + (neg.d(i_3.d) << 3)
        uint64_t i
        
        do
            uint32_t rsi_7 =
                zx.d(*rbp) | zx.d(rbp[1]) << 8 | zx.d(rbp[2]) << 0x10 | zx.d(rbp[3]) << 0x18
            uint32_t rdi_6 = zx.d(rbp[4]) | zx.d(rbp[5]) << 8
            var_38 = rsi_7
            uint32_t rdi_7 = rdi_6 | zx.d(rbp[6]) << 0x10
            uint32_t rax_76 = zx.d(rbp[7]) << 0x18
            rbp = &rbp[8]
            uint32_t rdi_8 = rdi_7 | rax_76
            sub_1429008f0(&var_38, arg4)
            uint32_t rcx_14 = var_38 ^ r14_4
            *rbx = rcx_14.b
            uint32_t rdx_12 = rdi_8 ^ r15_3
            r14_4 = rsi_7
            r15_3 = rdi_8
            rbx[1] = (rcx_14 u>> 8).b
            rbx[2] = (rcx_14 u>> 0x10).b
            rbx[3] = (rcx_14 u>> 0x18).b
            rbx[4] = rdx_12.b
            rbx[5] = (rdx_12 u>> 8).b
            rbx[6] = (rdx_12 u>> 0x10).b
            rbx[7] = (rdx_12 u>> 0x18).b
            rbx = &rbx[8]
            i = i_3
            i_3 -= 1
        while (i != 1)
        r12_3 = var_30_1
        r13_1 = r13_2
    
    if (r13_1 != 0xfffffff8)
        uint32_t rcx_17 = zx.d(rbp[7]) << 8
        uint32_t rdi_12 =
            zx.d(*rbp) | zx.d(rbp[1]) << 8 | zx.d(rbp[2]) << 0x10 | zx.d(rbp[3]) << 0x18
        uint32_t rsi_9 = zx.d(rbp[4]) | zx.d(rbp[5]) << 8
        var_38 = rdi_12
        uint32_t rsi_10 = rsi_9 | (rcx_17 | zx.d(rbp[6])) << 0x10
        sub_1429008f0(&var_38, arg4)
        uint32_t rdx_16 = var_38 ^ r14_4
        uint32_t r9_1 = rsi_10 ^ r15_3
        char* rbx_2 = &rbx[sx.q(r13_1 + 8)]
        
        if (r13_1 + 7 u<= 7)
            switch (r13_1)
                case 0
                    rbx_2 -= 1
                    *rbx_2 = (r9_1 u>> 0x18).b
                label_1429007ee:
                    rbx_2 -= 1
                    *rbx_2 = (r9_1 u>> 0x10).b
                label_1429007f9:
                    rbx_2 -= 1
                    *rbx_2 = (r9_1 u>> 8).b
                label_142900804:
                    rbx_2 -= 1
                    *rbx_2 = r9_1.b
                label_14290080a:
                    rbx_2 -= 1
                    *rbx_2 = (rdx_16 u>> 0x18).b
                label_142900814:
                    rbx_2 -= 1
                    *rbx_2 = (rdx_16 u>> 0x10).b
                    rbx_2 -= 1
                    *rbx_2 = (rdx_16 u>> 8).b
                case 0xfffffffa
                    rbx_2 -= 1
                    *rbx_2 = (rdx_16 u>> 8).b
                case 0xfffffffb
                    goto label_142900814
                case 0xfffffffc
                    goto label_14290080a
                case 0xfffffffd
                    goto label_142900804
                case 0xfffffffe
                    goto label_1429007f9
                case 0xffffffff
                    goto label_1429007ee
            
            rbx_2[-1] = rdx_16.b
        
        r14_4 = rdi_12
        r15_3 = rsi_10
    
    r13 = var_30_1
    rbx_1 = r12_3 + 1
    r12_2 = r12_3 + 2
    rsi_3 = r12_2
    rdi_4 = r12_2 + 2
    r11_1 = rdi_4 + 2
else
    void* rdi_1 = arg5
    int32_t rsi_1 = arg3 - 8
    r13 = rdi_1
    
    if (rsi_1 s>= 0)
        uint64_t i_2 = zx.q(rsi_1 + 8) u>> 3
        rsi_1 += neg.d(i_2.d) << 3
        uint64_t i_1
        
        do
            uint32_t rcx_2 = zx.d(rbp[4]) | zx.d(rbp[5]) << 8
            var_38 = (zx.d(*rbp) | zx.d(rbp[1]) << 8 | zx.d(rbp[2]) << 0x10 | zx.d(rbp[3]) << 0x18)
                ^ r14_4
            uint32_t rcx_3 = rcx_2 | zx.d(rbp[6]) << 0x10
            uint32_t rax_24 = zx.d(rbp[7]) << 0x18
            rbp = &rbp[8]
            sub_142900a40(&var_38, arg4)
            r14_4 = var_38
            r15_3 ^= rcx_3 | rax_24
            *rbx = r14_4.b
            rbx[1] = (r14_4 u>> 8).b
            rbx[2] = (r14_4 u>> 0x10).b
            rbx[3] = (r14_4 u>> 0x18).b
            rbx[4] = r15_3.b
            rbx[5] = (r15_3 u>> 8).b
            rbx[6] = (r15_3 u>> 0x10).b
            rbx[7] = (r15_3 u>> 0x18).b
            rbx = &rbx[8]
            i_1 = i_2
            i_2 -= 1
        while (i_1 != 1)
        rdi_1 = r13
    
    if (rsi_1 != 0xfffffff8)
        void* rbp_1 = &rbp[sx.q(rsi_1 + 8)]
        uint32_t rcx_8 = 0
        uint32_t rdx_6 = 0
        
        if (rsi_1 + 7 u<= 7)
            switch (rsi_1)
                case 0
                    uint32_t rcx_9 = zx.d(*(rbp_1 - 1))
                    rbp_1 -= 1
                    rcx_8 = rcx_9 << 0x18
                label_142900589:
                    uint32_t rax_41 = zx.d(*(rbp_1 - 1))
                    rbp_1 -= 1
                    rcx_8 |= rax_41 << 0x10
                label_142900595:
                    uint32_t rax_43 = zx.d(*(rbp_1 - 1))
                    rbp_1 -= 1
                    rcx_8 |= rax_43 << 8
                label_1429005a1:
                    uint32_t rax_45 = zx.d(*(rbp_1 - 1))
                    rbp_1 -= 1
                    rcx_8 |= rax_45
                label_1429005aa:
                    uint32_t rdx_7 = zx.d(*(rbp_1 - 1))
                    rbp_1 -= 1
                    rdx_6 = rdx_7 << 0x18
                label_1429005b4:
                    uint32_t rax_46 = zx.d(*(rbp_1 - 1))
                    rbp_1 -= 1
                    rdx_6 |= rax_46 << 0x10
                label_1429005c0:
                    uint32_t rax_48 = zx.d(*(rbp_1 - 1))
                    rbp_1 -= 1
                    rdx_6 |= rax_48 << 8
                case 0xfffffffa
                    goto label_1429005c0
                case 0xfffffffb
                    goto label_1429005b4
                case 0xfffffffc
                    goto label_1429005aa
                case 0xfffffffd
                    goto label_1429005a1
                case 0xfffffffe
                    goto label_142900595
                case 0xffffffff
                    goto label_142900589
            
            rdx_6 |= zx.d(*(rbp_1 - 1))
        
        var_38 = rdx_6 ^ r14_4
        sub_142900a40(&var_38, arg4)
        r14_4 = var_38
        r15_3 ^= rcx_8
        *rbx = r14_4.b
        rbx[1] = (r14_4 u>> 8).b
        rbx[2] = (r14_4 u>> 0x10).b
        rbx[3] = (r14_4 u>> 0x18).b
        rbx[4] = r15_3.b
        rbx[5] = (r15_3 u>> 8).b
        rbx[6] = (r15_3 u>> 0x10).b
        rbx[7] = (r15_3 u>> 0x18).b
    
    rbx_1 = rdi_1 + 1
    rsi_3 = rdi_1 + 2
    r12_2 = rdi_1 + 2
    rdi_4 = rdi_1 + 4
    r11_1 = rdi_1 + 6
*r13 = r14_4.b
uint8_t result = (r15_3 u>> 0x18).b
*rbx_1 = (r14_4 u>> 8).b
*r12_2 = (r14_4 u>> 0x10).b
*(rsi_3 + 1) = (r14_4 u>> 0x18).b
*rdi_4 = r15_3.b
*(rdi_4 + 1) = (r15_3 u>> 8).b
*r11_1 = (r15_3 u>> 0x10).b
*(r11_1 + 1) = result
return result
