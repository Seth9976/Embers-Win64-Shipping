// 函数: sub_1429188c0
// 地址: 0x1429188c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0xd0)
int32_t r15 = 0
int64_t rdi = 0
int64_t* var_50 = nullptr
void* const rsi = nullptr
int64_t* var_68 = nullptr
int64_t rbp = arg4
int64_t var_a0_1
__builtin_memset(&var_a0_1, 0, 0x28)
int64_t var_b8 = 0
int64_t var_58 = 0
int32_t arg_8 = 0
int64_t*** var_c0 = nullptr
int32_t var_d0 = 0
int32_t rax = sub_142890300(arg1[2])
int32_t rax_1

if (rax == 0)
    rax_1 = sub_142890300(arg1[3])

int32_t var_e8

if (rax == 0 && rax_1 == 0)
    if (arg3 == 0)
        if (rbp != 1)
            goto label_142918ad6
        
        var_e8.q = arg7
        return sub_1429181f0(arg1, arg2, *arg6, *arg5, var_e8)
    
    if (rbp != 0)
        goto label_1429189d5
    
    var_e8.q = arg7
    return sub_1429181f0(arg1, arg2, arg3, nullptr, var_e8)

if (arg3 == 0)
    goto label_142918ad6

label_1429189d5:
int64_t* rax_5 = sub_14060aa50(arg1)
var_50 = rax_5
int64_t** var_90_1
int64_t var_88_1
int64_t* var_80_1
int64_t* rbp_1

if (rax_5 != 0)
    rsi = arg1[0x14]
    int32_t rax_6
    
    if (rsi != 0 && *(rsi + 0x10) != 0)
        rax_6 = sub_1428bf4e0(arg1, rax_5, **(rsi + 0x20), arg7)
    
    int32_t var_e8_1
    int32_t r8_6
    
    if (rsi != 0 && *(rsi + 0x10) != 0 && rax_6 == 0)
        int64_t rbx_1 = *(rsi + 8)
        var_a0_1 = rbx_1
        int32_t rax_7 = sub_142890560(arg3)
        rdi = *(rsi + 0x10)
        int64_t rbp_2 = 1 << (*(rsi + 0x18) - 1)
        var_58 = rbp_2
        
        if (*(rsi + 0x28) != rdi * rbp_2)
            var_e8_1 = 0x1f2
            r8_6 = 0x44
            goto label_142918aaa
        
        rbp = arg4
        
        if (divu.dp.q(0:(sx.q(rax_7)), rbx_1) + 1 u<= rdi)
            rdi = divu.dp.q(0:(sx.q(rax_7)), rbx_1) + 1
        
        goto label_142918ad1
    
    rdi = 1
    rsi = nullptr
    var_d0 = 1
label_142918ad1:
    var_b8 = rdi
