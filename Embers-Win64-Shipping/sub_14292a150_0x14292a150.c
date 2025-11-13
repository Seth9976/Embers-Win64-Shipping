// 函数: sub_14292a150
// 地址: 0x14292a150
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x100)
void var_128
int64_t rax_1 = __security_cookie ^ &var_128
uint64_t rbx = zx.q(arg3)
int32_t result_1 = 0
uint64_t result

if (arg4 == 0 || *arg4 != 0x10 || *(arg4 + 8) == 0)
    sub_1428a5670(6, 0x75, 0x72, "crypto\evp\p5_crpt.c", 0x29)
    result = 0
else
    int64_t* rax_2 = sub_1428cd3c0(&data_14354aa20, arg4)
    
    if (rax_2 != 0)
        int32_t* rcx_1 = rax_2[1]
        int32_t rsi_1
        
        if (rcx_1 != 0)
            rsi_1 = sub_1428e4860(rcx_1)
        else
            rsi_1 = (rcx_1 + 1).d
        
        int32_t* rax_4 = *rax_2
        int64_t r13_1 = *(rax_4 + 8)
        int32_t rax_5 = *rax_4
        
        if (arg2 == 0)
            rbx = 0
        else if (rbx.d == 0xffffffff)
            rbx = -1
            
            do
                rbx += 1
            while (*(rbx + arg2) != 0)
        
        int64_t* rax_6 = sub_142891ee0()
        
        if (rax_6 != 0)
            if (sub_1428919c0(rax_6, arg6, nullptr) == 0)
            label_14292a496:
                sub_142891ea0(rax_6)
                result = zx.q(result_1)
            else
                if (sub_142891c10(rax_6, arg2, sx.q(rbx.d)) == 0)
                    goto label_14292a496
                
                if (sub_142891c10(rax_6, r13_1, sx.q(rax_5)) == 0)
                    goto label_14292a496
                
                sub_1429695b0(rax_2)
                void var_d8
                
                if (sub_1428918e0(rax_6, &var_d8, nullptr) == 0)
                    goto label_14292a496
                
                int32_t rax_11 = sub_1428916c0(arg6)
                
                if (rax_11 s>= 0)
                    int32_t rbx_1 = 1
                    
                    if (rsi_1 s> 1)
                        do
                            if (sub_1428919c0(rax_6, arg6, nullptr) == 0)
                                goto label_14292a496
                            
                            if (sub_142891c10(rax_6, &var_d8, sx.q(rax_11)) == 0)
                                goto label_14292a496
                            
                            if (sub_1428918e0(rax_6, &var_d8, nullptr) == 0)
                                goto label_14292a496
                            
                            rbx_1 += 1
                        while (rbx_1 s< rsi_1)
                    
                    if (sub_140611e60(arg5) s> 0x40)
                        sub_1428bc530()
                        noreturn
                    
                    void var_98
                    memcpy(&var_98, &var_d8, sub_140611e60(arg5))
                    
                    if (sub_140611e40(arg5) s> 0x10)
                        sub_1428bc530()
                        noreturn
                    
                    uint32_t count = sub_140611e40(arg5)
                    void var_e8
                    memcpy(&var_e8, &var_d8 + sx.q(0x10 - sub_140611e40(arg5)), count)
                    int32_t var_108
                    var_108.q = &var_e8
                    
                    if (sub_142892480(arg1, arg5, nullptr, &var_98, var_108, arg7) != 0)
                        sub_1428b8960(&var_d8, 0x40)
                        sub_1428b8960(&var_98, 0x40)
                        sub_1428b8960(&var_e8, 0x10)
                        result_1 = 1
                    
                    goto label_14292a496
                
                result = 0
        else
            sub_1428a5670((rax_6 + 6).d, (rax_6 + 0x75).d, (rax_6 + 0x41).d, 
                "crypto\evp\p5_crpt.c", 0x41)
            sub_142891ea0(rax_6)
            result = zx.q(result_1)
    else
        sub_1428a5670((rax_2 + 6).d, (rax_2 + 0x75).d, (rax_2 + 0x72).d, "crypto\evp\p5_crpt.c", 
            0x2f)
        result = 0

__security_check_cookie(rax_1 ^ &var_128)
return result
