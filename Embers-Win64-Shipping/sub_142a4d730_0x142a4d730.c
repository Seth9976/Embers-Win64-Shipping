// 函数: sub_142a4d730
// 地址: 0x142a4d730
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_138
int64_t rax_1 = __security_cookie ^ &var_138
int32_t r12 = 0
int32_t* r14 = arg4
char* rbx = arg1
uint64_t result

if (arg4 == 0 || *arg4 s> 0)
    result = 0
else
    char* var_100
    
    if (arg1 == 0)
        rbx = sub_142a46ef0()
        var_100 = rbx
    else if (strstr(arg1, &data_143613e98) != 0)
        var_100 = rbx
    else if (sub_142a4ca80(rbx) != 1)
        var_100 = rbx
    else
        void var_f8
        int32_t rax_4 = sub_142a8b1a0(rbx, &var_f8, 0x9d, nullptr, r14)
        int32_t rax_5
        
        if (rax_4 s> 0)
            rax_5 = *r14
        
        if (rax_4 s<= 0 || rax_5 s> 0 || rax_5 == 0xffffff84)
            bool cond:2_1 = *r14 != 0xffffff84
            var_100 = rbx
            
            if (not(cond:2_1))
                *r14 = 0xf
        else
            rbx = &var_f8
            var_100 = rbx
    
    sub_142a4e610(rbx, nullptr, 0, &var_100)
    void* rdi_1 = var_100
    char rax_7 = *rdi_1
    int32_t rbx_4
    
    if (rax_7 == 0x5f || rax_7 == 0x2d)
        void* rbp_1 = rdi_1 + 1
        int32_t rsi_1 = 0
        void* r15_1 = rbp_1
        
        if (*rbp_1 != 0)
            void* rbx_1 = rbp_1
            
            do
                char rcx_3 = *rbx_1
                
                if (rcx_3 - 0x2d u<= 0x32 && test_bit(0x4000000080003, sx.q(rcx_3 - 0x2d)))
                    break
                
                if (sub_142a86230(rcx_3) == 0)
                    break
                
                rbx_1 += 1
                rsi_1 += 1
            while (*rbx_1 != 0)
            
            rbp_1 = rdi_1 + 1
        
        if (rsi_1 == 4)
            r15_1 = rbp_1 + 4
        
        if (r15_1 != rbp_1)
            rdi_1 = r15_1
        
        char rax_12 = *rdi_1
        
        if (rax_12 == 0x5f || rax_12 == 0x2d)
            sub_142a4e420(rdi_1 + 1, nullptr, 0, &var_100)
            char* rax_13 = var_100
            
            if (rax_13 != rdi_1 + 1)
                rdi_1 = rax_13
            
            char rcx_6 = *rdi_1
            
            if (rcx_6 == 0x5f || rcx_6 == 0x2d)
                if (rdi_1 != rax_13)
                    char rcx_7 = *(rdi_1 + 1)
                    
                    if (rcx_7 == 0x5f || rcx_7 == 0x2d)
                        rdi_1 += 1
                
                rbx_4 = arg3
                int32_t* var_118
                var_118.b = 0
                r12 = sub_142a4c930(rdi_1 + 1, *rdi_1, arg2, rbx_4, var_118.b)
            else
                rbx_4 = arg3
        else
            rbx_4 = arg3
    else
        rbx_4 = arg3
    
    result = sub_142a8c3f0(arg2, rbx_4, r12, r14)

__security_check_cookie(rax_1 ^ &var_138)
return result
