// 函数: sub_141e9fd30
// 地址: 0x141e9fd30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0)
    return 

void var_c8
int64_t* var_48_1 = __security_cookie ^ &var_c8

if (arg3 != 0)
    int64_t* rcx = *(arg4 + 0x78)
    void var_90
    int64_t* rax_3 = (*(*rcx + 0xf8))(rcx, &var_90)
    int64_t* rcx_1 = *(arg2 + 0x78)
    void var_88
    
    if (*(*(*rcx_1 + 0xf8))(rcx_1, &var_88) == *rax_3)
        int64_t* rax = *(arg4 + 0x78)
        int64_t zmm1 = *(arg2 + 0x98)
        int32_t r8 = arg3[1].d
        char rbx_2 = (*(arg4 + 0x80)).b
        char r15_1 = (*(arg2 + 0xa0)).b
        int32_t rbp_2 = *(rax + 0x3c)
        int64_t* var_a8 = rax
        
        if (r8 != 0)
            sub_140cd9680(&var_a8, 0, r8)
            arg3[1].d = 0
            
            if (*(arg3 + 0xc) != 0)
                if ((not.b(rbx_2) & 1) != 0)
                    sub_140ce4fc0(arg3, 0, rbp_2)
                else
                    sub_140ce4f50(arg3, 0, rbp_2)
        
        int64_t* r12_1 = *(arg4 + 0x78)
        int32_t rbp_3 = arg1[1].d
        r15_1 = not.b(r15_1) & 1
        int32_t i
        
        if (r15_1 != 0)
            i = rbp_3 - *(arg1 + 0x34)
        else
            i = rbp_3 - *(arg1 + 0x24)
        
        int32_t rbx_3 = 0
        
        if (i != 0)
            int32_t rsi_2 = 1
            int32_t r14_2 = 0
            
            do
                void* rcx_4
                
                if (r15_1 != 0)
                    if (rbx_3 s>= 0 && rbx_3 s< arg1[5].d)
                        void* rax_6 = arg1[4]
                        rcx_4 = &arg1[2]
                        
                        if (rax_6 != 0)
                            rcx_4 = rax_6
                        
                    label_141e9feab:
                        int32_t rax_7 = rbx_3
                        
                        if (rbx_3 s< 0)
                            rax_7 = rbx_3 + 0x1f
                        
                        if ((*(rcx_4 + (sx.q(rax_7 s>> 5) << 2)) & rsi_2) != 0)
                            int32_t rax_9 = sub_140cd78f0(&var_a8, 1)
                            
                            if (r15_1 != 0)
                                *(arg1 + 0x34)
                                *(arg1 + 0x34)
                            else
                                *(arg1 + 0x24)
                                arg1[1].d != *(arg1 + 0x24) && ((*arg1).b & 1) != 0
                            
                            void* rdx_3
                            
                            if (arg3[1].d != 0)
                                void* rcx_11 = *arg3
                                
                                if ((not.b(rbx_2) & 1) == 0 && (rcx_11.b & 1) != 0)
                                    rcx_11 = (rcx_11 s>> 1) + arg3
                                
                                rdx_3 = sx.q(rbp_2 * rax_9) + rcx_11
                            else
                                rdx_3 = nullptr
                            
                            (*(*r12_1 + 0xc0))(r12_1, rdx_3)
                            i -= 1
                else if (rbx_3 s>= 0 && rbx_3 s< arg1[3].d)
                    rcx_4 = arg1[2]
                    
                    if ((rcx_4.b & 1) != 0)
                        rcx_4 = (rcx_4 s>> 1) + &arg1[2]
                    
                    goto label_141e9feab
                rbx_3 += 1
                rsi_2 = rol.d(rsi_2, 1)
                r14_2 += zmm1:4.d
            while (i != 0)

__security_check_cookie(var_48_1 ^ &var_c8)
