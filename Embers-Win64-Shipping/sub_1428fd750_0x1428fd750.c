// 函数: sub_1428fd750
// 地址: 0x1428fd750
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0xa0)
void var_c8
int64_t rax_1 = __security_cookie ^ &var_c8
int32_t* r10 = arg5
int32_t r15 = arg4
int32_t* r11 = arg6
uint32_t r12_1 = (arg3 + 7) u>> 3
void* rsi = arg2
void* r14 = arg1
char* result = arg8
char* result_1 = result
int32_t* var_78 = r10
int32_t* var_70 = r11
uint32_t var_84 = r12_1

if (arg3 s<= 0x40)
    void* r8 = &result[1]
    uint32_t rdi_4 =
        zx.d(*result) | zx.d(*r8) << 8 | zx.d(*(r8 + 1)) << 0x10 | zx.d(*(r8 + 2)) << 0x18
    uint32_t rbx_3 =
        zx.d(*(r8 + 3)) | zx.d(*(r8 + 4)) << 8 | (zx.d(result[7]) << 8 | zx.d(*(r8 + 5))) << 0x10
    
    if (r15 u>= r12_1)
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(arg3)
        int32_t rdx_1 = temp0_1 & 7
        int32_t rax_14 = temp1_1 + rdx_1
        int32_t rax_16 = (rax_14 & 7) - rdx_1
        int32_t rcx_5 = rax_14 s>> 3
        uint32_t var_98
        char var_50
        
        if (arg9 == 0)
            int32_t rdx_9 = r12_1 - 1
            uint64_t rcx_31 = zx.q(r12_1)
            
            do
                var_98 = rdi_4
                uint32_t var_94_2 = rbx_3
                sub_1428fba50(&var_98, r10, r11, arg7)
                uint64_t r8_11 = zx.q(rdx_9)
                uint32_t r15_2 = 0
                uint64_t rdx_11 = zx.q(r12_1)
                uint32_t r12_2 = 0
                void* r14_2 = r14 + rdx_11
                
                if (r8_11.d u<= 7)
                    switch (r8_11)
                        case 1
                            goto label_1428fdc00
                        case 2
                            goto label_1428fdbf2
                        case 3
                            goto label_1428fdbe6
                        case 4
                            goto label_1428fdbdb
                        case 5
                            goto label_1428fdbcd
                        case 6
                            goto label_1428fdbbf
                        case 7
                            uint32_t r12_3 = zx.d(*(r14_2 - 1))
                            r14_2 -= 1
                            r12_2 = r12_3 << 0x18
                        label_1428fdbbf:
                            uint32_t rax_72 = zx.d(*(r14_2 - 1))
                            r14_2 -= 1
                            r12_2 |= rax_72 << 0x10
                        label_1428fdbcd:
                            uint32_t rax_74 = zx.d(*(r14_2 - 1))
                            r14_2 -= 1
                            r12_2 |= rax_74 << 8
                        label_1428fdbdb:
                            uint32_t rax_76 = zx.d(*(r14_2 - 1))
                            r14_2 -= 1
                            r12_2 |= rax_76
                        label_1428fdbe6:
                            uint32_t r15_3 = zx.d(*(r14_2 - 1))
                            r14_2 -= 1
                            r15_2 = r15_3 << 0x18
                        label_1428fdbf2:
                            uint32_t rax_77 = zx.d(*(r14_2 - 1))
                            r14_2 -= 1
                            r15_2 |= rax_77 << 0x10
                        label_1428fdc00:
                            uint32_t rax_79 = zx.d(*(r14_2 - 1))
                            r14_2 -= 1
                            r15_2 |= rax_79 << 8
                    
                    uint32_t rax_81 = zx.d(*(r14_2 - 1))
                    r14_2 -= 1
                    r15_2 |= rax_81
                
                r14 = r14_2 + rdx_11
                
                if (arg3 == 0x20)
                    rdi_4 = rbx_3
                    rbx_3 = r15_2
                else if (arg3 != 0x40)
                    var_50 = rdi_4.b
                    char var_4c_2 = rbx_3.b
                    uint8_t rax_86 = (rdi_4 u>> 0x10).b
                    uint8_t rax_88 = (rbx_3 u>> 8).b
                    uint8_t rax_90 = (rbx_3 u>> 0x10).b
                    uint8_t var_47_2 = (r15_2 u>> 8).b
                    uint8_t var_46_2 = (r15_2 u>> 0x10).b
                    uint8_t var_45_2 = (r15_2 u>> 0x18).b
                    uint8_t var_43_2 = (r12_2 u>> 8).b
                    uint8_t var_42_2 = (r12_2 u>> 0x10).b
                    uint8_t rbx_14 = (rbx_3 u>> 0x18).b
                    uint8_t var_41_2 = (r12_2 u>> 0x18).b
                    int32_t r8_12
                    r8_12.b = rax_16 != 0
                    uint8_t var_48_2 = r15_2.b
                    char var_44_2 = r12_2.b
                    memmove(&var_50, &(&var_50)[sx.q(rcx_5)], r8_12 + 8)
                    uint8_t rdx_13 = (rdi_4 u>> 8).b
                    uint8_t r9_5 = (rdi_4 u>> 0x18).b
                    char r10_3 = var_4c_2
                    char var_a8_2
                    uint8_t rcx_52
                    uint8_t rbx_17
                    uint8_t r8_15
                    uint8_t r11_2
                    
                    if (rax_16 == 0)
                        rbx_17 = rbx_14
                        rcx_52 = rax_90
                        r11_2 = rax_88
                        r8_15 = rax_86
                        var_a8_2 = var_50
                    else
                        var_a8_2 = var_50 << rax_16.b | rdx_13 u>> (8 - rax_16.b)
                        rdx_13 = rdx_13 << rax_16.b | rax_86 u>> (8 - rax_16.b)
                        r8_15 = rax_86 << rax_16.b | r9_5 u>> (8 - rax_16.b)
                        r9_5 = r9_5 << rax_16.b | r10_3 u>> (8 - rax_16.b)
                        r10_3 = r10_3 << rax_16.b | rax_88 u>> (8 - rax_16.b)
                        r11_2 = rax_88 << rax_16.b | rax_90 u>> (8 - rax_16.b)
                        uint8_t rbx_16 = rax_90 << rax_16.b | rbx_14 u>> (8 - rax_16.b)
                        rcx_52 = rbx_16
                        uint8_t rdi_16 = rbx_14 << rax_16.b | var_48_2 u>> (8 - rax_16.b)
                        uint8_t var_a6_2 = rbx_16
                        uint8_t var_a7_2 = rdi_16
                        rbx_17 = rdi_16
                    
                    r8_11 = zx.q(rdx_9)
                    rdx_11 = rcx_31
                    rdi_4 =
                        ((zx.d(r9_5) << 8 | zx.d(r8_15)) << 8 | zx.d(rdx_13)) << 8 | zx.d(var_a8_2)
                    rbx_3 =
                        ((zx.d(rbx_17) << 8 | zx.d(rcx_52)) << 8 | zx.d(r11_2)) << 8 | zx.d(r10_3)
                else
                    rdi_4 = r15_2
                    rbx_3 = r12_2
                
                uint32_t r15_4 = r15_2 ^ var_98
                void* rsi_2 = rsi + rdx_11
                uint32_t r12_4 = r12_2 ^ var_94_2
                
                if (r8_11.d u<= 7)
                    switch (r8_11.d)
                        case 1
                            rsi_2 -= 1
                            *rsi_2 = (r15_4 u>> 8).b
                        case 2
                            goto label_1428fde4d
                        case 3
                            goto label_1428fde42
                        case 4
                            goto label_1428fde3c
                        case 5
                            goto label_1428fde31
                        case 6
                            goto label_1428fde26
                        case 7
                            rsi_2 -= 1
                            *rsi_2 = (r12_4 u>> 0x18).b
                        label_1428fde26:
                            rsi_2 -= 1
                            *rsi_2 = (r12_4 u>> 0x10).b
                        label_1428fde31:
                            rsi_2 -= 1
                            *rsi_2 = (r12_4 u>> 8).b
                        label_1428fde3c:
                            rsi_2 -= 1
                            *rsi_2 = r12_4.b
                        label_1428fde42:
                            rsi_2 -= 1
                            *rsi_2 = (r15_4 u>> 0x18).b
                        label_1428fde4d:
                            rsi_2 -= 1
                            *rsi_2 = (r15_4 u>> 0x10).b
                            rsi_2 -= 1
                            *rsi_2 = (r15_4 u>> 8).b
                    
                    rsi_2 -= 1
                    *rsi_2 = r15_4.b
                
                r15 -= r12_1
                rsi = rsi_2 + rdx_11
                r12_1 = var_84
                r10 = var_78
                r11 = var_70
            while (r15 u>= r12_1)
        else
            do
                var_98 = rdi_4
                r15 -= r12_1
                sub_1428fba50(&var_98, r10, r11, arg7)
                uint64_t r9_2 = zx.q(r12_1)
                uint64_t r10_1 = zx.q(r12_1 - 1)
                void* r14_1 = r14 + r9_2
                uint32_t r8_2 = 0
                uint32_t rdx_3 = 0
                
                if (r10_1.d u<= 7)
                    switch (r10_1)
                        case 1
                            goto label_1428fd8ea
                        case 2
                            goto label_1428fd8dd
                        case 3
                            goto label_1428fd8d2
                        case 4
                            goto label_1428fd8c7
                        case 5
                            goto label_1428fd8b9
                        case 6
                            goto label_1428fd8ab
                        case 7
                            uint32_t r8_3 = zx.d(*(r14_1 - 1))
                            r14_1 -= 1
                            r8_2 = r8_3 << 0x18
                        label_1428fd8ab:
                            uint32_t rax_17 = zx.d(*(r14_1 - 1))
                            r14_1 -= 1
                            r8_2 |= rax_17 << 0x10
                        label_1428fd8b9:
                            uint32_t rax_19 = zx.d(*(r14_1 - 1))
                            r14_1 -= 1
                            r8_2 |= rax_19 << 8
                        label_1428fd8c7:
                            uint32_t rax_21 = zx.d(*(r14_1 - 1))
                            r14_1 -= 1
                            r8_2 |= rax_21
                        label_1428fd8d2:
                            uint32_t rdx_4 = zx.d(*(r14_1 - 1))
                            r14_1 -= 1
                            rdx_3 = rdx_4 << 0x18
                        label_1428fd8dd:
                            uint32_t rax_22 = zx.d(*(r14_1 - 1))
                            r14_1 -= 1
                            rdx_3 |= rax_22 << 0x10
                        label_1428fd8ea:
                            uint32_t rax_24 = zx.d(*(r14_1 - 1))
                            r14_1 -= 1
                            rdx_3 |= rax_24 << 8
                    
                    uint32_t rax_26 = zx.d(*(r14_1 - 1))
                    r14_1 -= 1
                    rdx_3 |= rax_26
                
                uint32_t rdx_5 = rdx_3 ^ var_98
                r14 = r14_1 + r9_2
                uint32_t r8_4 = r8_2 ^ rbx_3
                char* rsi_1 = rsi + r9_2
                
                if (r10_1.d u<= 7)
                    switch (r10_1)
                        case 1
                            rsi_1 -= 1
                            *rsi_1 = (rdx_5 u>> 8).b
                        case 2
                            goto label_1428fd952
                        case 3
                            goto label_1428fd948
                        case 4
                            goto label_1428fd942
                        case 5
                            goto label_1428fd937
                        case 6
                            goto label_1428fd92c
                        case 7
                            rsi_1 -= 1
                            *rsi_1 = (r8_4 u>> 0x18).b
                        label_1428fd92c:
                            rsi_1 -= 1
                            *rsi_1 = (r8_4 u>> 0x10).b
                        label_1428fd937:
                            rsi_1 -= 1
                            *rsi_1 = (r8_4 u>> 8).b
                        label_1428fd942:
                            rsi_1 -= 1
                            *rsi_1 = r8_4.b
                        label_1428fd948:
                            rsi_1 -= 1
                            *rsi_1 = (rdx_5 u>> 0x18).b
                        label_1428fd952:
                            rsi_1 -= 1
                            *rsi_1 = (rdx_5 u>> 0x10).b
                            rsi_1 -= 1
                            *rsi_1 = (rdx_5 u>> 8).b
                    
                    rsi_1 -= 1
                    *rsi_1 = rdx_5.b
                
                rsi = &rsi_1[r9_2]
                
                if (arg3 == 0x20)
                    rdi_4 = rbx_3
                    rbx_3 = rdx_5
                else if (arg3 != 0x40)
                    char var_44_1 = r8_4.b
                    uint8_t rax_43 = (rdi_4 u>> 0x10).b
                    uint8_t rax_45 = (rbx_3 u>> 8).b
                    uint8_t rax_47 = (rbx_3 u>> 0x10).b
                    uint8_t var_47_1 = (rdx_5 u>> 8).b
                    uint8_t var_46_1 = (rdx_5 u>> 0x10).b
                    uint8_t var_43_1 = (r8_4 u>> 8).b
                    uint8_t var_41_1 = (r8_4 u>> 0x18).b
                    uint8_t var_48_1 = rdx_5.b
                    var_50 = rdi_4.b
                    uint8_t var_45_1 = (rdx_5 u>> 0x18).b
                    char var_4c_1 = rbx_3.b
                    uint8_t rbx_4 = (rbx_3 u>> 0x18).b
                    uint8_t var_42_1 = (r8_4 u>> 0x10).b
                    int32_t r8_6
                    r8_6.b = rax_16 != 0
                    memmove(&var_50, &(&var_50)[sx.q(rcx_5)], r8_6 + 8)
                    uint8_t rdx_8 = (rdi_4 u>> 8).b
                    uint8_t r9_3 = (rdi_4 u>> 0x18).b
                    char r10_2 = var_4c_1
                    char var_a8_1
                    uint8_t rcx_29
                    uint8_t rbx_7
                    uint8_t r8_9
                    uint8_t r11_1
                    
                    if (rax_16 == 0)
                        rbx_7 = rbx_4
                        rcx_29 = rax_47
                        r11_1 = rax_45
                        r8_9 = rax_43
                        var_a8_1 = var_50
                    else
                        var_a8_1 = var_50 << rax_16.b | rdx_8 u>> (8 - rax_16.b)
                        rdx_8 = rdx_8 << rax_16.b | rax_43 u>> (8 - rax_16.b)
                        r8_9 = rax_43 << rax_16.b | r9_3 u>> (8 - rax_16.b)
                        r9_3 = r9_3 << rax_16.b | r10_2 u>> (8 - rax_16.b)
                        r10_2 = r10_2 << rax_16.b | rax_45 u>> (8 - rax_16.b)
                        r11_1 = rax_45 << rax_16.b | rax_47 u>> (8 - rax_16.b)
                        uint8_t rbx_6 = rax_47 << rax_16.b | rbx_4 u>> (8 - rax_16.b)
                        rcx_29 = rbx_6
                        uint8_t rdi_7 = rbx_4 << rax_16.b | var_48_1 u>> (8 - rax_16.b)
                        uint8_t var_a7_1 = rbx_6
                        uint8_t var_a6_1 = rdi_7
                        rbx_7 = rdi_7
                    
                    rdi_4 =
                        ((zx.d(r9_3) << 8 | zx.d(r8_9)) << 8 | zx.d(rdx_8)) << 8 | zx.d(var_a8_1)
                    rbx_3 =
                        ((zx.d(rbx_7) << 8 | zx.d(rcx_29)) << 8 | zx.d(r11_1)) << 8 | zx.d(r10_2)
                else
                    rdi_4 = rdx_5
                    rbx_3 = r8_4
                
                r10 = var_78
                r11 = var_70
            while (r15 u>= r12_1)
    
    *result_1 = rdi_4.b
    *r8 = (rdi_4 u>> 8).b
    *(r8 + 1) = (rdi_4 u>> 0x10).b
    *(r8 + 2) = (rdi_4 u>> 0x18).b
    *(r8 + 3) = rbx_3.b
    *(r8 + 4) = (rbx_3 u>> 8).b
    result = zx.q(rbx_3 u>> 0x10)
    *(r8 + 5) = result.b
    *(r8 + 6) = (rbx_3 u>> 0x18).b

__security_check_cookie(rax_1 ^ &var_c8)
return result
