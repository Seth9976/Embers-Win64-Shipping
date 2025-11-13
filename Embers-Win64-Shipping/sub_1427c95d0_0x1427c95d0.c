// 函数: sub_1427c95d0
// 地址: 0x1427c95d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbp = 0
char rax_2 = sub_1427cab40(arg1, (*(*arg3 + 8))(arg3))
*(arg1 + 0xc) = 0
int64_t rdx_1 = *arg3
uint32_t rbx = zx.d(rax_2)
int32_t r15 = 0
int32_t arg_8 = 0
int128_t zmm0_1

if ((*(rdx_1 + 8))(arg3, rdx_1) != 0)
    uint64_t r12_1 = zx.q(arg7)
    int32_t rax_34
    
    do
        if (rbx.b == 0)
            goto label_1427c9a10
        
        int32_t* rax_5 = (*(*arg3 + 0x10))(arg3, zx.q(r15))
        int64_t rcx_4 = sx.q(*rax_5)
        int64_t rax_10
        void* rdx_4
        float zmm0_2
        int32_t zmm1_1
        bool cond:1_1
        
        if (rcx_4.d u<= 0x12)
            switch (rcx_4)
                case 0
                    int32_t r8_4 = *(arg1 + 0xc)
                    int64_t rcx_20
                    
                    if (r8_4 != 0)
                        rcx_20 = *(arg1 + 0x18)
                    
                    int32_t rax_28
                    void* rcx_21
                    void* rdx_17
                    
                    if (r8_4 == 0 || rcx_20 == 0)
                        rcx_21 = arg1 + 0x20
                        rdx_17 = rcx_21
                        rax_28 = r8_4 - 1
                    else
                        rax_28 = r8_4 - 1
                        rdx_17 = (zx.q(rax_28) << 4) + rcx_20
                        rcx_21 = arg1 + 0x20
                    
                    zmm0_1 = *rdx_17
                    
                    if (r8_4 == 0)
                        rax_28 = 0
                    
                    rbp -= 1
                    *(arg1 + 0xc) = rax_28
                    int128_t var_68 = zmm0_1
                    int64_t rdx_18
                    
                    if (rax_28 != 0)
                        rdx_18 = *(arg1 + 0x18)
                    
                    if (rax_28 == 0 || rdx_18 == 0)
                        rbx = rax_28 - 1
                    else
                        rbx = rax_28 - 1
                        rcx_21 = (zx.q(rbx) << 4) + rdx_18
                    
                    zmm0_1 = *rcx_21
                    
                    if (rax_28 == 0)
                        rbx = 0
                    
                    *(arg1 + 0xc) = rbx
                    int32_t r8_5 = rax_5[2]
                    int128_t var_58 = zmm0_1
                    void var_48
                    int32_t* rax_29 = sub_1427c8f70(arg1, &var_48, r8_5, &var_58, &var_68)
                    int32_t rcx_25 = *(arg1 + 0x10)
                    *arg2 = *rax_29
                    
                    if (rbx u< rcx_25)
                        goto label_1427c98d2
                    
                    if (sub_1427cab40(arg1, *(arg1 + 8) + rcx_25) != 0)
                        rbx = *(arg1 + 0xc)
                    label_1427c98d2:
                        int64_t rcx_27 = *(arg1 + 0x18)
                        
                        if (rcx_27 != 0)
                            *(rcx_27 + zx.q(rbx) * 0x10) = *arg2
                            *(arg1 + 0xc) += 1
                    
                    rbx.b = *(arg1 + 0xc) == rbp
                case 8
                    rax_10 = *(rax_5 + 8)
                label_1427c96d2:
                    *(arg2 + 8) = rax_10
                    *arg2 = 1
                    goto label_1427c9686
                case 9
                    *(arg2 + 8) = rax_5[2]
                    *arg2 = 2
                label_1427c9686:
                    uint64_t rax_8 = zx.q(*(arg1 + 0xc))
                    rdx_4.b = 1
                    int32_t rcx_5 = *(arg1 + 0x10)
                    
                    if (rax_8.d u>= rcx_5)
                        rdx_4 = zx.q(sub_1427cab40(arg1, *(arg1 + 8) + rcx_5))
                        rax_8 = zx.q(*(arg1 + 0xc))
                    
                    int32_t rcx_7 = rax_8.d
                    
                    if (rdx_4.b != 0)
                        int64_t rdx_7 = *(arg1 + 0x18)
                        
                        if (rdx_7 != 0)
                            *(rdx_7 + rax_8 * 0x10) = *arg2
                            *(arg1 + 0xc) += 1
                            rcx_7 = *(arg1 + 0xc)
                    
                    rbp += 1
                    rbx.b = rcx_7 == rbp
                case 0xa
                    *arg2 = *(arg4 + r12_1 * 0x10)
                    goto label_1427c9686
                case 0xb
                    void* rax_27
                    rax_27, rdx_4 = sub_1427ca380(arg1, *(rax_5 + 0x18))
                    
                    if (rax_27 == 0)
                        goto label_1427c97d0
                    
                    *arg2 = *rax_27
                    goto label_1427c9686
                case 0xc
                    rbx = 0
                    void* rax_14
                    rax_14, rdx_4 = (*(*arg6 + 8))(arg6)
                    
                    if (*(rax_14 + 0x20) u<= 0)
                    label_1427c97d0:
                        *arg2 = 1
                        *(arg2 + 8) = 0
                        goto label_1427c9686
                    
                    while (true)
                        int64_t* rax_16 = (*(*arg6 + 0x10))(arg6, zx.q(rbx))
                        int64_t rdx_9 = *rax_16
                        void* rax_17 = (*(rdx_9 + 8))(rax_16, rdx_9)
                        char* rcx_12 = *(rax_5 + 0x18)
                        void* r8_1 = *(rax_17 + 8) - rcx_12
                        uint32_t i
                        uint32_t rdx_10
                        
                        do
                            rdx_10 = zx.d(*rcx_12)
                            i = zx.d(*(rcx_12 + r8_1))
                            
                            if (rdx_10 != i)
                                break
                            
                            rcx_12 = &rcx_12[1]
                        while (i != 0)
                        
                        if (rdx_10 - i == 0)
                            *arg2 = *(arg4 + zx.q(rbx) * 0x10)
                            break
                        
                        rbx += 1
                        void* rax_19
                        rax_19, rdx_4 = (*(*arg6 + 8))(arg6)
                        
                        if (rbx u>= *(rax_19 + 0x20))
                            *arg2 = 1
                            *(arg2 + 8) = 0
                            break
                    
                    goto label_1427c9686
                case 0xe
                    rax_10 = 0
                    rbx = 0
                    
                    if (r12_1.d == 0)
                        goto label_1427c96d2
                    
                    while (true)
                        int64_t* rax_23 = (*(*arg6 + 0x10))(arg6, zx.q(rbx))
                        int64_t rdx_12 = *rax_23
                        void* rax_24 = (*(rdx_12 + 8))(rax_23, rdx_12)
                        char* rcx_17 = *(rax_5 + 0x18)
                        void* r8_3 = *(rax_24 + 8) - rcx_17
                        uint32_t i_1
                        uint32_t rdx_13
                        
                        do
                            rdx_13 = zx.d(*rcx_17)
                            i_1 = zx.d(*(rcx_17 + r8_3))
                            
                            if (rdx_13 != i_1)
                                break
                            
                            rcx_17 = &rcx_17[1]
                        while (i_1 != 0)
                        
                        if (rdx_13 - i_1 == 0)
                            *arg2 = *(arg5 + zx.q(rbx) * 0x10)
                            break
                        
                        rbx += 1
                        
                        if (rbx u>= r12_1.d)
                            goto label_1427c97d0
                    
                    goto label_1427c9686
                case 0x11
                    int64_t rbx_1 = *(arg1 + 0x30)
                    
                    if (rbx_1 == 0)
                    label_1427c99e8:
                        *arg2 = 2
                        *(arg2 + 8) = 0
                        return arg2
                    
                    zmm0_2 = sub_1427ca2c0(arg1, (r12_1 << 4) + arg4)
                    cond:1_1 = rbx_1 s>= 0
                    zmm1_1 = float.s(rbx_1)
                label_1427c9995:
                    
                    if (not(cond:1_1))
                        zmm1_1 = zmm1_1 f+ 1.84467441e+19f
                    
                    *arg2 = 2
                    *(arg2 + 8) = zmm0_2 * 100f f/ zmm1_1
                    return arg2
                case 0x12
                    int64_t rbx_2 = *(arg1 + 0x30)
                    
                    if (rbx_2 == 0)
                        goto label_1427c99e8
                    
                    zmm0_2 = sub_1427ca2c0(arg1, (r12_1 << 4) + arg4)
                    int64_t rax_39 = zx.q(*(arg1 + 0x38)) * rbx_2
                    cond:1_1 = rax_39 s>= 0
                    zmm1_1 = float.s(rax_39)
                    goto label_1427c9995
        r15 = arg_8 + 1
        arg_8 = r15
        rax_34 = (*(*arg3 + 8))(arg3)
    while (r15 u< rax_34)

if (rbx.b == 0 || rbp != 1)
label_1427c9a10:
    *arg2 = 1
    *(arg2 + 8) = 0
else
    int32_t rdx_22 = *(arg1 + 0xc)
    int64_t r8_6
    
    if (rdx_22 != 0)
        r8_6 = *(arg1 + 0x18)
    
    if (rdx_22 == 0 || r8_6 == 0)
        int32_t rcx_32 = rdx_22 - 1
        
        if (rdx_22 == 0)
            rcx_32 = 0
        
        *arg2 = *(arg1 + 0x20)
        *(arg1 + 0xc) = rcx_32
    else
        int32_t rcx_29 = rdx_22 - 1
        int128_t* rax_37 = (zx.q(rcx_29) << 4) + r8_6
        
        if (rdx_22 == 0)
            rcx_29 = 0
        
        zmm0_1 = *rax_37
        *(arg1 + 0xc) = rcx_29
        *arg2 = zmm0_1

return arg2
