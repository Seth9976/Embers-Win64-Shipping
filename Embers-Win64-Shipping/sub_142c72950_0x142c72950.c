// 函数: sub_142c72950
// 地址: 0x142c72950
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_138
int64_t rax_1 = __security_cookie ^ &var_138
void* r15 = *arg1
int32_t* rax_2 = sub_14284fc30(*(arg2 + 0x18))
int32_t* r14 = rax_2
int32_t result

if (rax_2 != 0)
    int32_t rax_3 = sub_142898c70(rax_2)
    result = sub_142c5b790(r15, rax_3)
    
    if (result == 0)
        int64_t* rax_4 = sub_14289a500(&data_1434ea7b0)
        int32_t rsi_1 = 0
        
        if (rax_3 s> 0)
            do
                int64_t* rax_5 = sub_142898ea0(r14, rsi_1)
                int32_t* var_f0 = nullptr
                int512_t zmm2_1 = sub_1428f6c70(rax_4, sub_1428a3930(rax_5), 0, 0x82031f)
                int64_t var_108
                int32_t rax_7 = sub_142899cf0(rax_4, 3, 0, &var_108)
                sub_142c5b900(r15, rsi_1, "Subject", var_108, zmm2_1, sx.q(rax_7))
                sub_142899cf0(rax_4, 1, 0, 0)
                int512_t zmm2_2 = sub_1428f6c70(rax_4, sub_1428a38f0(rax_5), 0, 0x82031f)
                int32_t rax_9 = sub_142899cf0(rax_4, 3, 0, &var_108)
                sub_142c5b900(r15, rsi_1, "Issuer", var_108, zmm2_2, sx.q(rax_9))
                sub_142899cf0(rax_4, 1, 0, 0)
                int512_t zmm2_3 = sub_1428b6f70(rax_4, "%lx", zx.q(sub_1428a3b50(rax_5)))
                int32_t rax_11 = sub_142899cf0(rax_4, 3, 0, &var_108)
                int512_t zmm2_4 =
                    sub_142c5b900(r15, rsi_1, "Version", var_108, zmm2_3, sx.q(rax_11))
                sub_142899cf0(rax_4, 1, 0, 0)
                int32_t* rax_12 = sub_14060ee10(rax_5)
                
                if (rax_12[1] == 0x102)
                    sub_14289a750(rax_4, &data_143642120)
                
                int32_t i = 0
                int64_t r14_1 = 0
                
                if (*rax_12 s> 0)
                    do
                        zmm2_4 = sub_1428b6f70(rax_4, "%02x", zx.q(*(*(rax_12 + 8) + r14_1)))
                        i += 1
                        r14_1 += 1
                    while (i s< *rax_12)
                
                int32_t rax_14 = sub_142899cf0(rax_4, 3, 0, &var_108)
                sub_142c5b900(r15, rsi_1, "Serial Number", var_108, zmm2_4, sx.q(rax_14))
                sub_142899cf0(rax_4, 1, 0, 0)
                int64_t* var_f8 = nullptr
                int32_t* rax_15 = sub_1428f2cf0()
                
                if (rax_15 != 0)
                    sub_1428a2c70(&var_f0, &var_f8, rax_5)
                    sub_142927be0(rax_4, var_f8, rax_15)
                    sub_1428f2c80(rax_15)
                    int64_t* rdx_10 = var_f8
                    
                    if (rdx_10 != 0)
                        int512_t zmm2_5 = sub_1428cdc60(rax_4, *rdx_10)
                        int32_t rax_16 = sub_142899cf0(rax_4, 3, 0, &var_108)
                        sub_142c5b900(r15, rsi_1, "Public Key Algorithm", var_108, zmm2_5, 
                            sx.q(rax_16))
                        sub_142899cf0(rax_4, 1, 0, 0)
                
                sub_142c72410(r15, rsi_1, sub_1428a3a80(rax_5))
                int512_t zmm2_6 = sub_1428e5890(rax_4, sub_14289a060(rax_5))
                int32_t rax_19 = sub_142899cf0(rax_4, 3, 0, &var_108)
                sub_142c5b900(r15, rsi_1, "Start date", var_108, zmm2_6, sx.q(rax_19))
                sub_142899cf0(rax_4, 1, 0, 0)
                int512_t zmm2_7 = sub_1428e5890(rax_4, sub_1406bc560(rax_5))
                int32_t rax_21 = sub_142899cf0(rax_4, 3, 0, &var_108)
                int512_t zmm2_8 =
                    sub_142c5b900(r15, rsi_1, "Expire date", var_108, zmm2_7, sx.q(rax_21))
                sub_142899cf0(rax_4, 1, 0, 0)
                int32_t* rax_22
                int64_t r8_6
                rax_22, r8_6 = sub_1428a3900(rax_5)
                
                if (rax_22 != 0)
                    int32_t rax_23 = sub_1406938b0(rax_22)
                    char var_60[0x20]
                    int32_t rax_33
                    int512_t zmm2_18
                    
                    if (rax_23 == 6)
                        int64_t* var_e8
                        int64_t* var_78
                        sub_1428970b0(sub_142896750(rax_22), &var_e8, &var_78, nullptr)
                        sub_1428f6370(rax_4, var_e8)
                        int32_t rax_35 = sub_142899cf0(rax_4, 3, 0, &var_108)
                        int512_t zmm2_19 = sub_142c5b900(r15, rsi_1, "RSA Public Key", var_108, 
                            zmm2_8, sx.q(rax_35))
                        sub_142899cf0(rax_4, 1, 0, 0)
                        int64_t* rdi_9 = var_e8
                        void* const var_118_20 = &data_1436b66c8
                        int512_t zmm2_20 =
                            sub_142c564b0(&var_60, 0x20, "%s(%s)", &data_1436b66cc, zmm2_19)
                        
                        if (rdi_9 != 0)
                            sub_1428f6370(rax_4, rdi_9)
                        
                        int64_t var_80
                        int32_t rax_36 = sub_142899cf0(rax_4, 3, 0, &var_80)
                        int512_t zmm2_21 =
                            sub_142c5b900(r15, rsi_1, &var_60, var_80, zmm2_20, sx.q(rax_36))
                        sub_142899cf0(rax_4, 1, 0, 0)
                        int64_t* rdi_10 = var_78
                        void* const var_118_22 = &data_1436b66d0
                        zmm2_18 = sub_142c564b0(&var_60, 0x20, "%s(%s)", &data_1436b66cc, zmm2_21)
                        
                        if (rdi_10 != 0)
                            sub_1428f6370(rax_4, rdi_10)
                        
                        int64_t var_70
                        rax_33 = sub_142899cf0(rax_4, 3, 0, &var_70)
                        zmm2_8 = sub_142c5b900(r15, rsi_1, &var_60, var_70, zmm2_18, sx.q(rax_33))
                        sub_142899cf0(rax_4, 1, 0, 0)
                    else if (rax_23 == 0x1c)
                        void* rax_29 = sub_142896670(rax_22)
                        int64_t* var_c0
                        int64_t* var_b0
                        int64_t* var_a0
                        sub_1428c1720(rax_29, &var_c0, &var_b0, &var_a0)
                        int64_t* var_90
                        sub_1428c1700(rax_29, &var_90, nullptr)
                        int64_t* rdi_5 = var_c0
                        void* const var_118_12 = &data_1436b66d4
                        int512_t zmm2_12 =
                            sub_142c564b0(&var_60, 0x20, "%s(%s)", &data_1436b66f0, zmm2_8)
                        
                        if (rdi_5 != 0)
                            sub_1428f6370(rax_4, rdi_5)
                        
                        int64_t var_b8
                        int32_t rax_30 = sub_142899cf0(rax_4, 3, 0, &var_b8)
                        int512_t zmm2_13 =
                            sub_142c5b900(r15, rsi_1, &var_60, var_b8, zmm2_12, sx.q(rax_30))
                        sub_142899cf0(rax_4, 1, 0, 0)
                        int64_t* rdi_6 = var_b0
                        void* const var_118_14 = &data_1436b66dc
                        int512_t zmm2_14 =
                            sub_142c564b0(&var_60, 0x20, "%s(%s)", &data_1436b66f0, zmm2_13)
                        
                        if (rdi_6 != 0)
                            sub_1428f6370(rax_4, rdi_6)
                        
                        int64_t var_a8
                        int32_t rax_31 = sub_142899cf0(rax_4, 3, 0, &var_a8)
                        int512_t zmm2_15 =
                            sub_142c5b900(r15, rsi_1, &var_60, var_a8, zmm2_14, sx.q(rax_31))
                        sub_142899cf0(rax_4, 1, 0, 0)
                        int64_t* rdi_7 = var_a0
                        void* const var_118_16 = &data_1436b66e0
                        int512_t zmm2_16 =
                            sub_142c564b0(&var_60, 0x20, "%s(%s)", &data_1436b66f0, zmm2_15)
                        
                        if (rdi_7 != 0)
                            sub_1428f6370(rax_4, rdi_7)
                        
                        int64_t var_98
                        int32_t rax_32 = sub_142899cf0(rax_4, 3, 0, &var_98)
                        int512_t zmm2_17 =
                            sub_142c5b900(r15, rsi_1, &var_60, var_98, zmm2_16, sx.q(rax_32))
                        sub_142899cf0(rax_4, 1, 0, 0)
                        int64_t* rdi_8 = var_90
                        char const* const var_118_18 = "pub_key"
                        zmm2_18 = sub_142c564b0(&var_60, 0x20, "%s(%s)", &data_1436b66f0, zmm2_17)
                        
                        if (rdi_8 != 0)
                            sub_1428f6370(rax_4, rdi_8)
                        
                        int64_t var_88
                        rax_33 = sub_142899cf0(rax_4, 3, 0, &var_88)
                        zmm2_8 = sub_142c5b900(r15, rsi_1, &var_60, var_88, zmm2_18, sx.q(rax_33))
                        sub_142899cf0(rax_4, 1, 0, 0)
                    else if (rax_23 == 0x74)
                        void* rax_24 = sub_1428966c0(rax_22)
                        int64_t* var_e0
                        int64_t* var_d8
                        int64_t* var_d0
                        sub_1428d58c0(rax_24, &var_e0, &var_d8, &var_d0)
                        int64_t* var_c8
                        sub_1428c1700(rax_24, &var_c8, nullptr)
                        zmm2_8 = sub_142c74810(r15, rax_4, rsi_1, &data_1436b66d8, 
                            sub_142c74810(r15, rax_4, rsi_1, &data_1436b66d8, 
                                sub_142c74810(r15, rax_4, rsi_1, &data_1436b66d8, 
                                    sub_142c74810(r15, rax_4, rsi_1, &data_1436b66d8, zmm2_8, 
                                        &data_1436b66d4, var_e0), 
                                    &data_1436b66dc, var_d8), 
                                &data_1436b66e0, var_d0), 
                            "pub_key", var_c8)
                    sub_1428965a0(rax_22)
                else
                    zmm2_8 = sub_142c64850(r15, "   Unable to load public key\n", r8_6, zmm2_8)
                
                int32_t* rax_38 = var_f0
                
                if (rax_38 != 0)
                    int32_t i_1 = 0
                    int64_t r14_3 = 0
                    
                    if (*rax_38 s> 0)
                        do
                            zmm2_8 = sub_1428b6f70(rax_4, "%02x:", zx.q(*(*(rax_38 + 8) + r14_3)))
                            rax_38 = var_f0
                            r14_3 += 1
                            i_1 += 1
                        while (i_1 s< *rax_38)
                    
                    int32_t rax_39 = sub_142899cf0(rax_4, 3, 0, &var_108)
                    sub_142c5b900(r15, rsi_1, "Signature", var_108, zmm2_8, sx.q(rax_39))
                    sub_142899cf0(rax_4, 1, 0, 0)
                
                int512_t zmm2_22 = sub_1428a3d40(rax_4, rax_5)
                int32_t rax_40 = sub_142899cf0(rax_4, 3, 0, &var_108)
                sub_142c5b900(r15, rsi_1, "Cert", var_108, zmm2_22, sx.q(rax_40))
                sub_142899cf0(rax_4, 1, 0, 0)
                r14 = rax_2
                rsi_1 += 1
            while (rsi_1 s< rax_3)
        
        sub_142899e70(rax_4)
        result = 0
else
    result = (r14 + 0x1b).d

__security_check_cookie(rax_1 ^ &var_138)
return result
