// 函数: sub_14293d4a0
// 地址: 0x14293d4a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x120)
void var_158
int64_t rax_1 = __security_cookie ^ &var_158
int32_t r15 = 0
int32_t rsi = arg3
int64_t* var_128 = nullptr
int64_t* var_100 = nullptr
int64_t* var_110 = nullptr
int64_t* r13 = nullptr
int64_t var_f8 = 0
int32_t rbp = 0x20
int64_t* r12 = nullptr
int64_t* rbx_1

if (arg2 != 0)
    int64_t* rax_3 = sub_1428d8d60()
    r13 = rax_3
    
    if (rax_3 != 0)
        if (sub_14289a070(arg2) == 0)
            int32_t rax_14 = opus_repacketizer_get_nb_frames(sub_140687ad0(arg2))
            
            if (rax_14 == 0x197)
                r12 = 1
            
            int64_t* rax_15 = sub_142890500()
            
            if (rax_15 == 0)
            label_14293da9d:
                rbx_1 = var_128
                r12 = rax_15
                sub_1428a5670(0x10, 0x95, 0x41, "crypto\ec\eck_prn.c", 0xd6)
            else
                int64_t* rax_16 = sub_142890500()
                var_128 = rax_16
                
                if (rax_16 == 0)
                    goto label_14293da9d
                
                int64_t* rax_17 = sub_142890500()
                var_100 = rax_17
                
                if (rax_17 == 0)
                    goto label_14293da9d
                
                int32_t var_138
                var_138.q = r13
                int32_t rax_18 = sub_1428bef30(arg2, rax_15, var_128, rax_17, var_138)
                
                if (rax_18 != 0)
                    int64_t* rax_19 = sub_14060aa50(arg2)
                    
                    if (rax_19 != 0)
                        int64_t* rax_20 = sub_14060aa60(arg2)
                        int64_t* rax_21 = sub_142891590(arg2)
                        int32_t rax_22
                        int64_t* rax_24
                        
                        if (rax_20 != 0)
                            rax_22 = sub_1408cb900(arg2)
                            var_138.q = rax_3
                            rax_24 = sub_14296c8a0(arg2, rax_19, rax_22, nullptr, var_138)
                            var_110 = rax_24
                        
                        if (rax_20 == 0 || rax_24 == 0)
                            rbp = 0x10
                        label_14293d736:
                            r13 = rax_3
                            r12 = rax_15
                            rbx_1 = var_128
                            sub_1428a5670(0x10, 0x95, rbp, "crypto\ec\eck_prn.c", 0xd6)
                        else
                            int64_t rax_25 = sub_1428a38f0(arg2)
                            
                            if (rax_25 != 0)
                                var_f8 = sub_14289a060(arg2)
                            
                            if (sub_14289a2c0(arg1, rsi, 0x80) == 0)
                                goto label_14293d736
                            
                            if (sub_1428b6f70(arg1, "Field Type: %s\n", sub_1428a9620(rax_14))
                                    s<= 0)
                                goto label_14293d736
                            
                            char const* const rdx_6
                            
                            if (r12.d != 0)
                                int32_t rax_30 = sub_1428eeb80(arg2)
                                
                                if (rax_30 == 0)
                                    goto label_14293d736
                                
                                if (sub_14289a2c0(arg1, rsi, 0x80) == 0)
                                    goto label_14293d736
                                
                                r12 = rax_15
                                
                                if (sub_1428b6f70(arg1, "Basis Type: %s\n", sub_1428a9620(rax_30))
                                        s<= 0)
                                    goto label_14293daaf
                                
                                rdx_6 = "Polynomial:"
                                goto label_14293d83d
                            
                            r12 = rax_15
                            rdx_6 = "Prime:"
                        label_14293d83d:
                            int32_t var_138_2 = rsi
                            
                            if (sub_14293b8e0(arg1, rdx_6, r12, 0) == 0)
                            label_14293daaf:
                                r13 = rax_3
                                rbx_1 = var_128
                                sub_1428a5670(0x10, 0x95, rbp, "crypto\ec\eck_prn.c", 0xd6)
                            else
                                rbx_1 = var_128
                                int32_t var_138_3 = rsi
                                
                                if (sub_14293b8e0(arg1, "A:   ", rbx_1, 0) == 0)
                                    r13 = rax_3
                                    sub_1428a5670(0x10, 0x95, rbp, "crypto\ec\eck_prn.c", 0xd6)
                                else
                                    int32_t var_138_4 = rsi
                                    
                                    if (sub_14293b8e0(arg1, "B:   ", var_100, 0) == 0)
                                        r13 = rax_3
                                        sub_1428a5670(0x10, 0x95, rbp, "crypto\ec\eck_prn.c", 0xd6)
                                    else
                                        int32_t var_138_5 = rsi
                                        char const (* rdx_7)[0x18]
                                        
                                        if (rax_22 != 2)
                                            rdx_7 = data_143b86860
                                            
                                            if (rax_22 != 4)
                                                rdx_7 = data_143b86868
                                        else
                                            rdx_7 = data_143b86858
                                        
                                        if (sub_14293b8e0(arg1, rdx_7, var_110, 0) == 0)
                                            r13 = rax_3
                                            sub_1428a5670(0x10, 0x95, rbp, "crypto\ec\eck_prn.c", 
                                                0xd6)
                                        else
                                            int32_t var_138_6 = rsi
                                            
                                            if (sub_14293b8e0(arg1, "Order: ", rax_20, 0) == 0)
                                                r13 = rax_3
                                                sub_1428a5670(0x10, 0x95, rbp, 
                                                    "crypto\ec\eck_prn.c", 0xd6)
                                            else
                                                int32_t rax_40
                                                
                                                if (rax_21 != 0)
                                                    int32_t var_138_7 = rsi
                                                    rax_40 =
                                                        sub_14293b8e0(arg1, "Cofactor: ", rax_21, 0)
                                                
                                                if (rax_21 != 0 && rax_40 == 0)
                                                    r13 = rax_3
                                                    sub_1428a5670(0x10, 0x95, rbp, 
                                                        "crypto\ec\eck_prn.c", 0xd6)
                                                else if (rax_25 == 0)
                                                    r13 = rax_3
                                                    r15 = 1
                                                else
                                                    char var_d8
                                                    
                                                    if (rsi s<= 0)
                                                        rsi = 0
                                                    label_14293d982:
                                                        
                                                        if (sub_1428b6f70(arg1, "%s", "Seed:")
                                                                s<= 0)
                                                            r13 = rax_3
                                                            sub_1428a5670(0x10, 0x95, rbp, 
                                                                "crypto\ec\eck_prn.c", 0xd6)
                                                        else
                                                            void* rbx_5 = nullptr
                                                            
                                                            if (var_f8 != 0)
                                                                do
                                                                    if (rbx_5 == rbx_5 u/ 0xf * 0xf)
                                                                        var_d8 = 0xa
                                                                        void var_d7
                                                                        memset(&var_d7, 0x20, sx.q(rsi + 4))
                                                                        
                                                                        if (
                                                                                sub_14289aa40(arg1, &var_d8, rsi + 5)
                                                                                s<= 0)
                                                                            goto label_14293d736
                                                                    
                                                                    if (sub_1428b6f70(arg1, "%02x%s", 
                                                                            zx.q(*(rbx_5 + rax_25))) s<= 0)
                                                                        goto label_14293d736
                                                                    
                                                                    rbx_5 += 1
                                                                while (rbx_5 u< var_f8)
                                                            
                                                            r13 = rax_3
                                                            r12 = rax_15
                                                            rbx_1 = var_128
                                                            
                                                            if (
                                                                    sub_14289aa40(arg1, &data_14370209c, 1)
                                                                    s<= 0)
                                                                sub_1428a5670(0x10, 0x95, rbp, 
                                                                    "crypto\ec\eck_prn.c", 0xd6)
                                                            else
                                                                r15 = 1
                                                    else
                                                        if (rsi s> 0x80)
                                                            rsi = 0x80
                                                        
                                                        memset(&var_d8, 0x20, sx.q(rsi))
                                                        
                                                        if (sub_14289aa40(arg1, &var_d8, rsi) s> 0)
                                                            goto label_14293d982
                                                        
                                                        r13 = rax_3
                                                        sub_1428a5670(0x10, 0x95, rbp, 
                                                            "crypto\ec\eck_prn.c", 0xd6)
                    else
                        r12 = rax_15
                        rbx_1 = var_128
                        sub_1428a5670(0x10, 0x95, (&rax_19[2]).d, "crypto\ec\eck_prn.c", 0xd6)
                else
                    rbx_1 = var_128
                    r12 = rax_15
                    sub_1428a5670(0x10, 0x95, rax_18 + 0x10, "crypto\ec\eck_prn.c", 0xd6)
        else if (sub_14289a2c0(arg1, rsi, 0x80) == 0)
            rbx_1 = nullptr
            sub_1428a5670(0x10, 0x95, rbp, "crypto\ec\eck_prn.c", 0xd6)
        else
            int32_t rax_6 = sub_140611e80(arg2)
            
            if (rax_6 == 0)
                rbx_1 = nullptr
                sub_1428a5670(0x10, 0x95, rbp, "crypto\ec\eck_prn.c", 0xd6)
            else
                int32_t rax_8
                int64_t r8_2
                rax_8, r8_2 = sub_1428b6f70(arg1, "ASN1 OID: %s", sub_1428a9620(rax_6))
                
                if (rax_8 s<= 0)
                    rbx_1 = nullptr
                    sub_1428a5670(0x10, 0x95, rbp, "crypto\ec\eck_prn.c", 0xd6)
                else if (sub_1428b6f70(arg1, &data_14370209c, r8_2) s<= 0)
                    rbx_1 = nullptr
                    sub_1428a5670(0x10, 0x95, rbp, "crypto\ec\eck_prn.c", 0xd6)
                else
                    int64_t rax_10 = sub_1428c02e0(rax_6)
                    
                    if (rax_10 == 0)
                        rbx_1 = nullptr
                        r15 = 1
                    else if (sub_14289a2c0(arg1, rsi, 0x80) == 0)
                        rbx_1 = nullptr
                        sub_1428a5670(0x10, 0x95, rbp, "crypto\ec\eck_prn.c", 0xd6)
                    else
                        rbx_1 = nullptr
                        
                        if (sub_1428b6f70(arg1, "NIST CURVE: %s\n", rax_10) s<= 0)
                            sub_1428a5670(0x10, 0x95, rbp, "crypto\ec\eck_prn.c", 0xd6)
                        else
                            r15 = 1
    else
        rbx_1 = nullptr
        sub_1428a5670(0x10, 0x95, (rax_3 + 0x41).d, "crypto\ec\eck_prn.c", 0xd6)
else
    rbx_1 = nullptr
    sub_1428a5670(0x10, 0x95, 0x43, "crypto\ec\eck_prn.c", 0xd6)

sub_1428901a0(r12)
sub_1428901a0(rbx_1)
sub_1428901a0(var_100)
sub_1428901a0(var_110)
sub_1428d8ae0(r13)
__security_check_cookie(rax_1 ^ &var_158)
return zx.q(r15)
