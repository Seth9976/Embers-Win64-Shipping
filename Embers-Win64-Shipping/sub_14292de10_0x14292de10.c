// 函数: sub_14292de10
// 地址: 0x14292de10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0xd0)
void var_108
int64_t rax_1 = __security_cookie ^ &var_108
int32_t rbx = 0
int64_t* result_4 = arg2
int64_t* result_2 = nullptr
int64_t* result_3 = nullptr
int64_t* result_1 = nullptr
int32_t* var_d0 = nullptr
int64_t* r15 = nullptr
int32_t* var_a8 = nullptr
int32_t* rsi = nullptr
int32_t* rdi = nullptr
void** r14 = nullptr
int64_t* result

if (arg1 == 0)
    int32_t rdx = (arg1 + 0x69).d
    sub_1428a5670(0x21, rdx, rdx + 0x26, "crypto\pkcs7\pk7_doit.c", 0xce)
    result = nullptr
else if (*(arg1 + 0x20) != 0)
    int32_t rax_2 = sub_1428a96d0(*(arg1 + 0x18))
    *(arg1 + 0xc) = 0
    int32_t var_e8_3
    int32_t r8_2
    
    if (rax_2 != 0x15)
        void* rcx_7
        
        if (rax_2 == 0x16)
            void* rcx_11 = *(arg1 + 0x20)
            rdi = *(rcx_11 + 8)
            rcx_7 = *(rcx_11 + 0x28)
        label_14292df8e:
            var_a8 = sub_14292e4c0(rcx_7)
        else if (rax_2 == 0x17)
            void* rax_5 = *(arg1 + 0x20)
            var_d0 = *(rax_5 + 8)
            void* rcx_10 = *(rax_5 + 0x10)
            rsi = *(rcx_10 + 0x18)
            r14 = *(rcx_10 + 8)
            
            if (rsi == 0)
                var_e8_3 = 0xf7
            label_14292df36:
                r8_2 = 0x74
            label_14292df4b:
                sub_1428a5670(0x21, 0x69, r8_2, "crypto\pkcs7\pk7_doit.c", var_e8_3)
                goto label_14292e37f
        else
            if (rax_2 != 0x18)
                if (rax_2 != 0x19)
                    var_e8_3 = 0x102
                    r8_2 = 0x70
                    goto label_14292df4b
                
                void* rcx_6 = *(arg1 + 0x20)
                r15 = *(rcx_6 + 8)
                rcx_7 = *(rcx_6 + 0x10)
                goto label_14292df8e
            
            void* rax_3 = *(arg1 + 0x20)
            rdi = *(rax_3 + 8)
            void* rax_4 = *(rax_3 + 0x28)
            var_d0 = *(rax_3 + 0x30)
            rsi = *(rax_4 + 0x18)
            r14 = *(rax_4 + 8)
            
            if (rsi == 0)
                var_e8_3 = 0xee
                goto label_14292df36
    
    if (sub_142898c70(rdi) s> 0)
        int32_t rax_10
        
        do
            if (sub_14292d770(&result_2, sub_142898ea0(rdi, rbx)) == 0)
                goto label_14292e01a
            
            rbx += 1
            rax_10 = sub_142898c70(rdi)
        while (rbx s< rax_10)
        result_1 = result_2
    
    if (r15 == 0)
        goto label_14292dfec
    
    if (sub_14292d770(&result_2, r15) == 0)
    label_14292e01a:
        result_1 = result_2
    label_14292e37f:
        sub_142899f50(result_1)
        sub_142899f50(result_3)
        result = nullptr
    else
        result_1 = result_2
    label_14292dfec:
        
        if (rsi != 0)
            int64_t* result_5 = sub_14289a500(&data_14354acb0)
            result_3 = result_5
            
            if (result_5 == 0)
                var_e8_3 = 0x114
                r8_2 = (&result_5[4]).d
                goto label_14292df4b
            
            int64_t* var_b8
            sub_142899cf0(result_5, 0x81, 0, &var_b8)
            result_2.d = sub_140611e60(rsi)
            int32_t rax_13 = sub_140611e40(rsi)
            *r14 = sub_1428a9570(sub_1428912b0(rsi))
            void var_a0
            int32_t rax_16
            
            if (rax_13 s> 0)
                rax_16 = sub_142897af0(&var_a0, zx.q(rax_13))
            
            if (rax_13 s> 0 && rax_16 s<= 0)
                goto label_14292e37f
            
            int32_t var_e8
            var_e8.q = 0
            
            if (sub_142892480(var_b8, rsi, nullptr, 0, var_e8, 1) s<= 0)
                goto label_14292e37f
            
            void var_88
            
            if (sub_142892230(var_b8, &var_88) s<= 0)
                goto label_14292e37f
            
            var_e8.q = &var_a0
            
            if (sub_142892480(var_b8, nullptr, nullptr, &var_88, var_e8, 1) s<= 0)
                goto label_14292e37f
            
            if (rax_13 s> 0)
                int32_t* rax_20 = r14[1]
                
                if (rax_20 == 0)
                    rax_20 = sub_1428c3640()
                    r14[1] = rax_20
                    
                    if (rax_20 == 0)
                        goto label_14292e37f
                
                if (sub_142891110(var_b8, rax_20) s< 0)
                    goto label_14292e37f
            
            int32_t* rsi_1 = var_d0
            int32_t r14_1 = 0
            
            if (sub_142898c70(rsi_1) s> 0)
                int32_t rax_31
                
                do
                    void* rax_23 = sub_142898ea0(rsi_1, r14_1)
                    int64_t rdi_1 = 0
                    int32_t var_c0_1 = 0
                    int32_t* rax_24 = sub_1428a38c0(*(rax_23 + 0x20))
                    
                    if (rax_24 == 0)
                        goto label_14292e37f
                    
                    int64_t* rax_25 = sub_1428bcf30(rax_24, nullptr)
                    
                    if (rax_25 == 0)
                        goto label_14292e37f
                    
                    if (sub_1428bd980(rax_25) s> 0)
                        int32_t var_e0_2
                        var_e0_2.q = rax_23
                        
                        if (sub_1428bcb30(rax_25, 0xffffffff, 0x100, 3, 0, var_e0_2) s> 0)
                            int64_t rsi_2 = sx.q(result_2.d)
                            int32_t var_e8_4
                            var_e8_4.q = rsi_2
                            int64_t var_b0
                            
                            if (sub_1428bd830(rax_25, 0, &var_b0, &var_88, var_e8_4) s> 0)
                                int64_t rax_29 = sub_1428a6730(var_b0)
                                rdi_1 = rax_29
                                
                                if (rax_29 != 0)
                                    var_e8_4.q = rsi_2
                                    
                                    if (sub_1428bd830(rax_25, rdi_1, &var_b0, &var_88, var_e8_4)
                                            s> 0)
                                        sub_1428f2e40(*(rax_23 + 0x18), rdi_1, var_b0.d)
                                        rdi_1 = 0
                                        var_c0_1 = 1
                                else
                                    sub_1428a5670((rax_29 + 0x21).d, 0x84, (rax_29 + 0x41).d, 
                                        "crypto\pkcs7\pk7_doit.c", 0x78)
                            
                            rsi_1 = var_d0
                        else
                            sub_1428a5670(0x21, 0x84, 0x98, "crypto\pkcs7\pk7_doit.c", 0x6e)
                    
                    sub_1428bcda0(rax_25)
                    sub_1428a6780(rdi_1)
                    
                    if (var_c0_1 u<= 0)
                        goto label_14292e37f
                    
                    r14_1 += 1
                    rax_31 = sub_142898c70(rsi_1)
                while (r14_1 s< rax_31)
            
            sub_1428b8960(&var_88, sx.q(result_2.d))
            
            if (result_1 != 0)
                sub_14289a6f0(result_1, result_3)
            else
                result_1 = result_3
        
        if (result_4 == 0)
            int32_t rax_32 = sub_1428a96d0(*(arg1 + 0x18))
            int32_t rax_33
            
            if (rax_32 == 0x16)
                rax_33 = sub_14292e670(arg1, rax_32 - 0x14, 0)
            
            if (rax_32 != 0x16 || rax_33 == 0)
                int32_t rdx_16
                
                if (var_a8 != 0)
                    rdx_16 = *var_a8
                
                if (var_a8 == 0 || rdx_16 s<= 0)
                    int64_t* result_6 = sub_14289a500(&data_1434ea7b0)
                    result_3 = nullptr
                    result_4 = result_6
                    
                    if (result_6 == 0)
                        goto label_14292e37f
                    
                    sub_142899cf0(result_6, 0x82, 0, 0)
                else
                    result_4 = sub_14289b510(*(var_a8 + 8), rdx_16)
            else
                result_4 = sub_14289a500(&data_14354abe0)
            
            result_3 = nullptr
            
            if (result_4 == 0)
                goto label_14292e37f
        
        if (result_1 == 0)
            result_1 = result_4
        else
            sub_14289a6f0(result_1, result_4)
        
        result = result_1
else
    sub_1428a5670(0x21, 0x69, 0x7a, "crypto\pkcs7\pk7_doit.c", 0xdc)
    result = nullptr

__security_check_cookie(rax_1 ^ &var_108)
return result
