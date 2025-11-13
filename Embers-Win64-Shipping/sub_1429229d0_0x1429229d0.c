// 函数: sub_1429229d0
// 地址: 0x1429229d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x90)
int32_t rdi = 0
int32_t* r12 = nullptr

if (*(arg4 + 8) != 0)
    int64_t* rcx = *(arg4 + 0x10)
    
    if (rcx != 0 && *(arg4 + 0x18) != 0)
        int32_t rax = sub_142890560(rcx)
        int32_t var_88_1
        int32_t r8
        
        if (((rax - 0xa0) & 0xffffff9f) != 0 || rax == 0xc0)
            var_88_1 = 0x128
            r8 = 0x66
        else
            if (sub_142890560(*(arg4 + 8)) s<= 0x2710)
                int64_t* rax_4 = sub_142890500()
                void* rax_5 = sub_142890500()
                int64_t* rax_6 = sub_142890500()
                int64_t* rax_7 = sub_1428d8d60()
                
                if (rax_4 == 0 || rax_5 == 0 || rax_6 == 0 || rax_7 == 0)
                    sub_1428a5670(0xa, 0x71, 3, "crypto\dsa\dsa_ossl.c", 0x179)
                    rdi = -1
                else
                    int64_t* var_58
                    int64_t* arg_20
                    sub_1428eea10(arg3, &arg_20, &var_58)
                    
                    if (sub_142890300(arg_20) == 0 && sub_142890280(arg_20) == 0
                            && sub_1428909a0(arg_20, *(arg4 + 0x10)) s< 0
                            && sub_142890300(var_58) == 0 && sub_142890280(var_58) == 0
                            && sub_1428909a0(var_58, *(arg4 + 0x10)) s< 0)
                        if (sub_1428da4f0(rax_5, var_58, *(arg4 + 0x10), rax_7) == 0)
                            sub_1428a5670(0xa, 0x71, 3, "crypto\dsa\dsa_ossl.c", 0x179)
                            rdi = -1
                        else
                            int32_t rax_15 = arg2
                            int32_t r13_1 = rax s>> 3
                            
                            if (rax_15 s> r13_1)
                                rax_15 = r13_1
                            
                            if (sub_14288fa60(arg1, rax_15, rax_4) == 0)
                                sub_1428a5670(0xa, 0x71, 3, "crypto\dsa\dsa_ossl.c", 0x179)
                                rdi = -1
                            else
                                int32_t var_88
                                var_88.q = rax_7
                                
                                if (sub_1429082e0(rax_4, rax_4, rax_5, *(arg4 + 0x10), var_88) == 0)
                                    sub_1428a5670(0xa, 0x71, 3, "crypto\dsa\dsa_ossl.c", 0x179)
                                    rdi = -1
                                else
                                    var_88.q = rax_7
                                    
                                    if (sub_1429082e0(rax_5, arg_20, rax_5, *(arg4 + 0x10), var_88)
                                            == 0)
                                        sub_1428a5670(0xa, 0x71, 3, "crypto\dsa\dsa_ossl.c", 0x179)
                                        rdi = -1
                                    else
                                        int32_t* rax_19
                                        
                                        if ((*(arg4 + 0x30) & 1) != 0)
                                            rax_19 = sub_1428cc990(arg4 + 0x38, *(arg4 + 0x60), 
                                                *(arg4 + 8), rax_7)
                                            r12 = rax_19
                                        
                                        if ((*(arg4 + 0x30) & 1) != 0 && rax_19 == 0)
                                            sub_1428a5670(0xa, 0x71, 3, "crypto\dsa\dsa_ossl.c", 
                                                0x179)
                                            rdi = -1
                                        else
                                            int64_t* r9_4 = *(arg4 + 0x20)
                                            int64_t* rdx_8 = *(arg4 + 0x18)
                                            int64_t r10_1 = *(*(arg4 + 0x50) + 0x20)
                                            int64_t* rax_21 = *(arg4 + 8)
                                            int32_t rax_22
                                            
                                            if (r10_1 == 0)
                                                var_88.q = rax_5
                                                rax_22 = sub_142956950(rax_6, rdx_8, rax_4, r9_4, 
                                                    var_88, rax_21, rax_7, r12)
                                            else
                                                var_88.q = r9_4
                                                rax_22 = r10_1(arg4, rax_6, rdx_8, rax_4, var_88, 
                                                    rax_5, rax_21, rax_7, r12)
                                            
                                            if (rax_22 == 0)
                                                sub_1428a5670(0xa, 0x71, 3, 
                                                    "crypto\dsa\dsa_ossl.c", 0x179)
                                                rdi = -1
                                            else
                                                var_88.q = rax_7
                                                
                                                if (sub_14291a950(nullptr, rax_4, rax_6, 
                                                        *(arg4 + 0x10), var_88) == 0)
                                                    sub_1428a5670(0xa, 0x71, 3, 
                                                        "crypto\dsa\dsa_ossl.c", 0x179)
                                                    rdi = -1
                                                else
                                                    rdi.b = sub_1428909a0(rax_4, arg_20) == 0
                
                sub_1428d8ae0(rax_7)
                sub_1428901a0(rax_4)
                sub_1428901a0(rax_5)
                sub_1428901a0(rax_6)
                return zx.q(rdi)
            
            var_88_1 = 0x12d
            r8 = 0x67
        
        sub_1428a5670(0xa, 0x71, r8, "crypto\dsa\dsa_ossl.c", var_88_1)
        return 0xffffffff

sub_1428a5670(0xa, 0x71, 0x65, "crypto\dsa\dsa_ossl.c", 0x121)
return 0xffffffff
