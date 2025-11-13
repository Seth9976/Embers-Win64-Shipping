// 函数: sub_141067a50
// 地址: 0x141067a50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_a8
int64_t rax_1 = __security_cookie ^ &var_a8
AcquireSRWLockExclusive(arg1 + 0xc0)

if (*(arg1 + 0x109) == 0 && *(arg1 + 0x169) == 0 && (*(arg1 + 0x1f0) == 0 || *(arg1 + 0x1c9) == 0))
    int128_t* rbp_1 = nullptr
    *(arg1 + 0x100) = 0xc
    int32_t r12_1 = 0
    *(arg1 + 0x160) = 0xc
    *(arg1 + 0x1c0) = zx.q(*(arg1 + 0x1d4)) + 0xc
    int32_t r13_1 = *(arg1 + 0x110)
    int64_t var_88
    int64_t (* var_78)(int64_t* arg1, int64_t* arg2, int128_t* arg3)
    void** const var_58
    
    if (r13_1 != 0)
        do
            int128_t* rsi_1 = nullptr
            sub_141062d30(arg1 + 0xc8, 0x300, 0)
            
            if (*(arg1 + 0x109) == 0)
                int64_t rcx_2 = *(arg1 + 0x100)
                rsi_1 = *(arg1 + 0xd8) + rcx_2
                *(arg1 + 0x100) = rcx_2 + 0x300
            
            *rsi_1 = 0
            sub_141062d30(arg1 + 0xc8, 8, 0)
            
            if (*(arg1 + 0x109) == 0)
                int64_t rcx_4 = *(arg1 + 0x100)
                void* rdx_1 = *(arg1 + 0xd8)
                *(arg1 + 0x100) = rcx_4 + 8
                
                if (rdx_1 != neg.q(rcx_4) && *(rdx_1 + rcx_4) u> 0)
                    sub_141062d30(arg1 + 0xc8, 0x20, 0)
                    
                    if (*(arg1 + 0x109) == 0)
                        int64_t rcx_6 = *(arg1 + 0x100)
                        rbp_1 = *(arg1 + 0xd8) + rcx_6
                        *(arg1 + 0x100) = rcx_6 + 0x20
                    
                    void* rax_8 = sub_14104c4e0(*(arg1 + 8) + 0x1a0, rbp_1)
                    rbp_1 = nullptr
                    *(rsi_1 + 8) = *(rax_8 + 8)
            
            int32_t rax_9 = *(rsi_1 + 0x218)
            
            if (rax_9 != 0)
                sub_141069250(arg1 + 0xc8, &rsi_1[0x21], zx.q(rax_9) << 5, 1)
                int32_t i = 0
                
                if (*(rsi_1 + 0x218) u> 0)
                    do
                        sub_141062d30(arg1 + 0xc8, 4, 0)
                        
                        if (*(arg1 + 0x109) == 0)
                            int64_t rcx_12 = *(arg1 + 0x100)
                            rbp_1 = *(arg1 + 0xd8) + rcx_12
                            *(arg1 + 0x100) = rcx_12 + 4
                        
                        sub_141069250(arg1 + 0xc8, (zx.q(i) << 5) + rsi_1[0x21].q, zx.q(*rbp_1), 1)
                        i += 1
                        rbp_1 = nullptr
                    while (i u< *(rsi_1 + 0x218))
            
            HANDLE rbp_4 = *(rsi_1 + 0x18)
            
            if (rbp_4 != 0)
                sub_141062d30(arg1 + 0xc8, rbp_4, 0)
                
                if (*(arg1 + 0x109) == 0)
                    rsi_1[1].q = *(arg1 + 0xd8) + *(arg1 + 0x100)
                    *(arg1 + 0x100) += rbp_4
            
            HANDLE rbp_5 = *(rsi_1 + 0x28)
            
            if (rbp_5 != 0)
                sub_141062d30(arg1 + 0xc8, rbp_5, 0)
                
                if (*(arg1 + 0x109) == 0)
                    rsi_1[2].q = *(arg1 + 0xd8) + *(arg1 + 0x100)
                    *(arg1 + 0x100) += rbp_5
            
            HANDLE rbp_6 = *(rsi_1 + 0x38)
            
            if (rbp_6 != 0)
                sub_141062d30(arg1 + 0xc8, rbp_6, 0)
                
                if (*(arg1 + 0x109) == 0)
                    rsi_1[3].q = *(arg1 + 0xd8) + *(arg1 + 0x100)
                    *(arg1 + 0x100) += rbp_6
            
            HANDLE rbp_7 = *(rsi_1 + 0x48)
            
            if (rbp_7 != 0)
                sub_141062d30(arg1 + 0xc8, rbp_7, 0)
                
                if (*(arg1 + 0x109) == 0)
                    rsi_1[4].q = *(arg1 + 0xd8) + *(arg1 + 0x100)
                    *(arg1 + 0x100) += rbp_7
            
            HANDLE rbp_8 = *(rsi_1 + 0x58)
            
            if (rbp_8 != 0)
                sub_141062d30(arg1 + 0xc8, rbp_8, 0)
                
                if (*(arg1 + 0x109) == 0)
                    rsi_1[5].q = *(arg1 + 0xd8) + *(arg1 + 0x100)
                    *(arg1 + 0x100) += rbp_8
            
            sub_141062d30(arg1 + 0xc8, 8, 0)
            
            if (*(arg1 + 0x109) == 0)
                *(arg1 + 0x100) += 8
            
            sub_141062d30(arg1 + 0xc8, 8, 0)
            
            if (*(arg1 + 0x109) == 0)
                *(arg1 + 0x100) += 8
            
            rbp_1 = nullptr
            *(rsi_1 + 0x268) = 0
            rsi_1[0x26].q = 0
            
            if (*(arg1 + 0x109) != 0)
                break
            
            int32_t rax_21 = 1
            
            if (data_143f0f1d8 == 0)
                rax_21 = (1 << (data_1439c7a34).b) - 1
            
            if (rax_21 == *(rsi_1 + 0x258))
                var_88 = 0
                void*** var_68_1 = nullptr
                void* var_50_1 = arg1
                var_58 = &data_142da2668
                var_78 = sub_14105ea90
                sub_141012850(arg1, rsi_1, &var_88, &var_78)
                
                if (var_78 != 0)
                    void** const* rcx_23 = &var_58
                    
                    if (var_68_1 != 0)
                        rcx_23 = var_68_1
                    
                    (*rcx_23)[2](rcx_23)
            
            r12_1 += 1
        while (r12_1 u< r13_1)
    
    int32_t r15_1 = *(arg1 + 0x170)
    int32_t r14_1 = 0
    
    if (r15_1 != 0)
        do
            int128_t* rsi_3 = nullptr
            sub_141062d30(arg1 + 0x128, 0x60, 0)
            
            if (*(arg1 + 0x169) == 0)
                int64_t rcx_25 = *(arg1 + 0x160)
                rsi_3 = *(arg1 + 0x138) + rcx_25
                *(arg1 + 0x160) = rcx_25 + 0x60
            
            *rsi_3 = 0
            sub_141062d30(arg1 + 0x128, 8, 0)
            
            if (*(arg1 + 0x169) == 0)
                int64_t rcx_27 = *(arg1 + 0x160)
                void* rdx_14 = *(arg1 + 0x138)
                *(arg1 + 0x160) = rcx_27 + 8
                
                if (rdx_14 != neg.q(rcx_27) && *(rdx_14 + rcx_27) u> 0)
                    sub_141062d30(arg1 + 0x128, 0x20, 0)
                    
                    if (*(arg1 + 0x169) == 0)
                        int64_t rcx_29 = *(arg1 + 0x160)
                        rbp_1 = *(arg1 + 0x138) + rcx_29
                        *(arg1 + 0x160) = rcx_29 + 0x20
                    
                    *(rsi_3 + 8) = *(sub_14104c4e0(*(arg1 + 8) + 0x1a0, rbp_1) + 8)
            
            HANDLE rbp_10 = *(rsi_3 + 0x18)
            
            if (rbp_10 != 0)
                sub_141062d30(arg1 + 0x128, rbp_10, 0)
                
                if (*(arg1 + 0x169) == 0)
                    rsi_3[1].q = *(arg1 + 0x138) + *(arg1 + 0x160)
                    *(arg1 + 0x160) += rbp_10
            
            sub_141062d30(arg1 + 0x128, 8, 0)
            
            if (*(arg1 + 0x169) == 0)
                *(arg1 + 0x160) += 8
            
            sub_141062d30(arg1 + 0x128, 8, 0)
            
            if (*(arg1 + 0x169) == 0)
                *(arg1 + 0x160) += 8
            
            rbp_1 = nullptr
            rsi_3[3].q = 0
            *(rsi_3 + 0x28) = 0
            
            if (*(arg1 + 0x169) != 0)
                break
            
            int32_t rax_31 = 1
            
            if (data_143f0f1d8 == 0)
                rax_31 = (1 << (data_1439c7a34).b) - 1
            
            if (rax_31 == rsi_3[2].d)
                rsi_3[5].q = sub_141024c40(rsi_3)
                var_88 = 0
                void*** var_68_2 = nullptr
                void* var_50_2 = arg1
                var_58 = &data_142da2668
                var_78 = sub_14105ea80
                sub_141012700(arg1, rsi_3, &var_88, &var_78)
                
                if (var_78 != 0)
                    void** const* rcx_39 = &var_58
                    
                    if (var_68_2 != 0)
                        rcx_39 = var_68_2
                    
                    (*rcx_39)[2](rcx_39)
            
            r14_1 += 1
        while (r14_1 u< r15_1)

int64_t result = ReleaseSRWLockExclusive(arg1 + 0xc0)
__security_check_cookie(rax_1 ^ &var_a8)
return result
