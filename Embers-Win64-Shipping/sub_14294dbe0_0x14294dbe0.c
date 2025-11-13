// 函数: sub_14294dbe0
// 地址: 0x14294dbe0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0xc0)
int32_t rdi = 0
int64_t* r14 = nullptr
int64_t* rax = sub_142891ee0()
int64_t* rax_1 = sub_142891590(arg1)
int64_t* rax_2 = sub_14060aa60(rax_1)
int64_t rax_3 = sub_1427ec4a0(arg1)
int64_t* var_a8_1
__builtin_memset(&var_a8_1, 0, 0x18)
int128_t* rbx_1 = nullptr
int32_t rax_4 = sub_1428916c0(arg2)
int32_t* var_60 = nullptr
int32_t* var_68 = nullptr
int64_t* var_a0_1
void* var_98_1
int64_t rbp_1
int32_t var_d8_1

if (rax == 0 || rax_4 s<= 0)
    var_d8_1 = 0x8c
label_14294e207:
    sub_1428a5670(0x35, 0x67, 0x44, "crypto\sm2\sm2_crypt.c", var_d8_1)
    rbp_1 = 0
else
    int64_t rax_5 = sub_14294d440(rax_1)
    
    if (rax_5 == 0)
        var_d8_1 = 0x92
        goto label_14294e207
    
    var_a8_1 = sub_1428bfa80(rax_1)
    var_a0_1 = sub_1428bfa80(rax_1)
    int64_t* rax_8 = sub_1428d8d60()
    r14 = rax_8
    
    if (var_a8_1 == 0 || var_a0_1 == 0 || rax_8 == 0)
        sub_1428a5670(0x35, 0x67, 0x41, "crypto\sm2\sm2_crypt.c", 0x9a)
        rbp_1 = 0
    else
        sub_1428d8e50(rax_8)
        int64_t* rax_9 = sub_1428d8ba0(r14)
        int64_t* rax_10 = sub_1428d8ba0(r14)
        int64_t* rax_11 = sub_1428d8ba0(r14)
        int64_t* rax_12 = sub_1428d8ba0(r14)
        int64_t* rax_13 = sub_1428d8ba0(r14)
        
        if (rax_13 != 0)
            var_98_1 = sub_1428a6a70(rax_5 * 2)
            int64_t rax_15 = sub_1428a6a70(sx.q(rax_4))
            int32_t var_d8_3
            
            if (var_98_1 == 0 || rax_15 == 0)
                var_d8_3 = 0xae
            label_14294e1ce:
                sub_1428a5670(0x35, 0x67, 0x41, "crypto\sm2\sm2_crypt.c", var_d8_3)
                rbp_1 = rax_15
            else
                int64_t arg_28
                memset(arg_28, 0, *arg5)
                
                if (sub_1429198c0(rax_9, rax_2) != 0)
                    int64_t* var_d0_1 = r14
                    int32_t var_d8
                    var_d8.q = 0
                    
                    if (sub_1428bfa20(rax_1, var_a8_1, rax_9, 0, nullptr) == 0)
                        sub_1428a5670(0x35, 0x67, 0x10, "crypto\sm2\sm2_crypt.c", 0xbd)
                        rbp_1 = rax_15
                    else
                        var_d8.q = r14
                        
                        if (sub_1428bf6e0(rax_1, var_a8_1, rax_10, rax_12, var_d8) == 0)
                            sub_1428a5670(0x35, 0x67, 0x10, "crypto\sm2\sm2_crypt.c", 0xbd)
                            rbp_1 = rax_15
                        else
                            int64_t* var_d0_2 = r14
                            var_d8.q = rax_9
                            
                            if (sub_1428bfa20(rax_1, var_a0_1, nullptr, rax_3, var_d8) == 0)
                                sub_1428a5670(0x35, 0x67, 0x10, "crypto\sm2\sm2_crypt.c", 0xbd)
                                rbp_1 = rax_15
                            else
                                var_d8.q = r14
                                
                                if (sub_1428bf6e0(rax_1, var_a0_1, rax_11, rax_13, var_d8) == 0)
                                    sub_1428a5670(0x35, 0x67, 0x10, "crypto\sm2\sm2_crypt.c", 0xbd)
                                    rbp_1 = rax_15
                                else
                                    int32_t rax_22 = sub_14288fbc0(rax_11, var_98_1, rax_5.d)
                                    int32_t rax_23
                                    
                                    if (rax_22 s>= 0)
                                        rax_23 = sub_14288fbc0(rax_13, rax_5 + var_98_1, rax_5.d)
                                    
                                    if (rax_22 s< 0 || rax_23 s< 0)
                                        sub_1428a5670(0x35, 0x67, 0x44, "crypto\sm2\sm2_crypt.c", 
                                            0xc3)
                                        rbp_1 = rax_15
                                    else
                                        int128_t* rax_24 = sub_1428a6a70(arg4)
                                        rbx_1 = rax_24
                                        
                                        if (rax_24 == 0)
                                            var_d8_3 = 0xc9
                                            goto label_14294e1ce
                                        
                                        int32_t rax_25 = sub_14294c550(rbx_1, arg4, var_98_1, 
                                            rax_5 * 2, 0, 0, arg2)
                                        
                                        if (rax_25 != 0)
                                            void* i = nullptr
                                            
                                            if (arg4 != 0)
                                                if (arg4 u>= 0x40 && (rbx_1 u> arg3 - 1 + arg4
                                                        || arg4 - 1 + rbx_1 u< arg3))
                                                    int128_t* rax_28 = rbx_1
                                                    int128_t* rcx_28 = arg3 - rbx_1
                                                    
                                                    do
                                                        int128_t zmm0_1 = *rax_28
                                                        i += 0x40
                                                        int128_t zmm1_1 = *(rcx_28 + rax_28)
                                                        rax_28 = &rax_28[4]
                                                        rax_28[-4] = zmm1_1 ^ zmm0_1
                                                        rax_28[-3] ^= *(rcx_28 + rax_28 - 0x30)
                                                        rax_28[-2] ^= *(rcx_28 + rax_28 - 0x20)
                                                        rax_28[-1] ^= *(rcx_28 + rax_28 - 0x10)
                                                    while (i != (arg4 & 0xffffffffffffffc0))
                                                
                                                if (i != arg4)
                                                    void* rcx_29 = i + rbx_1
                                                    void* i_2 = arg4 - i
                                                    void* i_1
                                                    
                                                    do
                                                        *rcx_29 ^= *(rcx_29 + arg3 - rbx_1)
                                                        rcx_29 += 1
                                                        i_1 = i_2
                                                        i_2 -= 1
                                                    while (i_1 != 1)
                                            
                                            if (sub_142891980(rax, arg2) == 0)
                                                rbp_1 = rax_15
                                                sub_1428a5670(0x35, 0x67, 6, 
                                                    "crypto\sm2\sm2_crypt.c", 0xdc)
                                            else if (sub_142891c10(rax, var_98_1, rax_5) == 0)
                                                rbp_1 = rax_15
                                                sub_1428a5670(0x35, 0x67, 6, 
                                                    "crypto\sm2\sm2_crypt.c", 0xdc)
                                            else if (sub_142891c10(rax, arg3, arg4) == 0)
                                                rbp_1 = rax_15
                                                sub_1428a5670(0x35, 0x67, 6, 
                                                    "crypto\sm2\sm2_crypt.c", 0xdc)
                                            else
                                                rbp_1 = rax_15
                                                
                                                if (sub_142891c10(rax, rax_5 + var_98_1, rax_5)
                                                        == 0)
                                                    sub_1428a5670(0x35, 0x67, 6, 
                                                        "crypto\sm2\sm2_crypt.c", 0xdc)
                                                else if (sub_1428917e0(rax, rbp_1, nullptr) == 0)
                                                    sub_1428a5670(0x35, 0x67, 6, 
                                                        "crypto\sm2\sm2_crypt.c", 0xdc)
                                                else
                                                    int64_t* var_78 = rax_10
                                                    int64_t* var_70_1 = rax_12
                                                    var_68 = sub_1428c35d0()
                                                    int32_t* rax_38 = sub_1428c35d0()
                                                    var_60 = rax_38
                                                    
                                                    if (var_68 == 0 || rax_38 == 0)
                                                        sub_1428a5670(0x35, 0x67, 0x41, 
                                                            "crypto\sm2\sm2_crypt.c", 0xe6)
                                                    else
                                                        int32_t rax_39 =
                                                            sub_1428e61a0(var_68, rbp_1, rax_4)
                                                        int32_t rax_40
                                                        
                                                        if (rax_39 != 0)
                                                            rax_40 =
                                                                sub_1428e61a0(var_60, rbx_1, arg4.d)
                                                        
                                                        if (rax_39 == 0 || rax_40 == 0)
                                                            sub_1428a5670(0x35, 0x67, 0x44, 
                                                                "crypto\sm2\sm2_crypt.c", 0xeb)
                                                        else
                                                            int32_t rax_41 = sub_1428c65a0(&var_78, 
                                                                &arg_28, &data_143545ef0)
                                                            
                                                            if (rax_41 s>= 0)
                                                                rdi = 1
                                                                *arg5 = sx.q(rax_41)
                                                            else
                                                                sub_1428a5670(0x35, 0x67, 0x44, 
                                                                    "crypto\sm2\sm2_crypt.c", 0xf2)
                                        else
                                            sub_1428a5670(0x35, 0x67, rax_25 + 6, 
                                                "crypto\sm2\sm2_crypt.c", 0xd0)
                                            rbp_1 = rax_15
                else
                    sub_1428a5670(0x35, 0x67, 0x44, "crypto\sm2\sm2_crypt.c", 0xb5)
                    rbp_1 = rax_15
        else
            sub_1428a5670(0x35, 0x67, (rax_13 + 3).d, "crypto\sm2\sm2_crypt.c", 0xa6)
            rbp_1 = 0
sub_1428c3460(var_60)
sub_1428c3460(var_68)
sub_1428a6780(rbx_1)
sub_1428a6780(var_98_1)
sub_1428a6780(rbp_1)
sub_142891ea0(rax)
sub_1428d8ae0(r14)
sub_1428bf6a0(var_a8_1)
sub_1428bf6a0(var_a0_1)
return zx.q(rdi)
