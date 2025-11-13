// 函数: sub_1429271f0
// 地址: 0x1429271f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0xc0)
void var_d8
int64_t rax_1 = __security_cookie ^ &var_d8

if (sub_1428f1580(arg2) != 0)
    int64_t* rax_3 = sub_1428f1440(arg2)
    int32_t* rax_4 = sub_1428f1420(arg2)
    int32_t rsi_1 = 0
    uint64_t r8 = zx.q(arg3)
    int32_t var_b8
    void var_98
    void* rdi
    
    if (rax_3 == 0)
        sub_1428b6f70(arg1, "%*sNo Trusted Uses.\n", r8)
    else
        char* const var_b0_1 = &data_1437020ab
        var_b8 = arg3 + 2
        rdi.b = 1
        sub_1428b6f70(arg1, "%*sTrusted Uses:\n%*s", r8)
        int32_t r14_1 = 0
        
        if (sub_142898c70(rax_3) s> 0)
            int32_t rax_7
            
            do
                if (rdi.b != 0)
                    rdi.b = 0
                else
                    sub_14289a750(arg1, &data_14321f660)
                
                sub_1428a97f0(&var_98, 0x50, sub_142898ea0(rax_3, r14_1), 0)
                sub_14289a750(arg1, &var_98)
                r14_1 += 1
                rax_7 = sub_142898c70(rax_3)
            while (r14_1 s< rax_7)
        
        sub_14289a750(arg1, &data_14370209c)
    
    uint64_t r8_2 = zx.q(arg3)
    
    if (rax_4 == 0)
        sub_1428b6f70(arg1, "%*sNo Rejected Uses.\n", r8_2)
    else
        char* const var_b0_2 = &data_1437020ab
        var_b8 = arg3 + 2
        rdi.b = 1
        sub_1428b6f70(arg1, "%*sRejected Uses:\n%*s", r8_2)
        int32_t r14_2 = 0
        
        if (sub_142898c70(rax_4) s> 0)
            int32_t rax_11
            
            do
                if (rdi.b != 0)
                    rdi.b = 0
                else
                    sub_14289a750(arg1, &data_14321f660)
                
                sub_1428a97f0(&var_98, 0x50, sub_142898ea0(rax_4, r14_2), 0)
                sub_14289a750(arg1, &var_98)
                r14_2 += 1
                rax_11 = sub_142898c70(rax_4)
            while (r14_2 s< rax_11)
        
        sub_14289a750(arg1, &data_14370209c)
    
    int64_t rax_12 = sub_1428f1300(arg2, nullptr)
    
    if (rax_12 != 0)
        var_b8.q = rax_12
        sub_1428b6f70(arg1, "%*sAlias: %s\n", zx.q(arg3))
    
    int32_t var_a8
    char* rax_13 = sub_1428f1460(arg2, &var_a8)
    char* rdi_2 = rax_13
    
    if (rax_13 != 0)
        sub_1428b6f70(arg1, "%*sKey Id: ", zx.q(arg3))
        
        if (var_a8 s> 0)
            do
                *rdi_2
                char* const r8_6 = &data_1437020ab
                
                if (rsi_1 != 0)
                    r8_6 = &data_142d6bc34
                
                sub_1428b6f70(arg1, "%s%02X", r8_6)
                rsi_1 += 1
                rdi_2 = &rdi_2[1]
            while (rsi_1 s< var_a8)
        
        sub_14289aa40(arg1, &data_14370209c, 1)

__security_check_cookie(rax_1 ^ &var_d8)
return 1
