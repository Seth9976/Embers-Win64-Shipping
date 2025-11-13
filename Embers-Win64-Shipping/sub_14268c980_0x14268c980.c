// 函数: sub_14268c980
// 地址: 0x14268c980
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = zx.q(*(arg1 + 0x308))
int64_t* r15 = arg2

if (result.d != 0)
    if ((*(arg1 + 0x2b8) & 1) != 0)
        int64_t* rcx = *(arg1 + 0x2b0)
        
        if (rcx != 0 && result.d s> 1)
            (*(*rcx + 0x790))(rcx, arg1 + 0x300)
    
    int32_t arg_8
    int32_t result_2
    int32_t arg_20
    
    if ((*(arg1 + 0x12c) & 8) != 0)
        int32_t i = 0
        arg_20 = 0x3e
        arg_8 = 0
        
        if (*(arg1 + 0x308) s> 0)
            int64_t rcx_1 = 0
            int64_t var_58_1 = 0
            
            do
                int64_t* rcx_2 = rcx_1 + *(arg1 + 0x300)
                int64_t* var_68_1 = rcx_2
                int32_t rax_1 = rcx_2[1].d
                int64_t j = sx.q(rax_1 - 1)
                int64_t j_1 = j
                
                if (rax_1 - 1 s>= 0)
                    int64_t r12_2 = j * 0x50
                    
                    do
                        void* rsi_2 = *rcx_2 + r12_2
                        
                        if (*(rsi_2 + 0x49) - 2 u<= 1)
                            void* rax_4 = sub_140d3c6e0(rsi_2 + 0xc)
                            void* const rbx_1 = rax_4
                            
                            if (rax_4 == 0)
                                rbx_1 = nullptr
                            else
                                void* rax_5 = sub_1425492f0()
                                
                                if (rax_5 == 0)
                                    rbx_1 = nullptr
                                else
                                    int64_t rax_6 = sx.q(*(rax_5 + 0x38))
                                    
                                    if (rax_6.d s> *(rbx_1 + 0x38)
                                            || *(*(rbx_1 + 0x30) + (rax_6 << 3)) != rax_5 + 0x30)
                                        rbx_1 = nullptr
                            
                            sub_140865c40(arg1 + 0x260, &result_2, rbx_1)
                            int64_t result_5 = sx.q(result_2)
                            void* const rcx_6
                            
                            if (result_5.d == 0xffffffff)
                                rcx_6 = nullptr
                            else
                                rcx_6 = *(arg1 + 0x260) + result_5 * 0x18
                            
                            int32_t* r14_1 = rcx_6 + 8
                            rcx_2 = var_68_1
                            
                            if (rcx_6 == 0)
                                r14_1 = nullptr
                            
                            char* rbp_1 = &arg_20
                            
                            if (*(rsi_2 + 0x49) != 3)
                                rbp_1 = nullptr
                            
                            if (r14_1 != 0)
                                int128_t* rbx_2 = rcx_2[2]
                                void* rdi_3 = &rbx_2[sx.q(rcx_2[3].d) * 3]
                                
                                if (rbx_2 != rdi_3)
                                    do
                                        sub_14268b440(arg1, rsi_2, rbx_2, arg2, (*r14_1).b, rbp_1)
                                        rbx_2 = &rbx_2[3]
                                    while (rbx_2 != rdi_3)
                                    
                                    j = j_1
                                    rcx_2 = var_68_1
                                
                                if (rcx_2[3].d == 0)
                                    sub_14268b440(arg1, rsi_2, &data_143dbb0c0, arg2, (*r14_1).b, 
                                        rbp_1)
                                    rcx_2 = var_68_1
                        
                        j -= 1
                        r12_2 -= 0x50
                        j_1 = j
                    while (j s>= 0)
                    
                    i = arg_8
                
                i += 1
                rcx_1 = var_58_1 + 0x20
                arg_8 = i
                var_58_1 = rcx_1
            while (i s< *(arg1 + 0x308))
            
            r15 = arg2
        
        sub_142628bd0(r15, 0, 0x3e)
    
    void** r12_3 = *(arg1 + 0x300)
    result = &r12_3[sx.q(*(arg1 + 0x308)) * 4]
    uint64_t result_1 = result
    
    if (r12_3 != result)
        do
            void* i_1 = *r12_3
            result = sx.q(r12_3[1].d) * 0x50 + i_1
            arg_20.q = result
            
            if (i_1 != result)
                do
                    result.b = *(i_1 + 0x49) - 2
                    
                    if (result.b u> 1)
                        void* rax_17 = sub_140d3c6e0(i_1 + 0xc)
                        void* const rbx_3 = rax_17
                        
                        if (rax_17 == 0)
                            rbx_3 = nullptr
                        else
                            void* rax_18 = sub_1425492f0()
                            
                            if (rax_18 == 0)
                                rbx_3 = nullptr
                            else
                                int64_t rax_19 = sx.q(*(rax_18 + 0x38))
                                
                                if (rax_19.d s> *(rbx_3 + 0x38)
                                        || *(*(rbx_3 + 0x30) + (rax_19 << 3)) != rax_18 + 0x30)
                                    rbx_3 = nullptr
                        
                        sub_140865c40(arg1 + 0x260, &arg_8, rbx_3)
                        result = sx.q(arg_8)
                        uint64_t rcx_14
                        
                        if (result.d == 0xffffffff)
                            rcx_14 = 0
                        else
                            uint64_t rdx_8 = result * 3
                            result = *(arg1 + 0x260)
                            rcx_14 = result + (rdx_8 << 3)
                        
                        int32_t* r14_2 = rcx_14 + 8
                        
                        if (rcx_14 == 0)
                            r14_2 = nullptr
                        
                        char* rsi_3
                        
                        if (*(i_1 + 0x49) != 1)
                            rsi_3 = nullptr
                        else
                            result = sub_140d3c6e0(i_1 + 0x14)
                            uint64_t result_4 = result
                            
                            if (result == 0)
                                rsi_3 = nullptr
                            else
                                result = sub_1425492f0()
                                
                                if (result == 0)
                                    rsi_3 = nullptr
                                else
                                    int64_t rcx_16 = result + 0x30
                                    result = sx.q(*(result + 0x38))
                                    
                                    if (result.d s> *(result_4 + 0x38))
                                        rsi_3 = nullptr
                                    else
                                        uint64_t result_3 = result
                                        result = *(result_4 + 0x30)
                                        
                                        if (*(result + (result_3 << 3)) != rcx_16)
                                            rsi_3 = nullptr
                                        else
                                            void* rax_21 = sub_140d3c6e0(i_1 + 0x14)
                                            void* const rbx_4 = rax_21
                                            
                                            if (rax_21 == 0)
                                                rbx_4 = nullptr
                                            else
                                                void* rax_22 = sub_1425492f0()
                                                
                                                if (rax_22 == 0)
                                                    rbx_4 = nullptr
                                                else
                                                    int64_t rax_23 = sx.q(*(rax_22 + 0x38))
                                                    
                                                    if (rax_23.d s> *(rbx_4 + 0x38)
                                                            || *(*(rbx_4 + 0x30) + (rax_23 << 3))
                                                            != rax_22 + 0x30)
                                                        rbx_4 = nullptr
                                            
                                            sub_140865c40(arg1 + 0x260, &result_2, rbx_4)
                                            result = sx.q(result_2)
                                            
                                            if (result.d == 0xffffffff)
                                                rsi_3 = nullptr
                                            else
                                                uint64_t rdx_11 = result * 3
                                                result = *(arg1 + 0x260)
                                                int64_t rcx_20 = result + (rdx_11 << 3)
                                                rsi_3 = rcx_20 + 8
                                                
                                                if (rcx_20 == 0)
                                                    rsi_3 = nullptr
                        
                        if (r14_2 != 0)
                            int128_t* rbx_5 = r12_3[2]
                            uint64_t rcx_21 = sx.q(r12_3[3].d)
                            void* rbp_4 = &rbx_5[rcx_21 * 3]
                            
                            if (rbx_5 != rbp_4)
                                do
                                    result =
                                        sub_14268b440(arg1, i_1, rbx_5, arg2, (*r14_2).b, rsi_3)
                                    rbx_5 = &rbx_5[3]
                                while (rbx_5 != rbp_4)
                                
                                rcx_21 = zx.q(r12_3[3].d)
                            
                            if (rcx_21.d == 0)
                                result = sub_14268b440(arg1, i_1, &data_143dbb0c0, arg2, 
                                    (*r14_2).b, rsi_3)
                    
                    i_1 += 0x50
                while (i_1 != arg_20.q)
            
            r12_3 = &r12_3[4]
        while (r12_3 != result_1)
else if ((*(arg1 + 0x12c) & 8) != 0)
    return sub_142628bd0(r15, 0, 0x3e) __tailcall

return result
