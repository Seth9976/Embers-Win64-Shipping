// 函数: sub_1427c9df0
// 地址: 0x1427c9df0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_138
int64_t rax_1 = __security_cookie ^ &var_138
int64_t rbx = arg4

if (arg4.d == 6)
    int32_t var_e4_1 = 0x20
    rbx = 1.q

int32_t r12 = 0
int32_t rsi = 0
char rax_4 = sub_1427cab40(arg1, (*(*arg3 + 8))(arg3))
*(arg1 + 0xc) = 0
int64_t rdx_1 = *arg3
uint32_t r15 = zx.d(rax_4)
int32_t var_e0 = 0
int128_t zmm0_1

if ((*(rdx_1 + 8))(arg3, rdx_1) != 0)
    int32_t rax_41
    
    do
        if (r15.b == 0)
            goto label_1427ca24c
        
        int32_t* rax_7 = (*(*arg3 + 0x10))(arg3, zx.q(r12))
        int64_t rax_8 = sx.q(*rax_7)
        int32_t var_108
        uint64_t var_100
        int32_t var_f8
        int32_t var_f0
        uint64_t rax_10
        int128_t* rax_11
        void* rdx_4
        
        if (rax_8.d u<= 0xb)
            switch (rax_8)
                case 0
                    int32_t r8_5 = *(arg1 + 0xc)
                    int64_t rcx_19
                    
                    if (r8_5 != 0)
                        rcx_19 = *(arg1 + 0x18)
                    
                    int32_t rax_35
                    void* rcx_20
                    void* rdx_16
                    
                    if (r8_5 == 0 || rcx_19 == 0)
                        rcx_20 = arg1 + 0x20
                        rdx_16 = rcx_20
                        rax_35 = r8_5 - 1
                    else
                        rax_35 = r8_5 - 1
                        rdx_16 = (zx.q(rax_35) << 4) + rcx_19
                        rcx_20 = arg1 + 0x20
                    
                    zmm0_1 = *rdx_16
                    
                    if (r8_5 == 0)
                        rax_35 = 0
                    
                    rsi -= 1
                    *(arg1 + 0xc) = rax_35
                    int128_t var_d8 = zmm0_1
                    int64_t rdx_17
                    
                    if (rax_35 != 0)
                        rdx_17 = *(arg1 + 0x18)
                    
                    if (rax_35 == 0 || rdx_17 == 0)
                        r15 = rax_35 - 1
                    else
                        r15 = rax_35 - 1
                        rcx_20 = (zx.q(r15) << 4) + rdx_17
                    
                    zmm0_1 = *rcx_20
                    
                    if (rax_35 == 0)
                        r15 = 0
                    
                    int32_t* var_118_2 = &var_d8
                    *(arg1 + 0xc) = r15
                    int32_t r8_6 = rax_7[2]
                    int128_t var_c8 = zmm0_1
                    void var_48
                    int32_t* rax_36 = sub_1427c8f70(arg1, &var_48, r8_6, &var_c8, var_118_2)
                    int32_t rcx_24 = *(arg1 + 0x10)
                    *arg2 = *rax_36
                    
                    if (r15 u< rcx_24)
                        goto label_1427ca1c4
                    
                    if (sub_1427cab40(arg1, *(arg1 + 8) + rcx_24) != 0)
                        r15 = *(arg1 + 0xc)
                    label_1427ca1c4:
                        int64_t rcx_26 = *(arg1 + 0x18)
                        
                        if (rcx_26 != 0)
                            *(rcx_26 + zx.q(r15) * 0x10) = *arg2
                            *(arg1 + 0xc) += 1
                    
                    r15.b = *(arg1 + 0xc) == rsi
                case 1
                    uint64_t rax_9 = sub_1427ca570(arg1, zx.q(rax_7[2]) + arg6, rax_7[3], rax_7[4])
                    char* rdx_8 = zx.q(rax_7[2]) + arg5
                    int32_t r9_1 = rax_7[4]
                    int32_t r8_1 = rax_7[3]
                    var_100 = rax_9
                    var_108 = 1
                    rax_10 = sub_1427ca570(arg1, rdx_8, r8_1, r9_1)
                    void var_b8
                    rdx_4 = &var_b8
                label_1427c9f03:
                    var_f8 = 1
                    var_f0.q = rax_10
                    goto label_1427c9f25
                case 2
                    uint64_t rcx_11 = zx.q(rax_7[2])
                    void var_a8
                    rdx_4 = &var_a8
                    var_108 = 1
                    var_100 = zx.q(*(rcx_11 + arg6))
                    rax_10 = zx.q(*(rcx_11 + arg5))
                    goto label_1427c9f03
                case 3
                    uint64_t rcx_12 = zx.q(rax_7[2])
                    void var_98
                    rdx_4 = &var_98
                    var_108 = 1
                    var_100 = zx.q(*(rcx_12 + arg6))
                    rax_10 = zx.q(*(rcx_12 + arg5))
                    goto label_1427c9f03
                case 4
                    uint64_t rcx_13 = zx.q(rax_7[2])
                    void var_88
                    rdx_4 = &var_88
                    var_108 = 1
                    var_100 = zx.q(*(rcx_13 + arg6))
                    rax_10 = zx.q(*(rcx_13 + arg5))
                    goto label_1427c9f03
                case 5
                    uint64_t rcx_14 = zx.q(rax_7[2])
                    void var_78
                    rdx_4 = &var_78
                    var_108 = 1
                    var_100 = *(rcx_14 + arg6)
                    rax_10 = *(rcx_14 + arg5)
                    goto label_1427c9f03
                case 6
                    uint64_t rax_27 = zx.q(rax_7[2])
                    void var_68
                    rdx_4 = &var_68
                    var_108 = 2
                    var_f8 = 2
                    var_100.d = (*(rax_27 + arg6)).d
                    var_f0 = *(rax_27 + arg5)
                label_1427c9f25:
                    rax_11 = sub_1427c8e40(arg1, rdx_4, rbx, &var_f8, &var_108)
                label_1427c9f2d:
                    *arg2 = *rax_11
                    goto label_1427c9f31
                case 7
                    uint64_t rdx_12 = zx.q(rax_7[2])
                    uint64_t rcx_17 = zx.q(rax_7[5])
                    var_108 = 1
                    uint32_t var_e4_2 = zx.d(*(rcx_17 + arg6))
                    var_100 = (*(rdx_12 + arg6)).q
                    void var_58
                    rdx_4 = &var_58
                    uint32_t var_e4_3 = zx.d(*(rcx_17 + arg5))
                    rax_10 = (*(rdx_12 + arg5)).q
                    goto label_1427c9f03
                case 8
                    *(arg2 + 8) = *(rax_7 + 8)
                    *arg2 = 1
                label_1427c9f31:
                    uint64_t rax_13 = zx.q(*(arg1 + 0xc))
                    rdx_4.b = 1
                    int32_t rcx_8 = *(arg1 + 0x10)
                    
                    if (rax_13.d u>= rcx_8)
                        rdx_4 = zx.q(sub_1427cab40(arg1, *(arg1 + 8) + rcx_8))
                        rax_13 = zx.q(*(arg1 + 0xc))
                    
                    int32_t rcx_10 = rax_13.d
                    
                    if (rdx_4.b != 0)
                        int64_t rdx_11 = *(arg1 + 0x18)
                        
                        if (rdx_11 != 0)
                            *(rdx_11 + rax_13 * 0x10) = *arg2
                            *(arg1 + 0xc) += 1
                            rcx_10 = *(arg1 + 0xc)
                    
                    rsi += 1
                    r15.b = rcx_10 == rsi
                case 9
                    *(arg2 + 8) = rax_7[2]
                    *arg2 = 2
                    goto label_1427c9f31
                case 0xb
                    rax_11, rdx_4 = sub_1427ca380(arg1, *(rax_7 + 0x18))
                    
                    if (rax_11 != 0)
                        goto label_1427c9f2d
                    
                    *(arg2 + 8) = rax_11
                    *arg2 = 1
                    goto label_1427c9f31
        r12 = var_e0 + 1
        var_e0 = r12
        rax_41 = (*(*arg3 + 8))(arg3)
    while (r12 u< rax_41)

if (r15.b == 0 || rsi != 1)
label_1427ca24c:
    *arg2 = 1
    *(arg2 + 8) = 0
else
    int32_t rdx_21 = *(arg1 + 0xc)
    int64_t r8_7
    
    if (rdx_21 != 0)
        r8_7 = *(arg1 + 0x18)
    
    int128_t* rax_44
    int32_t rcx_28
    
    if (rdx_21 == 0 || r8_7 == 0)
        rax_44 = arg1 + 0x20
        rcx_28 = rdx_21 - 1
    else
        rcx_28 = rdx_21 - 1
        rax_44 = (zx.q(rcx_28) << 4) + r8_7
    
    zmm0_1 = *rax_44
    
    if (rdx_21 == 0)
        rcx_28 = 0
    
    *(arg1 + 0xc) = rcx_28
    *arg2 = zmm0_1

__security_check_cookie(rax_1 ^ &var_138)
return arg2