label_142918ad6:
    int64_t rax_12 = rdi + rbp
    int64_t rbx_2 = rax_12 << 3
    int64_t var_c8_1 = rax_12
    var_90_1 = sub_1428a6730(rbx_2)
    int64_t rax_14 = sub_1428a6730(rbx_2)
    var_88_1 = rax_14
    var_80_1 = sub_1428a6730(rbx_2 + 8)
    int64_t*** rax_16 = sub_1428a6730(rbx_2)
    var_c0 = rax_16
    
    if (var_80_1 != 0)
        *var_80_1 = 0
    
    int64_t** r8_11 = var_90_1
    
    if (r8_11 == 0 || rax_14 == 0 || var_80_1 == 0 || rax_16 == 0)
        var_e8_1 = 0x20b
        r8_6 = 0x41
    label_142918aaa:
        sub_1428a5670(0x10, 0xbb, r8_6, "crypto\ec\ec_mult.c", var_e8_1)
    label_142918e0e:
        rbp_1 = nullptr
    else
        int32_t rcx_13 = var_d0
        int64_t rbp_4 = 0
        int64_t rbx_3 = arg4
        uint64_t rax_17 = zx.q(rcx_13)
        int64_t rax_18 = rax_17 + rbx_3
        int64_t var_a8_1 = 0
        int64_t var_98_1
        
        if (rax_17 != neg.q(rbx_3))
            int64_t** rdi_1 = arg6
            char** rax_20 = var_80_1 - rdi_1
            void* rbx_5 = r8_11 - rdi_1
            void* var_78_1 = rbx_5
            void* rax_23 = var_88_1 - rdi_1
            
            do
                int64_t* rcx_14
                
                if (rbp_4 u>= arg4)
                    rcx_14 = arg3
                else
                    rcx_14 = *rdi_1
                
                uint64_t rax_24 = sub_142890560(rcx_14)
                int64_t rcx_15 = sx.q(rax_24.d)
                int64_t rax_25
                
                if (rcx_15 u>= 0x7d0)
                    rax_25 = 6
                else if (rcx_15 u>= 0x320)
                    rax_25 = 5
                else if (rcx_15 u>= 0x12c)
                    rax_25 = 4
                else if (rcx_15 u< 0x46)
                    rax_25 = sbb.q(rax_24, rax_24, rcx_15 u< 0x14) + 2
                else
                    rax_25 = 3
                
                *(rbx_5 + rdi_1) = rax_25
                var_a8_1 += 1 << (rax_25 + 0xff).b
                *(&rax_20[1] + rdi_1) = 0
                int64_t* rcx_17
                
                if (rbp_4 u>= arg4)
                    rcx_17 = arg3
                else
                    rcx_17 = *rdi_1
                
                int64_t* rbx_7 = rax_23 + rdi_1
                char* rax_29 = sub_1429231b0(rcx_17, *(var_78_1 + rdi_1), rbx_7)
                *(rax_20 + rdi_1) = rax_29
                
                if (rax_29 == 0)
                    goto label_142918e0e_2
                
                int64_t rax_30 = *rbx_7
                rbp_4 += 1
                rbx_5 = var_78_1
                rdi_1 = &rdi_1[1]
                
                if (rax_30 u<= var_98_1)
                    rax_30 = var_98_1
                
                var_98_1 = rax_30
            while (rbp_4 u< rax_18)
            
            rdi = var_b8
            rcx_13 = var_d0
            rbx_3 = arg4
            r8_11 = var_90_1
        
        int64_t*** r13_2
        
        if (rdi == 0)
        label_1429190cf:
            r13_2 = var_c0
        label_1429190ee:
            int64_t* rax_47 = sub_1428a6730((var_a8_1 << 3) + 8)
            rbp_1 = rax_47
            
            if (rax_47 != 0)
                int64_t rdi_5 = rax_18
                void* rax_49 = &rbp_1[var_a8_1]
                int64_t* rbx_12 = rbp_1
                int64_t rbp_6 = 0
                *rax_49 = 0
                
                if (rdi_5 != 0)
                    int64_t** rsi_2 = var_90_1
                    void* r13_3 = r13_2 - rsi_2
                    
                    do
                        *(rsi_2 + r13_3) = rbx_12
                        int64_t i = 0
                        
                        do
                            int64_t* rax_50 = sub_1428bfa80(arg1)
                            *rbx_12 = rax_50
                            
                            if (rax_50 == 0)
                                goto label_1429191d1_2
                            
                            rbx_12 = &rbx_12[1]
                            i += 1
                        while (i u< 1 << (*rsi_2 - 1))
                        
                        rdi_5 = rax_18
                        rbp_6 += 1
                        rsi_2 = &rsi_2[1]
                    while (rbp_6 u< rdi_5)
                
                if (rbx_12 == rax_49)
                    int64_t* rax_51 = sub_1428bfa80(arg1)
                    var_68 = rax_51
                    
                    if (rax_51 == 0)
                    label_1429191d1:
                        rbp_1 = rax_47
                    else
                        int64_t rsi_3 = 0
                        
                        if (rdi_5 != 0)
                            int64_t*** rdi_6 = var_c0
                            void* rbp_8 = var_90_1 - var_c0
                            
                            do
                                int64_t* rdx_29
                                
                                if (rsi_3 u>= arg4)
                                    rdx_29 = var_50
                                else
                                    rdx_29 = *(rdi_6 + arg5 - var_c0)
                                
                                if (sub_1428bf580(**rdi_6, rdx_29) == 0)
                                    goto label_1429191d1_2
                                
                                if (*(rdi_6 + rbp_8) u> 1)
                                    if (sub_1428bf600(arg1, var_68, **rdi_6, arg7, var_e8) == 0)
                                        goto label_1429191d1_2
                                    
                                    int64_t i_1 = 1
                                    
                                    if (1 u< 1 << (*(rdi_6 + rbp_8) - 1))
                                        do
                                            int64_t** rax_54 = *rdi_6
                                            var_e8.q = arg7
                                            
                                            if (sub_1428bf3e0(arg1, rax_54[i_1], rax_54[i_1 - 1], 
                                                    var_68, var_e8) == 0)
                                                goto label_1429191d1_2
                                            
                                            i_1 += 1
                                        while (i_1 u< 1 << (*(rdi_6 + rbp_8) - 1))
                                
                                rsi_3 += 1
                                rdi_6 = &rdi_6[1]
                            while (rsi_3 u< rax_18)
                        
                        int64_t rbx_14 = arg7
                        rbp_1 = rax_47
                        
                        if (sub_1428bfe00(arg1, var_a8_1, rbp_1, rbx_14, var_e8) != 0)
                            int32_t rax_57 = var_98_1.d
                            int32_t rsi_4 = 1
                            int32_t i_2 = rax_57 - 1
                            int32_t i_5 = i_2
                            
                            if (rax_57 - 1 s< 0)
                                goto label_1429194d2
                            
                            void* i_7 = sx.q(i_2)
                            void* i_8 = i_7
                            
                            do
                                if (rsi_4 == 0)
                                    if (sub_1428bf600(arg1, arg2, arg2, rbx_14, var_e8) == 0)
                                        goto label_1429191d1_2
                                    
                                    i_2 = i_5
                                
                                int64_t rbp_9 = 0
                                
                                if (var_c8_1 u> 0)
                                    int64_t* rbx_15 = var_80_1
                                    void* r8_37 = var_c0 - var_80_1
                                    int64_t i_6 = sx.q(i_2)
                                    int64_t rcx_50 = var_c8_1
                                    void* var_a0_2 = r8_37
                                    int64_t i_9 = i_6
                                    
                                    do
                                        if (*(rbx_15 + var_88_1 - var_80_1) u> i_6)
                                            int32_t rcx_51 = sx.d(*(i_7 + *rbx_15))
                                            
                                            if (rcx_51.b != 0)
                                                uint32_t rax_60 = zx.d(rcx_51.b)
                                                int32_t rdi_8 = neg.d(rcx_51)
                                                
                                                if (rax_60 u< 0x80)
                                                    rdi_8 = rcx_51
                                                
                                                int32_t rcx_52 = arg_8
                                                
                                                if (rax_60 u>> 7 != rcx_52)
                                                    if (rsi_4 == 0)
                                                        if (sub_1428bf820(arg1, arg2, arg7) == 0)
                                                            goto label_1429191d1_2
                                                        
                                                        r8_37 = var_a0_2
                                                        rcx_52 = arg_8
                                                    
                                                    int32_t rax_63
                                                    rax_63.b = rcx_52 == 0
                                                    arg_8 = rax_63
                                                
                                                int64_t* r9_8 =
                                                    *(*(r8_37 + rbx_15) + (sx.q(rdi_8) s>> 1 << 3))
                                                
                                                if (rsi_4 == 0)
                                                    var_e8.q = arg7
                                                    
                                                    if (sub_1428bf3e0(arg1, arg2, arg2, r9_8, 
                                                            var_e8) == 0)
                                                        goto label_1429191d1_2
                                                else
                                                    if (sub_1428bf580(arg2, r9_8) == 0)
                                                        goto label_1429191d1_2
                                                    
                                                    rsi_4 = 0
                                                
                                                i_7 = i_8
                                                r8_37 = var_a0_2
                                            
                                            i_6 = i_9
                                            rcx_50 = var_c8_1
                                        
                                        rbp_9 += 1
                                        rbx_15 = &rbx_15[1]
                                    while (rbp_9 u< rcx_50)
                                    
                                    i_2 = i_5
                                    rbx_14 = arg7
                                
                                i_2 -= 1
                                i_7 -= 1
                                i_5 = i_2
                                i_8 = i_7
                            while (i_2 s>= 0)
                            
                            if (rsi_4 != 0)
                                rbp_1 = rax_47
                            label_1429194d2:
                                
                                if (sub_1428bfd80(arg1, arg2) != 0)
                                    rbp_1 = rax_47
                                    r15 = 1
                            else if (arg_8 == 0)
                                rbp_1 = rax_47
                                r15 = 1
                            else if (sub_1428bf820(arg1, arg2, rbx_14) == 0)
                            label_1429191d1_1:
                                rbp_1 = rax_47
                            else
                                rbp_1 = rax_47
                                r15 = rsi_4 + 1
                else
                    sub_1428a5670(0x10, 0xbb, 0x44, "crypto\ec\ec_mult.c", 0x2a9)
                label_1429191d1_2:
                    rbp_1 = rax_47
            else
                sub_1428a5670((&rax_47[2]).d, 0xbb, (rax_47 + 0x41).d, "crypto\ec\ec_mult.c", 0x298)
        else
            if (rsi == 0)
                if (rcx_13 == 1)
                    goto label_1429190cf
                
                var_e8_1 = 0x229
                r8_6 = 0x44
                goto label_142918aaa
            
            var_b8 = 0
            
            if (rcx_13 != 0)
                var_e8_1 = 0x232
                r8_6 = 0x44
                goto label_142918aaa
            
            int64_t rax_31 = *(rsi + 0x18)
            r8_11[rbx_3] = rax_31
            char* rax_32 = sub_1429231b0(arg3, rax_31.d, &var_b8)
            
            if (rax_32 == 0)
            label_142918e0e_1:
                rbp_1 = nullptr
            else
                int64_t rcx_20 = var_b8
                
                if (rcx_20 u<= var_98_1)
                    var_c8_1 = rbx_3 + 1
                    var_80_1[rbx_3] = rax_32
                    r13_2 = var_c0
                    var_80_1[rbx_3 + 1] = 0
                    *(var_88_1 + (rbx_3 << 3)) = rcx_20
                    r13_2[rbx_3] = *(rsi + 0x20)
                    goto label_1429190ee
                
                int64_t r9_3 = var_a0_1
                int64_t rax_40
                
                if (rcx_20 u>= rdi * r9_3)
                    rax_40 = var_c8_1
                label_142918f26:
                    int64_t* rsi_1 = *(rsi + 0x20)
                    char* rbp_5 = rax_32
                    int64_t rdi_4 = rbx_3
                    
                    if (rbx_3 u< rax_40)
                        int64_t r8_21 = rax_40 - 1
                        int64_t* rdx_23 = var_80_1 - var_88_1
                        int64_t var_60_2 = r8_21
                        int64_t* rbx_10 = var_88_1 + (rbx_3 << 3)
                        int64_t* var_78_2 = rdx_23
                        
                        while (true)
                            if (rdi_4 u>= r8_21)
                                *rbx_10 = rcx_20
                            else
                                *rbx_10 = r9_3
                                
                                if (rcx_20 u< r9_3)
                                    sub_1428a5670(0x10, 0xbb, 0x44, "crypto\ec\ec_mult.c", 0x26c)
                                    goto label_142918e09
                                
                                var_b8 = rcx_20 - r9_3
                            
                            *(rdx_23 + rbx_10 + 8) = 0
                            int64_t rax_43 = sub_1428a6730(*rbx_10)
                            *(var_78_2 + rbx_10) = rax_43
                            
                            if (rax_43 == 0)
                                sub_1428a5670(0x10, 0xbb, 0x41, "crypto\ec\ec_mult.c", 0x27b)
                                goto label_142918e09
                            
                            memcpy(rax_43, rbp_5, (*rbx_10).d)
                            int64_t rax_44 = *rbx_10
                            
                            if (rax_44 u<= var_98_1)
                                rax_44 = var_98_1
                            
                            var_98_1 = rax_44
                            
                            if (*rsi_1 == 0)
                                sub_1428a5670(0x10, 0xbb, 0x44, "crypto\ec\ec_mult.c", 0x284)
                                goto label_142918e09
                            
                            rdi_4 += 1
                            r9_3 = var_a0_1
                            rbp_5 = &rbp_5[r9_3]
                            *(var_c0 - var_88_1 + rbx_10) = rsi_1
                            rbx_10 = &rbx_10[1]
                            rsi_1 = &rsi_1[var_58]
                            
                            if (rdi_4 u>= var_c8_1)
                                break
                            
                            rcx_20 = var_b8
                            rdx_23 = var_78_2
                            r8_21 = var_60_2
                    
                    sub_1428a6780(rax_32)
                    goto label_1429190cf
                
                uint64_t temp0_2 = divu.dp.q(0:(r9_3 - 1 + rcx_20), r9_3)
                
                if (temp0_2 u<= *(rsi + 0x10))
                    rax_40 = temp0_2 + rbx_3
                    var_c8_1 = rax_40
                    goto label_142918f26
                
                sub_1428a5670(0x10, 0xbb, 0x44, "crypto\ec\ec_mult.c", 0x25d)
            label_142918e09:
                sub_1428a6780(rax_32)
            label_142918e0e_2:
                rbp_1 = nullptr
else
    sub_1428a5670((&rax_5[2]).d, 0xbb, (rax_5 + 0x71).d, "crypto\ec\ec_mult.c", 0x1d6)
    rbp_1 = nullptr

sub_1428bf6a0(var_68)
sub_1428a6780(var_90_1)
sub_1428a6780(var_88_1)

if (var_80_1 != 0)
    int64_t i_3 = *var_80_1
    int64_t* rbx_8 = var_80_1
    
    while (i_3 != 0)
        sub_1428a6780(i_3)
        i_3 = rbx_8[1]
        rbx_8 = &rbx_8[1]
    
    sub_1428a6780(var_80_1)

if (rbp_1 != 0)
    int64_t* i_4 = *rbp_1
    int64_t* rbx_9 = rbp_1
    
    while (i_4 != 0)
        sub_1428bf490(i_4)
        i_4 = rbx_9[1]
        rbx_9 = &rbx_9[1]
    
    sub_1428a6780(rbp_1)

sub_1428a6780(var_c0)
return zx.q(r15)
