// 函数: sub_1428c0390
// 地址: 0x1428c0390
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x80)
char* result = nullptr
char* result_1 = nullptr
int64_t* var_78_1
__builtin_memset(&var_78_1, 0, 0x28)
int64_t* r14 = nullptr

if (*(arg1 + 8) == 0)
    int64_t rax = *(arg1 + 0x10)
    
    if (rax != 0)
        result = rax()
    
    return sub_1428befd0(result) __tailcall

int64_t* rax_3 = sub_1428d8d60()
int64_t* var_70_1
int64_t* var_68_1
int64_t* var_60_1
int64_t* var_58_1
int64_t* rsi_1
bool cond:0_1

if (rax_3 != 0)
    void* r15_1 = *(arg1 + 8)
    uint64_t rax_4 = sx.q(*(r15_1 + 4))
    int64_t r14_1 = sx.q(*(r15_1 + 8))
    void* rbp_2 = r15_1 + 0x10 + rax_4
    int64_t* rax_5 = sub_14288fa60(rbp_2, r14_1.d, nullptr)
    var_78_1 = rax_5
    int32_t rbp
    
    if (rax_5 == 0)
    label_1428c07d9:
        sub_1428a5670(0x10, 0xaf, 3, "crypto\ec\ec_curve.c", 0xbe1)
        rbp = 0
        rsi_1 = nullptr
        r14 = nullptr
    label_1428c07e6:
        cond:0_1 = rbp != 0
        
        if (rbp == 0)
            sub_1428bee10(result_1)
            cond:0_1 = rbp != 0
    else
        int64_t* rax_6 = sub_14288fa60(r14_1 + rbp_2, r14_1.d, nullptr)
        var_70_1 = rax_6
        
        if (rax_6 == 0)
            goto label_1428c07d9
        
        int64_t* rax_8 = sub_14288fa60(sx.q((r14_1 * 2).d) + rbp_2, r14_1.d, nullptr)
        var_68_1 = rax_8
        
        if (rax_8 == 0)
            goto label_1428c07d9
        
        int64_t rax_9 = *(arg1 + 0x10)
        int32_t var_88
        
        if (rax_9 == 0)
            int64_t* rcx_10 = var_78_1
            
            if (*r15_1 != 0x196)
                char** result_4 = sub_142919510(rcx_10, var_70_1, rax_8, rax_3)
                result_1 = result_4
                
                if (result_4 != 0)
                label_1428c05ae:
                    sub_14289a9b0(result_1, *arg1)
                    int64_t* rax_12 = sub_1428bfa80(result_1)
                    rsi_1 = rax_12
                    
                    if (rax_12 != 0)
                        int64_t* rax_14 =
                            sub_14288fa60(sx.q((r14_1 * 3).d) + rbp_2, r14_1.d, nullptr)
                        var_60_1 = rax_14
                        int64_t* rax_15
                        
                        if (rax_14 != 0)
                            rax_15 = sub_14288fa60(sx.q((r14_1 << 2).d) + rbp_2, r14_1.d, nullptr)
                            var_58_1 = rax_15
                        
                        if (rax_14 == 0 || rax_15 == 0)
                            sub_1428a5670(0x10, 0xaf, 3, "crypto\ec\ec_curve.c", 0xc06)
                            rsi_1 = rax_12
                            r14 = nullptr
                            sub_1428bee10(result_1)
                            cond:0_1 = 0 != 0
                        else
                            var_88.q = rax_3
                            
                            if (sub_1428bfc10(result_1, rax_12, rax_14) != 0)
                                int64_t* rax_18 =
                                    sub_14288fa60(sx.q((r14_1 * 5).d) + rbp_2, r14_1.d, nullptr)
                                r14 = rax_18
                                int32_t rax_19
                                
                                if (rax_18 != 0)
                                    rax_19 = sub_142890900(rax_14, zx.q(*(r15_1 + 0xc)))
                                
                                if (rax_18 == 0 || rax_19 == 0)
                                    sub_1428a5670(0x10, 0xaf, 3, "crypto\ec\ec_curve.c", 0xc0f)
                                    rsi_1 = rax_12
                                    sub_1428bee10(result_1)
                                    cond:0_1 = 0 != 0
                                else
                                    rsi_1 = rax_12
                                    
                                    if (sub_1428bf180(result_1, rsi_1, r14, rax_14) != 0)
                                        uint64_t rax_21
                                        
                                        if (rax_4.d != 0)
                                            rax_21 = sub_1428bf300(result_1, rbp_2 - rax_4, rax_4)
                                        
                                        if (rax_4.d == 0 || rax_21 != 0)
                                            rbp = 1
                                            goto label_1428c07e6
                                        
                                        sub_1428a5670(0x10, 0xaf, 0x10, "crypto\ec\ec_curve.c", 
                                            0xc18)
                                        sub_1428bee10(result_1)
                                        cond:0_1 = 0 != 0
                                    else
                                        sub_1428a5670(0x10, 0xaf, 0x10, "crypto\ec\ec_curve.c", 
                                            0xc13)
                                        sub_1428bee10(result_1)
                                        cond:0_1 = 0 != 0
                            else
                                sub_1428a5670(0x10, 0xaf, 0x10, "crypto\ec\ec_curve.c", 0xc0a)
                                rsi_1 = rax_12
                                r14 = nullptr
                                sub_1428bee10(result_1)
                                cond:0_1 = 0 != 0
                    else
                        sub_1428a5670(0x10, 0xaf, 0x10, "crypto\ec\ec_curve.c", 0xc00)
                        r14 = nullptr
                        sub_1428bee10(result_1)
                        cond:0_1 = 0 != 0
                else
                    sub_1428a5670(0x10, 0xaf, 0x10, "crypto\ec\ec_curve.c", 0xbf7)
                    rsi_1 = nullptr
                    r14 = nullptr
                    sub_1428bee10(result_1)
                    cond:0_1 = 0 != 0
            else
                char** result_3 = sub_1429195a0(rcx_10, var_70_1, rax_8, rax_3)
                result_1 = result_3
                
                if (result_3 != 0)
                    goto label_1428c05ae
                
                sub_1428a5670(0x10, 0xaf, 0x10, "crypto\ec\ec_curve.c", 0xbee)
                rsi_1 = nullptr
                r14 = nullptr
                sub_1428bee10(result_1)
                cond:0_1 = 0 != 0
        else
            char** result_2 = sub_1428befd0(rax_9())
            result_1 = result_2
            int32_t rax_11
            
            if (result_2 != 0)
                var_88.q = rax_3
                rax_11 = (*(*result_2 + 0x28))(result_2, var_78_1, var_70_1, var_68_1, var_88)
            
            if (result_2 != 0 && rax_11 != 0)
                goto label_1428c05ae
            
            sub_1428a5670(0x10, 0xaf, 0x10, "crypto\ec\ec_curve.c", 0xbe9)
            rsi_1 = nullptr
            r14 = nullptr
            sub_1428bee10(result_1)
            cond:0_1 = 0 != 0
else
    sub_1428a5670((&rax_3[2]).d, 0xaf, (rax_3 + 0x41).d, "crypto\ec\ec_curve.c", 0xbd4)
    rsi_1 = nullptr
    sub_1428bee10(result_1)
    cond:0_1 = 0 != 0

if (cond:0_1)
    result = result_1

sub_1428bf6a0(rsi_1)
sub_1428d8ae0(rax_3)
sub_1428901a0(var_78_1)
sub_1428901a0(var_70_1)
sub_1428901a0(var_68_1)
sub_1428901a0(r14)
sub_1428901a0(var_60_1)
sub_1428901a0(var_58_1)
return result
