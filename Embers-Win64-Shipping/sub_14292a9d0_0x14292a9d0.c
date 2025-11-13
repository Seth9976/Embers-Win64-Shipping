// 函数: sub_14292a9d0
// 地址: 0x14292a9d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0xb8)
void var_e8
int64_t rax_1 = __security_cookie ^ &var_e8
int32_t r14 = 0
int32_t rbp = 0
int64_t* rsi = nullptr
int64_t rax_2 = sub_140687ad0(arg1)
void var_98

if (rax_2 != 0)
    int32_t rax_3 = sub_142890ee0(arg1)
    rbp = rax_3
    
    if (rax_3 u> 0x40)
        sub_1428bc530()
        noreturn
    
    int64_t* rax_4 = sub_1428cd3c0(&data_14354ab50, arg4)
    rsi = rax_4
    
    if (rax_4 != 0)
        int32_t rax_5 = sub_142890ee0(arg1)
        int32_t* rcx_5 = rsi[2]
        rbp = rax_5
        int32_t rax_6
        
        if (rcx_5 != 0)
            rax_6 = sub_1428e4860(rcx_5)
        
        if (rcx_5 == 0 || rax_6 == rbp)
            int64_t* rcx_6 = rsi[3]
            int32_t rax_7
            
            if (rcx_6 == 0)
                rax_7 = 0xa3
            else
                rax_7 = sub_1428a96d0(*rcx_6)
            
            int32_t var_c8
            var_c8.q = 0
            int32_t var_a8
            int32_t rax_8 = sub_1428e3da0(1, rax_7, nullptr, &var_a8, var_c8)
            
            if (rax_8 != 0)
                int32_t* rax_10 = sub_14289b970(sub_1428a9620(var_a8))
                
                if (rax_10 != 0)
                    int32_t* rax_11 = *rsi
                    
                    if (*rax_11 == 4)
                        int32_t* rax_12 = *(rax_11 + 8)
                        
                        if (sub_14292a4d0(arg2, arg3, *(rax_12 + 8), *rax_12, 
                                sub_1428e4860(rsi[1]), rax_10, rbp, &var_98) != 0)
                            int32_t* var_c0_1
                            var_c0_1.d = arg5
                            int32_t var_c8_7
                            var_c8_7.q = 0
                            r14 =
                                sub_142892480(arg1, nullptr, nullptr, &var_98, var_c8_7, var_c0_1.d)
                    else
                        sub_1428a5670(6, 0xa4, 0x7e, "crypto\evp\p5_crpt2.c", 0xf0)
                else
                    sub_1428a5670((rax_10 + 6).d, 0xa4, (rax_10 + 0x7d).d, "crypto\evp\p5_crpt2.c", 
                        0xeb)
            else
                sub_1428a5670(rax_8 + 6, 0xa4, rax_8 + 0x7d, "crypto\evp\p5_crpt2.c", 0xe5)
        else
            sub_1428a5670(6, 0xa4, 0x7b, "crypto\evp\p5_crpt2.c", 0xdb)
    else
        sub_1428a5670((rax_4 + 6).d, 0xa4, (rax_4 + 0x72).d, "crypto\evp\p5_crpt2.c", 0xd2)
else
    sub_1428a5670((rax_2 + 6).d, 0xa4, 0x83, "crypto\evp\p5_crpt2.c", 0xc7)

sub_1428b8960(&var_98, zx.q(rbp))
sub_142969610(rsi)
__security_check_cookie(rax_1 ^ &var_e8)
return zx.q(r14)
