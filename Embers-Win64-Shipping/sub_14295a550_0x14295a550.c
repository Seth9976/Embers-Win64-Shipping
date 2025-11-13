// 函数: sub_14295a550
// 地址: 0x14295a550
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
char* rbp = arg1
int32_t* r10 = arg4
uint8_t* rbx = arg2
uint32_t r15_4 = (zx.d(arg5[1]) | zx.d(*arg5) << 8) << 0x10 | zx.d(arg5[2]) << 8 | zx.d(arg5[3])
uint32_t r14_4 = zx.d(arg5[4]) << 0x18 | zx.d(arg5[5]) << 0x10 | zx.d(arg5[6]) << 8 | zx.d(arg5[7])
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
            uint32_t rsi_8 =
                zx.d(*rbp) << 0x18 | zx.d(rbp[1]) << 0x10 | zx.d(rbp[2]) << 8 | zx.d(rbp[3])
            uint32_t rdi_7 = zx.d(rbp[4]) << 0x18 | zx.d(rbp[5]) << 0x10
            var_38 = rsi_8
            uint32_t rdi_9 = rdi_7 | zx.d(rbp[6]) << 8 | zx.d(rbp[7])
            rbp = &rbp[8]
            sub_14295aa70(&var_38, arg4)
            uint32_t rcx_15 = var_38 ^ r15_4
            uint32_t rdx_12 = rdi_9 ^ r14_4
            r15_4 = rsi_8
            *rbx = (rcx_15 u>> 0x18).b
            r14_4 = rdi_9
            rbx[1] = (rcx_15 u>> 0x10).b
            rbx[2] = (rcx_15 u>> 8).b
            rbx[3] = rcx_15.b
            rbx[4] = (rdx_12 u>> 0x18).b
            rbx[5] = (rdx_12 u>> 0x10).b
            rbx[6] = (rdx_12 u>> 8).b
            rbx[7] = rdx_12.b
            rbx = &rbx[8]
            i = i_3
            i_3 -= 1
        while (i != 1)
        r12_3 = var_30_1
        r13_1 = r13_2
        r10 = arg4
    
    if (r13_1 != 0xfffffff8)
        uint32_t rcx_17 = zx.d(rbp[6]) << 8
        uint32_t rdi_14 =
            zx.d(*rbp) << 0x18 | zx.d(rbp[1]) << 0x10 | zx.d(rbp[2]) << 8 | zx.d(rbp[3])
        uint32_t rsi_11 = zx.d(rbp[4]) << 0x18 | zx.d(rbp[5]) << 0x10
        var_38 = rdi_14
        uint32_t rsi_12 = rsi_11 | rcx_17 | zx.d(rbp[7])
        sub_14295aa70(&var_38, r10)
        uint32_t rdx_15 = var_38 ^ r15_4
        uint32_t r8_1 = rsi_12 ^ r14_4
        void* rbx_2 = &rbx[sx.q(r13_1 + 8)]
        
        if (r13_1 + 7 u<= 7)
            switch (r13_1)
                case 0
                    rbx_2 -= 1
                    *rbx_2 = r8_1.b
                label_14295a96d:
                    rbx_2 -= 1
                    *rbx_2 = (r8_1 u>> 8).b
                label_14295a978:
                    rbx_2 -= 1
                    *rbx_2 = (r8_1 u>> 0x10).b
                label_14295a983:
                    rbx_2 -= 1
                    *rbx_2 = (r8_1 u>> 0x18).b
                label_14295a98d:
                    rbx_2 -= 1
                    *rbx_2 = rdx_15.b
                label_14295a992:
                    rbx_2 -= 1
                    *rbx_2 = (rdx_15 u>> 8).b
                    rbx_2 -= 1
                    *rbx_2 = (rdx_15 u>> 0x10).b
                case 0xfffffffa
                    rbx_2 -= 1
                    *rbx_2 = (rdx_15 u>> 0x10).b
                case 0xfffffffb
                    goto label_14295a992
                case 0xfffffffc
                    goto label_14295a98d
                case 0xfffffffd
                    goto label_14295a983
                case 0xfffffffe
                    goto label_14295a978
                case 0xffffffff
                    goto label_14295a96d
            
            *(rbx_2 - 1) = (rdx_15 u>> 0x18).b
        
        r15_4 = rdi_14
        r14_4 = rsi_12
    
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
            uint32_t rcx_4 = zx.d(rbp[4]) << 0x18 | zx.d(rbp[5]) << 0x10
            var_38 = (zx.d(*rbp) << 0x18 | zx.d(rbp[1]) << 0x10 | zx.d(rbp[2]) << 8 | zx.d(rbp[3]))
                ^ r15_4
            uint32_t rcx_6 = rcx_4 | zx.d(rbp[6]) << 8 | zx.d(rbp[7])
            rbp = &rbp[8]
            sub_14295af50(&var_38, arg4)
            r15_4 = var_38
            r14_4 ^= rcx_6
            *rbx = (r15_4 u>> 0x18).b
            rbx[1] = (r15_4 u>> 0x10).b
            rbx[2] = (r15_4 u>> 8).b
            rbx[3] = r15_4.b
            rbx[4] = (r14_4 u>> 0x18).b
            rbx[5] = (r14_4 u>> 0x10).b
            rbx[6] = (r14_4 u>> 8).b
            rbx[7] = r14_4.b
            rbx = &rbx[8]
            i_1 = i_2
            i_2 -= 1
        while (i_1 != 1)
        r10 = arg4
        rdi_1 = r13
    
    if (rsi_1 != 0xfffffff8)
        void* rbp_1 = &rbp[sx.q(rsi_1 + 8)]
        uint32_t rcx_10 = 0
        uint32_t rdx_7 = 0
        
        if (rsi_1 + 7 u<= 7)
            switch (rsi_1)
                case 0
                    rcx_10 = zx.d(*(rbp_1 - 1))
                    rbp_1 -= 1
                label_14295a706:
                    uint32_t rax_37 = zx.d(*(rbp_1 - 1))
                    rbp_1 -= 1
                    rcx_10 |= rax_37 << 8
                label_14295a712:
                    uint32_t rax_39 = zx.d(*(rbp_1 - 1))
                    rbp_1 -= 1
                    rcx_10 |= rax_39 << 0x10
                label_14295a71e:
                    uint32_t rax_41 = zx.d(*(rbp_1 - 1))
                    rbp_1 -= 1
                    rcx_10 |= rax_41 << 0x18
                label_14295a72a:
                    rdx_7 = zx.d(*(rbp_1 - 1))
                    rbp_1 -= 1
                label_14295a731:
                    uint32_t rax_43 = zx.d(*(rbp_1 - 1))
                    rbp_1 -= 1
                    rdx_7 |= rax_43 << 8
                label_14295a73d:
                    uint32_t rax_45 = zx.d(*(rbp_1 - 1))
                    rbp_1 -= 1
                    rdx_7 |= rax_45 << 0x10
                case 0xfffffffa
                    goto label_14295a73d
                case 0xfffffffb
                    goto label_14295a731
                case 0xfffffffc
                    goto label_14295a72a
                case 0xfffffffd
                    goto label_14295a71e
                case 0xfffffffe
                    goto label_14295a712
                case 0xffffffff
                    goto label_14295a706
            
            rdx_7 |= zx.d(*(rbp_1 - 1)) << 0x18
        
        var_38 = rdx_7 ^ r15_4
        sub_14295af50(&var_38, r10)
        r15_4 = var_38
        r14_4 ^= rcx_10
        *rbx = (r15_4 u>> 0x18).b
        rbx[1] = (r15_4 u>> 0x10).b
        rbx[2] = (r15_4 u>> 8).b
        rbx[3] = r15_4.b
        rbx[4] = (r14_4 u>> 0x18).b
        rbx[5] = (r14_4 u>> 0x10).b
        rbx[6] = (r14_4 u>> 8).b
        rbx[7] = r14_4.b
    
    rbx_1 = rdi_1 + 1
    rsi_3 = rdi_1 + 2
    r12_2 = rdi_1 + 2
    rdi_4 = rdi_1 + 4
    r11_1 = rdi_1 + 6
uint8_t result = (r14_4 u>> 8).b
*r13 = (r15_4 u>> 0x18).b
*rbx_1 = (r15_4 u>> 0x10).b
*r12_2 = (r15_4 u>> 8).b
*(rsi_3 + 1) = r15_4.b
*rdi_4 = (r14_4 u>> 0x18).b
*(rdi_4 + 1) = (r14_4 u>> 0x10).b
*r11_1 = result
*(r11_1 + 1) = r14_4.b
return result
