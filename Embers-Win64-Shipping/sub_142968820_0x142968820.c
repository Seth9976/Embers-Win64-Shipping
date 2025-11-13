// 函数: sub_142968820
// 地址: 0x142968820
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x170)
void var_188
int64_t rax_1 = __security_cookie ^ &var_188
int32_t result_1 = 0
uint64_t (* rcx_1)(int64_t arg1, int32_t arg2, int64_t arg3, int32_t arg4, char arg5, int32_t arg6, 
    uint32_t arg7, int64_t arg8, int32_t* arg9) = sub_142969a90

if (arg6 != 0)
    rcx_1 = arg6

int64_t* rbx = nullptr
uint64_t result

if (sub_1428a96d0(*(*(arg1 + 0x10) + 0x18)) == 0x15)
    int64_t* rcx_4 = *(arg1 + 8)
    int32_t* rax_4 = rcx_4[1]
    int64_t r12_1 = *(rax_4 + 8)
    int32_t r13_1 = *rax_4
    int32_t* rax_5 = rcx_4[2]
    int32_t r14_1
    
    if (rax_5 != 0)
        int32_t rax_6 = sub_1428e4860(rax_5)
        rcx_4 = *(arg1 + 8)
        r14_1 = rax_6
    else
        r14_1 = 1
    
    int64_t* var_128
    sub_1428eea10(*rcx_4, &var_128, nullptr)
    void* var_120
    sub_1428daf50(&var_120, nullptr, nullptr, var_128)
    char* rax_9 = sub_14289b970(sub_1428a9620(sub_1428a96d0(var_120)))
    
    if (rax_9 != 0)
        int32_t rbp_1 = sub_1428916c0(rax_9)
        int32_t rax_11 = sub_1406938b0(rax_9)
        
        if (rbp_1 s>= 0)
            char* rax_13
            
            if (rax_11 == 0x329 || rax_11 - 0x3d6 u<= 1)
                rax_13 = getenv("LEGACY_GOST_PKCS12")
            
            int128_t var_f8
            
            if ((rax_11 != 0x329 && rax_11 - 0x3d6 u> 1) || rax_13 != 0)
                int32_t rax_20 =
                    rcx_1(arg2, zx.q(arg3), r12_1, zx.q(r13_1), 3, r14_1, rbp_1, &var_f8, rax_9)
                
                if (rax_20 != 0)
                    goto label_142968a35
                
                sub_1428a5670(rax_20 + 0x23, 0x6b, 0x6b, "crypto\pkcs12\p12_mutl.c", 0x7d)
            else
                rbp_1 = (&rax_13[0x20]).d
                int32_t var_160
                var_160.q = rax_9
                void var_b8
                
                if (sub_14292a4d0(arg2, arg3, r12_1, r13_1, r14_1, var_160, 0x60, &var_b8) == 0)
                    sub_1428a5670(0x23, 0x6b, 0x6b, "crypto\pkcs12\p12_mutl.c", 0x77)
                else
                    int128_t var_78
                    var_f8 = var_78
                    int128_t var_68
                    int128_t var_e8_1 = var_68
                    sub_1428b8960(&var_b8, zx.q(rbp_1 + 0x40))
                label_142968a35:
                    int64_t* rax_15 = sub_1428be080()
                    rbx = rax_15
                    
                    if (rax_15 != 0)
                        int32_t var_168_3
                        var_168_3.q = 0
                        
                        if (sub_1428be280(rax_15, &var_f8, rbp_1, rax_9, var_168_3) != 0)
                            int32_t* rdx_5 = *(*(arg1 + 0x10) + 0x20)
                            *rdx_5
                            *(rdx_5 + 8)
                            
                            if (sub_1428be4d0(rbx) != 0 && sub_1428be1d0(rbx, arg4, arg5) != 0)
                                result_1 = 1
            
            sub_1428b8960(&var_f8, 0x40)
            sub_1428be000(rbx)
            result = zx.q(result_1)
        else
            result = 0
    else
        sub_1428a5670((&rax_9[0x23]).d, (&rax_9[0x6b]).d, (&rax_9[0x76]).d, 
            "crypto\pkcs12\p12_mutl.c", 0x69)
        result = 0
else
    sub_1428a5670(0x23, 0x6b, 0x79, "crypto\pkcs12\p12_mutl.c", 0x5c)
    result = 0

__security_check_cookie(rax_1 ^ &var_188)
return result
