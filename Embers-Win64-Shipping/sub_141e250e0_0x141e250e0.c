// 函数: sub_141e250e0
// 地址: 0x141e250e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_108
uint64_t result = __security_cookie ^ &var_108
uint64_t result_1 = result
bool cond:0 = arg1[0x2c].b != 0
int32_t var_c0 = arg2
int32_t var_d8 = arg3

if (not(cond:0))
    if (sub_140d3e110(&arg1[0x21]) != 0)
        int64_t* rcx_1 = *arg1
        int32_t var_7c_1 = 0x80
        int64_t* var_d0 = nullptr
        int32_t var_c8_1 = 0
        int64_t var_a8 = 0
        int32_t var_a0_1 = 0
        int64_t var_98
        __builtin_memset(&var_98, 0, 0x1c)
        int32_t var_74_1 = 0
        void* var_68_1 = nullptr
        int32_t var_60_1 = 0
        int32_t var_78_1 = 0xffffffff
        (*(*rcx_1 + 0x288))(rcx_1, &var_c0, &var_d8, &var_d0)
        int32_t rdi_2 = var_c8_1 - 1
        
        if (var_c8_1 - 1 s>= 0)
            int64_t rbx_2 = sx.q(rdi_2) << 4
            int64_t r14_1 = rbx_2
            int64_t rsi_2 = sx.q(rdi_2 + 1) << 4
            int32_t temp1_1
            
            do
                int64_t* rax_4 = var_d0
                
                if (*(rax_4 + rbx_2 + 8) != 0)
                    void* rcx_2 = *(rax_4 + rbx_2)
                    
                    if (rcx_2 != 0 && sub_141e44a20(rcx_2) != 0)
                        int32_t rax_6 = var_c8_1
                        int32_t rcx_4 = rax_6 - rdi_2
                        
                        if (rcx_4 != 1)
                            int64_t* rax_7 = var_d0
                            memmove(rax_7 + r14_1, rax_7 + rsi_2, (rcx_4 - 1) << 4)
                            rax_6 = var_c8_1
                        
                        var_c8_1 = rax_6 - 1
                        sub_1405a5010(&var_d0)
                
                rsi_2 -= 0x10
                r14_1 -= 0x10
                rbx_2 -= 0x10
                temp1_1 = rdi_2
                rdi_2 -= 1
            while (temp1_1 - 1 s>= 0)
        
        void* rdi_3 = *arg1
        
        for (int32_t i = 0; i s>= 0; i += 1)
            if (i s>= *(rdi_3 + 0x160))
                break
            
            int64_t r14_2 = sx.q(i) * 3
            int64_t rax_10 = *(rdi_3 + 0x158)
            int64_t* rsi_3 = rax_10 + (r14_2 << 3)
            int64_t rax_11 = *(rax_10 + (r14_2 << 3))
            int32_t r9_2 = sub_140b5ead0(rax_11.d) + rax_11:4.d
            int64_t r9_3
            
            if (var_a0_1 == var_74_1)
            labelid_1:
                r9_3 = sub_1418ae9e0(&var_a8, r9_2, rsi_3)
            else
                void var_70
                void* rcx_9 = &var_70
                
                if (var_68_1 != 0)
                    rcx_9 = var_68_1
                
                int32_t rax_18 = *(rcx_9 + ((sx.q(var_60_1 - 1) & sx.q(r9_2)) << 2))
                
                if (rax_18 == 0xffffffff)
                label_141e252d5:
                    r9_3 = sub_1418ae9e0(&var_a8, r9_2, rsi_3)
                else
                    int64_t rdx_5 = var_a8
                    int64_t rcx_11
                    
                    while (true)
                        rcx_11 = sx.q(rax_18) << 5
                        
                        if (*(rcx_11 + rdx_5) == *rsi_3)
                            break
                        
                        rax_18 = *(rcx_11 + rdx_5 + 0x18)
                        
                        if (rax_18 == 0xffffffff)
                            goto label_141e252d5_2
                    
                    if (rax_18 == 0xffffffff)
                    label_141e252d5_1:
                        r9_3 = sub_1418ae9e0(&var_a8, r9_2, rsi_3)
                    else
                        int64_t rax_20 = rdx_5 + rcx_11
                        
                        if (rax_20 == 0)
                        label_141e252d5_2:
                            r9_3 = sub_1418ae9e0(&var_a8, r9_2, rsi_3)
                        else
                            r9_3 = rax_20 + 8
            
            sub_141de9970(*(rdi_3 + 0x158) + (r14_2 << 3) + 8, &var_c0, &var_d8, r9_3)
        
        void* rax_21 = sub_140d3c6e0(&arg1[0x21])
        sub_141e13ea0(rax_21 + 0x100, 1, &var_d0, rax_21 + 0x110, arg1[0x2d].d)
        sub_141e13c60(sub_140d3c6e0(&arg1[0x21]) + 0x100, 1, &var_a8, arg1[0x2d].d)
        int32_t var_60_2 = 0
        
        if (var_68_1 != 0)
            sub_140a74f90(var_68_1)
        
        sub_140597460(&var_a8)
        int64_t* rcx_22 = var_d0
        
        if (rcx_22 != 0)
            sub_140a74f90(rcx_22)
    
    result = sub_141e32290(arg1)
    
    if (arg4 != 0)
        result = sub_141e16bc0(arg1, arg4)

__security_check_cookie(result_1 ^ &var_108)
return result
