// 函数: sub_1427c9a90
// 地址: 0x1427c9a90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = 0
char rax_2 = sub_1427cab40(arg1, (*(*arg3 + 8))(arg3))
*(arg1 + 0xc) = 0
int64_t rdx_1 = *arg3
uint32_t rbp = zx.d(rax_2)
int32_t r15 = 0
int128_t zmm0_1

if ((*(rdx_1 + 8))(arg3, rdx_1) != 0)
    int32_t rax_25
    
    do
        if (rbp.b == 0)
            goto label_1427c9d8a
        
        int32_t* rax_5 = (*(*arg3 + 0x10))(arg3, zx.q(r15))
        int64_t rax_6 = sx.q(*rax_5)
        void* rax_7
        void* rdx_4
        
        if (rax_6.d u<= 0xb)
            switch (rax_6)
                case 0
                    int32_t r9_1 = *(arg1 + 0xc)
                    int64_t rcx_16
                    
                    if (r9_1 != 0)
                        rcx_16 = *(arg1 + 0x18)
                    
                    int32_t rax_19
                    void* rcx_17
                    void* rdx_13
                    
                    if (r9_1 == 0 || rcx_16 == 0)
                        rcx_17 = arg1 + 0x20
                        rdx_13 = rcx_17
                        rax_19 = r9_1 - 1
                    else
                        rax_19 = r9_1 - 1
                        rdx_13 = (zx.q(rax_19) << 4) + rcx_16
                        rcx_17 = arg1 + 0x20
                    
                    zmm0_1 = *rdx_13
                    
                    if (r9_1 == 0)
                        rax_19 = 0
                    
                    rdi -= 1
                    *(arg1 + 0xc) = rax_19
                    int128_t var_58 = zmm0_1
                    int64_t rdx_14
                    
                    if (rax_19 != 0)
                        rdx_14 = *(arg1 + 0x18)
                    
                    if (rax_19 == 0 || rdx_14 == 0)
                        rbp = rax_19 - 1
                    else
                        rbp = rax_19 - 1
                        rcx_17 = (zx.q(rbp) << 4) + rdx_14
                    
                    zmm0_1 = *rcx_17
                    
                    if (rax_19 == 0)
                        rbp = 0
                    
                    *(arg1 + 0xc) = rbp
                    int32_t r8_2 = rax_5[2]
                    int128_t var_48 = zmm0_1
                    void var_38
                    int32_t* rax_20 = sub_1427c8f70(arg1, &var_38, r8_2, &var_48, &var_58)
                    int32_t rcx_21 = *(arg1 + 0x10)
                    *arg2 = *rax_20
                    
                    if (rbp u< rcx_21)
                        goto label_1427c9d01
                    
                    if (sub_1427cab40(arg1, *(arg1 + 8) + rcx_21) != 0)
                        rbp = *(arg1 + 0xc)
                    label_1427c9d01:
                        int64_t rcx_23 = *(arg1 + 0x18)
                        
                        if (rcx_23 != 0)
                            *(rcx_23 + zx.q(rbp) * 0x10) = *arg2
                            *(arg1 + 0xc) += 1
                    
                    rbp.b = *(arg1 + 0xc) == rdi
                case 1
                    rax_7, rdx_4 = sub_1427ca570(arg1, zx.q(rax_5[2]) + arg4, rax_5[3], rax_5[4])
                label_1427c9b3b:
                    *(arg2 + 8) = rax_7
                    goto label_1427c9b3f
                case 2
                    *(arg2 + 8) = zx.q(*(zx.q(rax_5[2]) + arg4))
                label_1427c9b3f:
                    *arg2 = 1
                    goto label_1427c9b45
                case 3
                    *(arg2 + 8) = zx.q(*(zx.q(rax_5[2]) + arg4))
                    goto label_1427c9b3f
                case 4
                    *(arg2 + 8) = zx.q(*(zx.q(rax_5[2]) + arg4))
                    goto label_1427c9b3f
                case 5
                    *(arg2 + 8) = *(zx.q(rax_5[2]) + arg4)
                    goto label_1427c9b3f
                case 6
                    uint64_t rax_15 = zx.q(rax_5[2])
                    *arg2 = 2
                    *(arg2 + 8) = *(rax_15 + arg4)
                label_1427c9b45:
                    uint64_t rax_9 = zx.q(*(arg1 + 0xc))
                    rdx_4.b = 1
                    int32_t rcx_5 = *(arg1 + 0x10)
                    
                    if (rax_9.d u>= rcx_5)
                        rdx_4 = zx.q(sub_1427cab40(arg1, *(arg1 + 8) + rcx_5))
                        rax_9 = zx.q(*(arg1 + 0xc))
                    
                    int32_t rcx_7 = rax_9.d
                    
                    if (rdx_4.b != 0)
                        int64_t rdx_9 = *(arg1 + 0x18)
                        
                        if (rdx_9 != 0)
                            *(rdx_9 + rax_9 * 0x10) = *arg2
                            *(arg1 + 0xc) += 1
                            rcx_7 = *(arg1 + 0xc)
                    
                    rdi += 1
                    rbp.b = rcx_7 == rdi
                case 7
                    uint32_t arg_c = zx.d(*(zx.q(rax_5[5]) + arg4))
                    rax_7 = (*(zx.q(rax_5[2]) + arg4)).q
                    goto label_1427c9b3b
                case 8
                    rax_7 = *(rax_5 + 8)
                    goto label_1427c9b3b
                case 9
                    *(arg2 + 8) = rax_5[2]
                    *arg2 = 2
                    goto label_1427c9b45
                case 0xb
                    rax_7, rdx_4 = sub_1427ca380(arg1, *(rax_5 + 0x18))
                    
                    if (rax_7 == 0)
                        goto label_1427c9b3b
                    
                    *arg2 = *rax_7
                    goto label_1427c9b45
        r15 += 1
        rax_25 = (*(*arg3 + 8))(arg3)
    while (r15 u< rax_25)

if (rbp.b == 0 || rdi != 1)
label_1427c9d8a:
    *arg2 = 1
    *(arg2 + 8) = 0
else
    int32_t rdx_18 = *(arg1 + 0xc)
    int64_t r8_3
    
    if (rdx_18 != 0)
        r8_3 = *(arg1 + 0x18)
    
    if (rdx_18 == 0 || r8_3 == 0)
        int32_t rcx_26 = rdx_18 - 1
        
        if (rdx_18 == 0)
            rcx_26 = 0
        
        *arg2 = *(arg1 + 0x20)
        *(arg1 + 0xc) = rcx_26
    else
        int32_t rcx_25 = rdx_18 - 1
        int128_t* rax_28 = (zx.q(rcx_25) << 4) + r8_3
        
        if (rdx_18 == 0)
            rcx_25 = 0
        
        zmm0_1 = *rax_28
        *(arg1 + 0xc) = rcx_25
        *arg2 = zmm0_1

return arg2
