// 函数: sub_140cd8a50
// 地址: 0x140cd8a50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = arg3
arg3.b = *(arg2 + 0xc) == 0

if ((arg3.b & sub_140b5b8a0(*(arg2 + 8), 9)) != 0)
    int32_t rcx_1
    rcx_1.b = sub_140b5b8a0(*(arg2 + 0x2c), 0) == 0
    
    if ((*(arg2 + 0x30) != 0 | rcx_1.b) != 0)
        int64_t* rcx_2 = *(arg1 + 0x78)
        int32_t arg_10
        int64_t rax_4 = *(*(*rcx_2 + 0xf8))(rcx_2, &arg_10, arg3)
        
        if (*(arg2 + 0x2c) != rax_4)
            void* rax_5 = *rbx
            int64_t rdi_1 = sx.q(*(arg1 + 0x4c))
            arg_10 = 0
            int64_t* rdi_2 = rdi_1 + arg4
            int64_t* r9 = *(rax_5 + 8)
            int64_t* rcx_3 = r9[1]
            int32_t* rdx_1 = *rcx_3
            
            if (&rdx_1[1] u> rcx_3[1])
                int32_t* rdx_2 = &arg_10
                
                if ((*(r9 + 0x29) & 0x20) != 0)
                    sub_140b54070(r9, rdx_2, arg5)
                else
                    (*(*r9 + 0x150))(r9, rdx_2, 4)
            else
                arg_10 = *rdx_1
                int64_t* rax_8 = r9[1]
                *rax_8 += 4
            
            void* rax_10 = *(arg1 + 0x78)
            int32_t r8 = rdi_2[1].d
            char r14 = (*(arg1 + 0x80)).b
            int32_t rsi_1 = arg_10
            int32_t r12 = *(rax_10 + 0x3c)
            void* var_d8 = rax_10
            
            if (r8 != 0)
                sub_140cd9680(&var_d8, 0, r8)
            label_140cd8b7d:
                rdi_2[1].d = 0
                
                if (rsi_1 != *(rdi_2 + 0xc))
                    if ((not.b(r14) & 1) != 0)
                        sub_140ce4fc0(rdi_2, rsi_1, r12)
                    else
                        sub_140ce4f50(rdi_2, rsi_1, r12)
                
                if (rsi_1 != 0)
                    sub_140cd78f0(&var_d8, rsi_1)
            else if (rsi_1 != 0)
                goto label_140cd8b7d
            
            if (arg_10 s> 0)
                int64_t rax_11 = *(arg2 + 0x2c)
                int64_t var_b8 = 0
                char r14_1 = not.b(r14) & 1
                char var_a8_1 = 0
                int64_t var_a4
                __builtin_memset(&var_a4, 0, 0x30)
                int64_t var_70_1 = -1
                int64_t var_68
                __builtin_memset(&var_68, 0, 0x11)
                int64_t var_54_1 = 0
                int64_t var_4c_1 = 0
                int64_t var_b0_1 = rax_11
                void* r9_1
                
                if (rdi_2[1].d != 0)
                    r9_1 = *rdi_2
                    
                    if (r14_1 == 0 && (r9_1.b & 1) != 0)
                        r9_1 = (r9_1 s>> 1) + rdi_2
                else
                    r9_1 = nullptr
                
                int64_t* rcx_8 = *(arg1 + 0x78)
                
                if ((*(*rcx_8 + 0x78))(rcx_8, &var_b8, rbx, r9_1, arg6) != 2)
                    return 1
                
                int32_t rsi_2 = 1
                
                if (arg_10 s> 1)
                    int32_t r15_1 = r12
                    
                    do
                        void* r9_3
                        
                        if (rdi_2[1].d != 0)
                            void* rax_15 = *rdi_2
                            
                            if (r14_1 == 0 && (rax_15.b & 1) != 0)
                                rax_15 = (rax_15 s>> 1) + rdi_2
                            
                            r9_3 = sx.q(r15_1) + rax_15
                        else
                            r9_3 = nullptr
                        
                        int64_t* rcx_9 = *(arg1 + 0x78)
                        (*(*rcx_9 + 0x78))(rcx_9, &var_b8, rbx, r9_3, arg6)
                        rsi_2 += 1
                        r15_1 += r12
                    while (rsi_2 s< arg_10)
            
            return 2

return 0
