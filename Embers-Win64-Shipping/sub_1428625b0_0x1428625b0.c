// 函数: sub_1428625b0
// 地址: 0x1428625b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x110)
void var_138
int64_t rax_1 = __security_cookie ^ &var_138
int64_t r14 = arg3
int64_t* rax_3 = sub_1428bcf50(0x40c, nullptr)
uint64_t result

if (rax_3 != 0)
    int32_t rax_4 = sub_1428916c0(arg2)
    
    if (rax_4 s>= 0)
        void* const rdi_1 = &data_1434dc260
        int32_t r12_1 = arg5
        void* const r13_1 = &data_1434dc260
        int64_t rax_5 = sx.q(rax_4)
        
        if (arg4 != 0)
            r13_1 = arg4
        
        if (arg4 == 0)
            r12_1 = rax_5.d
        
        int64_t var_e8 = rax_5
        
        if (r14 == 0)
            goto label_142862734
        
        int64_t* rax_6 = sub_142891ee0()
        
        if (rax_6 == 0)
        label_142862870:
            sub_142856580(arg1, 0x50, 0x24f, 0x44, "ssl\tls13_enc.c", 0xa9)
            sub_142891ea0(rax_6)
            sub_1428bcda0(rax_3)
            result = 0
        else
            if (sub_1428919c0(rax_6, arg2, nullptr) s<= 0)
                goto label_142862870
            
            void var_98
            
            if (sub_1428918e0(rax_6, &var_98, nullptr) s<= 0)
                goto label_142862870
            
            sub_142891ea0(rax_6)
            int64_t rax_9 = var_e8
            int64_t var_f8_1 = rax_9
            int32_t var_110
            var_110.q = &var_98
            void var_d8
            
            if (sub_1428628c0(arg1, arg2, r14, "derived", 7, var_110, rax_9, &var_d8) == 0)
                sub_1428bcda0(rax_3)
                result = 0
            else
                r14 = var_e8
                rdi_1 = &var_d8
            label_142862734:
                int32_t result_1
                
                if (sub_1428bd580(rax_3) s<= 0)
                    result_1 = 0
                    sub_142856580(arg1, 0x50, 0x24f, 0x44, "ssl\tls13_enc.c", 0xca)
                else
                    result_1 = 1
                    var_110.q = 0
                    int64_t var_118
                    var_118.d = 1
                    
                    if (sub_1428bcb30(rax_3, 0xffffffff, 0x400, 0x1007, var_118.d, var_110) s<= 0)
                        result_1 = 0
                        sub_142856580(arg1, 0x50, 0x24f, 0x44, "ssl\tls13_enc.c", 0xca)
                    else
                        var_110.q = arg2
                        var_118.d = 0
                        
                        if (sub_1428bcb30(rax_3, 0xffffffff, 0x400, 0x1003, var_118.d, var_110)
                                s<= 0)
                            result_1 = 0
                            sub_142856580(arg1, 0x50, 0x24f, 0x44, "ssl\tls13_enc.c", 0xca)
                        else
                            var_110.q = r13_1
                            var_118.d = r12_1
                            
                            if (sub_1428bcb30(rax_3, 0xffffffff, 0x400, 0x1005, var_118.d, var_110)
                                    s<= 0)
                                result_1 = 0
                                sub_142856580(arg1, 0x50, 0x24f, 0x44, "ssl\tls13_enc.c", 0xca)
                            else
                                var_110.q = rdi_1
                                var_118.d = r14.d
                                
                                if (sub_1428bcb30(rax_3, 0xffffffff, 0x400, 0x1004, var_118.d, 
                                        var_110) s<= 0)
                                    result_1 = 0
                                    sub_142856580(arg1, 0x50, 0x24f, 0x44, "ssl\tls13_enc.c", 0xca)
                                else if (sub_1428bd400(rax_3, arg6, &var_e8) s<= 0)
                                    result_1 = 0
                                    sub_142856580(arg1, 0x50, 0x24f, 0x44, "ssl\tls13_enc.c", 0xca)
                
                sub_1428bcda0(rax_3)
                
                if (rdi_1 == &var_d8)
                    sub_1428b8960(&var_d8, var_e8)
                
                result = zx.q(result_1)
    else
        sub_142856580(arg1, 0x50, 0x24f, 0x44, "ssl\tls13_enc.c", 0x94)
        result = 0
else
    sub_142856580(arg1, 0x50, 0x24f, 0x44, "ssl\tls13_enc.c", 0x8c)
    result = 0

__security_check_cookie(rax_1 ^ &var_138)
return result
