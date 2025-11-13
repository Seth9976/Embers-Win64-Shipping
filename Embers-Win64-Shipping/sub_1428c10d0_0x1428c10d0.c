// 函数: sub_1428c10d0
// 地址: 0x1428c10d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int32_t rbp = 0
int64_t* rdi = nullptr
int64_t* rsi = nullptr

if (arg1 != 0)
    int64_t* rcx = *(arg1 + 0x18)
    
    if (rcx != 0)
        int64_t* rdx_1 = *(arg1 + 0x20)
        
        if (rdx_1 != 0)
            if (sub_1428bf8a0(rcx, rdx_1) == 0)
                int64_t* rax_1 = sub_1428d8d60()
                rdi = rax_1
                
                if (rax_1 != 0)
                    int64_t* rax_2 = sub_1428bfa80(*(arg1 + 0x18))
                    rsi = rax_2
                    
                    if (rax_2 != 0)
                        if (sub_1428bf920(*(arg1 + 0x18), *(arg1 + 0x20), rdi) s> 0)
                            int64_t* r14_1 = *(*(arg1 + 0x18) + 0x10)
                            
                            if (sub_142890300(r14_1) == 0)
                                int64_t* var_10_1 = rdi
                                int32_t var_18
                                var_18.q = r14_1
                                
                                if (sub_1428bfa20(*(arg1 + 0x18), rsi, nullptr, *(arg1 + 0x20), 
                                        var_18) != 0)
                                    if (sub_1428bf8a0(*(arg1 + 0x18), rsi) != 0)
                                        int64_t* rcx_6 = *(arg1 + 0x28)
                                        
                                        if (rcx_6 == 0)
                                            rbp = 1
                                        else if (sub_14288fc80(rcx_6, r14_1) s< 0)
                                            int64_t* var_10_2 = rdi
                                            
                                            if (sub_1428bfa20(*(arg1 + 0x18), rsi, *(arg1 + 0x28), 
                                                    0, nullptr) != 0)
                                                if (sub_1428bf4e0(*(arg1 + 0x18), rsi, 
                                                        *(arg1 + 0x20), rdi) == 0)
                                                    rbp = 1
                                                else
                                                    sub_1428a5670(0x10, 0x102, 0x7b, 
                                                        "crypto\ec\ec_key.c", 0x146)
                                            else
                                                sub_1428a5670(0x10, 0x102, 0x10, 
                                                    "crypto\ec\ec_key.c", 0x142)
                                        else
                                            sub_1428a5670(0x10, 0x102, 0x82, "crypto\ec\ec_key.c", 
                                                0x13d)
                                    else
                                        sub_1428a5670(0x10, 0x102, 0x82, "crypto\ec\ec_key.c", 
                                            0x134)
                                else
                                    sub_1428a5670(0x10, 0x102, 0x10, "crypto\ec\ec_key.c", 0x130)
                            else
                                sub_1428a5670(0x10, 0x102, 0x7a, "crypto\ec\ec_key.c", 0x12c)
                        else
                            sub_1428a5670(0x10, 0x102, 0x6b, "crypto\ec\ec_key.c", 0x126)
            else
                sub_1428a5670(0x10, 0x102, 0x6a, "crypto\ec\ec_key.c", 0x11b)
            
            sub_1428d8ae0(rdi)
            sub_1428bf6a0(rsi)
            return zx.q(rbp)

sub_1428a5670(0x10, 0x102, 0x43, "crypto\ec\ec_key.c", 0x116)
return 0
