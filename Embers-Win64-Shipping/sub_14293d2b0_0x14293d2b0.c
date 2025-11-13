// 函数: sub_14293d2b0
// 地址: 0x14293d2b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int32_t rbp = 0
int64_t* rdi = arg2
int64_t* r14 = nullptr
int64_t* rsi = nullptr

if ((**arg1 & 2) != 0)
    return 1

int64_t* rax_2

if (arg2 == 0)
    rax_2 = sub_1428d8d60()
    r14 = rax_2
    rdi = rax_2

if (arg2 != 0 || rax_2 != 0)
    int32_t rax_3 = sub_1428be5a0(arg1, rdi)
    
    if (rax_3 != 0)
        int64_t* rdx_1 = arg1[1]
        
        if (rdx_1 != 0)
            if (sub_1428bf920(arg1, rdx_1, rdi) s> 0)
                int64_t* rax_5 = sub_1428bfa80(arg1)
                rsi = rax_5
                
                if (rax_5 != 0)
                    int64_t* rax_6 = sub_14060aa60(arg1)
                    
                    if (rax_6 != 0)
                        if (sub_142890300(rax_6) == 0)
                            int64_t* var_20_1 = rdi
                            
                            if (sub_1428bfa20(arg1, rsi, rax_6, 0, nullptr) != 0)
                                int32_t rax_9 = sub_1428bf8a0(arg1, rsi)
                                
                                if (rax_9 != 0)
                                    rbp = 1
                                else
                                    sub_1428a5670(rax_9 + 0x10, 0xaa, rax_9 + 0x7a, 
                                        "crypto\ec\ec_check.c", 0x3e)
                        else
                            sub_1428a5670(0x10, 0xaa, 0x80, "crypto\ec\ec_check.c", 0x37)
            else
                sub_1428a5670(0x10, 0xaa, 0x6b, "crypto\ec\ec_check.c", 0x2c)
        else
            sub_1428a5670(0x10, 0xaa, 0x71, "crypto\ec\ec_check.c", 0x28)
    else
        sub_1428a5670(rax_3 + 0x10, 0xaa, rax_3 + 0x76, "crypto\ec\ec_check.c", 0x22)
else
    sub_1428a5670((&rax_2[2]).d, 0xaa, (rax_2 + 0x41).d, "crypto\ec\ec_check.c", 0x1b)

sub_1428d8ae0(r14)
sub_1428bf6a0(rsi)
return zx.q(rbp)
