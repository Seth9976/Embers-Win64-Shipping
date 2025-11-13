// 函数: sub_140642f80
// 地址: 0x140642f80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_208
uint64_t result = __security_cookie ^ &var_208
uint64_t result_5 = result
char r14 = arg4
arg2[1].d = 0

if (*(arg2 + 0xc) != 0)
    result = sub_140638c50(arg2, 0)

if (arg1 != 0 && arg3 != 0)
    result = sub_141c122a0()
    
    if (result != 0)
        void* rdx = result + 0x30
        result = sx.q(*(rdx + 8))
        
        if (result.d s<= *(arg3 + 0x38))
            uint64_t result_6 = result
            result = *(arg3 + 0x30)
            
            if (*(result + (result_6 << 3)) == rdx)
                int32_t i = 1
                int32_t i_1 = 1
                int64_t* result_2 = nullptr
                int32_t var_104_1 = 0x18
                void* result_3 = nullptr
                int32_t result_4 = 0
                int32_t var_34_1 = 0x18
                int64_t var_1d0 = arg1
                
                do
                    int64_t* result_13 = &var_1d0
                    
                    if (result_2 != 0)
                        result_13 = result_2
                    
                    void* j_1 = result_13[sx.q(i - 1)]
                    
                    if (0 != 0)
                        memmove(&result_13[sx.q(i - 1)], &result_13[sx.q(i)], 0 << 3)
                        i = i_1
                    
                    void var_100
                    void* result_10 = &var_100
                    result = sx.q(result_4)
                    i -= 1
                    i_1 = i
                    
                    if (result_3 != 0)
                        result_10 = result_3
                    
                    void* r8_3 = result_10 + (result << 3)
                    
                    if (result_10 == r8_3)
                    label_1406430e2:
                        int64_t result_12 = sx.q(result_4)
                        int32_t result_9 = (result_12 + 1).d
                        result_4 = result_9
                        
                        if (result_9 s> var_34_1)
                            sub_1406388f0(&var_100, result_12.d)
                        
                        void* result_11 = &var_100
                        
                        if (result_3 != 0)
                            result_11 = result_3
                        
                        *(result_11 + (result_12 << 3)) = j_1
                        int64_t* var_1e0 = nullptr
                        int32_t result_1 = 0
                        sub_141bab580(j_1, &var_1e0)
                        int64_t* rsi_1 = var_1e0
                        result = sx.q(result_1)
                        void* r13_1 = &rsi_1[result]
                        
                        if (rsi_1 != r13_1)
                            do
                                result = &var_100
                                void* j = *rsi_1
                                
                                if (result_3 != 0)
                                    result = result_3
                                
                                int64_t rdx_4 = result + (sx.q(result_4) << 3)
                                
                                if (result == rdx_4)
                                label_140643188:
                                    result = sub_141c122a0()
                                    
                                    if (result != 0)
                                        int64_t rdx_5 = sx.q(*(arg3 + 0x38))
                                        int64_t r8_6 = result + 0x30
                                        result = sx.q(*(result + 0x38))
                                        
                                        if (result.d s<= rdx_5.d)
                                            uint64_t result_7 = result
                                            result = *(arg3 + 0x30)
                                            
                                            if (*(result + (result_7 << 3)) == r8_6)
                                                result = *(j + 0x10)
                                                
                                                if (rdx_5.d s<= *(result + 0x38))
                                                    result = *(result + 0x30)
                                                    
                                                    if (*(result + (rdx_5 << 3)) == arg3 + 0x30)
                                                        void* rax_7 = sub_141c122a0()
                                                        void* rdx_6 = *(j + 0x10)
                                                        int64_t rax_8 = sx.q(*(rax_7 + 0x38))
                                                        void* const j_2
                                                        
                                                        if (rax_8.d s> *(rdx_6 + 0x38)
                                                                || *(*(rdx_6 + 0x30) + (rax_8 << 3))
                                                                != rax_7 + 0x30)
                                                            j_2 = nullptr
                                                        else
                                                            j_2 = j
                                                        
                                                        int64_t rdi_1 = sx.q(arg2[1].d)
                                                        int32_t rax_10 = (rdi_1 + 1).d
                                                        arg2[1].d = rax_10
                                                        
                                                        if (rax_10 s> *(arg2 + 0xc))
                                                            sub_140638870(arg2)
                                                        
                                                        result = *arg2
                                                        *(result + (rdi_1 << 3)) = j_2
                                                        r14 = arg4
                                    
                                    if (r14 == 0)
                                        int64_t i_3 = sx.q(i_1)
                                        int32_t i_2 = (i_3 + 1).d
                                        i_1 = i_2
                                        
                                        if (i_2 s> var_104_1)
                                            sub_1406388f0(&var_1d0, i_3.d)
                                        
                                        result = result_2
                                        uint64_t result_8 = &var_1d0
                                        
                                        if (result != 0)
                                            result_8 = result
                                        
                                        *(result_8 + (i_3 << 3)) = j
                                else
                                    while (*result != j)
                                        result += 8
                                        
                                        if (result == rdx_4)
                                            goto label_140643188
                                
                                rsi_1 = &rsi_1[1]
                            while (rsi_1 != r13_1)
                            
                            rsi_1 = var_1e0
                        
                        if (r14 != 0)
                            if (rsi_1 != 0)
                                result = sub_140a74f90(rsi_1)
                            
                            break
                        
                        if (rsi_1 != 0)
                            result = sub_140a74f90(rsi_1)
                        
                        i = i_1
                    else
                        while (*result_10 != j_1)
                            result_10 += 8
                            
                            if (result_10 == r8_3)
                                goto label_1406430e2
                while (i s> 0)
                
                if (result_3 != 0)
                    result = sub_140a74f90(result_3)
                
                if (result_2 != 0)
                    result = sub_140a74f90(result_2)

__security_check_cookie(result_5 ^ &var_208)
return result
