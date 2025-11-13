// 函数: sub_141e42170
// 地址: 0x141e42170
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r14 = arg2
int64_t* rdi = arg1

if (arg1[0x16].b == 0)
label_141e421a9:
    
    if (*arg1 != 0)
        int64_t rbx_1 = *arg2
        int32_t rax_2 = arg1[3].d
        int64_t arg_8 = rbx_1
        int32_t rax_6
        
        if (rax_2 != *(arg1 + 0x44))
            int32_t rax_4 = sub_140b5ead0(rbx_1.d) + arg_8:4.d
            void* r8_1 = &rdi[9]
            void* rcx_1 = *(r8_1 + 8)
            
            if (rcx_1 != 0)
                r8_1 = rcx_1
            
            rax_6 = *(r8_1 + (((sx.q(rdi[0xb].d) - 1) & sx.q(rax_4)) << 2))
        
        if (rax_2 == *(arg1 + 0x44) || rax_6 == 0xffffffff)
        label_141e42217:
            rax_6 = -1
        else
            int64_t r8_2 = rdi[2]
            
            while (true)
                int64_t rdx_3 = sx.q(rax_6) * 3
                
                if (*(r8_2 + (rdx_3 << 3)) == rbx_1)
                    break
                
                rax_6 = *(r8_2 + (rdx_3 << 3) + 0x10)
                
                if (rax_6 == 0xffffffff)
                    goto label_141e42217
        
        int64_t rbx_2 = *r14
        arg_8 = rbx_2
        
        if (rax_6 != 0xffffffff)
            void* const rcx_6
            
            if (rdi[3].d == *(rdi + 0x44))
                rcx_6 = nullptr
            else
                int32_t rax_9 = sub_140b5ead0(rbx_2.d) + arg_8:4.d
                void* r8_3 = &rdi[9]
                void* rcx_4 = *(r8_3 + 8)
                
                if (rcx_4 != 0)
                    r8_3 = rcx_4
                
                int32_t rax_11 = *(r8_3 + (((sx.q(rdi[0xb].d) - 1) & sx.q(rax_9)) << 2))
                
                if (rax_11 == 0xffffffff)
                    rcx_6 = nullptr
                else
                    int64_t r8_4 = rdi[2]
                    
                    while (true)
                        int64_t rdx_7 = sx.q(rax_11) * 3
                        rcx_6 = r8_4 + (rdx_7 << 3)
                        
                        if (*(r8_4 + (rdx_7 << 3)) == rbx_2)
                            break
                        
                        rax_11 = *(rcx_6 + 0x10)
                        
                        if (rax_11 == 0xffffffff)
                            return *8
                    
                    if (rax_11 == 0xffffffff)
                        rcx_6 = nullptr
            
            return *(rcx_6 + 8)
        
        if (rdi[0xd].d != *(rdi + 0x94))
            int32_t rax_16 = sub_140b5ead0(rbx_2.d) + arg_8:4.d
            void* r8_5 = &rdi[0x13]
            void* rcx_8 = *(r8_5 + 8)
            
            if (rcx_8 != 0)
                r8_5 = rcx_8
            
            int32_t i = *(r8_5 + (((sx.q(rdi[0x15].d) - 1) & sx.q(rax_16)) << 2))
            
            if (i != 0xffffffff)
                int64_t rdx_11 = rdi[0xc]
                
                do
                    int64_t* rcx_10 = sx.q(i) << 7
                    
                    if (*(rcx_10 + rdx_11) == rbx_2)
                        if (i == 0xffffffff)
                            break
                        
                        void*** rax_19 = j_sub_140a82f30(0x88)
                        void*** result_2
                        
                        if (rax_19 == 0)
                            result_2 = nullptr
                        else
                            result_2 = sub_1422b4de0(rax_19)
                        
                        int64_t* result = result_2
                        int64_t** var_20 = &result
                        int64_t* var_28 = r14
                        sub_140b92a80(&rdi[2], &arg_8, &var_28, nullptr)
                        int64_t* result_1 = result
                        result_1[4].b = 1
                        result_1[0xd].b = 1
                        sub_141e3b060(rdi, result, r14)
                        sub_1422b9a20(result)
                        return result
                    
                    i = *(rcx_10 + rdx_11 + 0x78)
                while (i != 0xffffffff)
else if (*arg2 != *(arg1 + 0xb4) && *(arg1 + 0xb1) == 0)
    goto label_141e421a9

return 0
