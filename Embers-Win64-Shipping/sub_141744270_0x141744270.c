// 函数: sub_141744270
// 地址: 0x141744270
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r14 = sx.q(arg2)
int64_t r15_1 = r14 * 0x50
void* rbx = *(arg1 + 0xf8) + r14 * 0x18
int64_t* rdi_1 = *(arg1 + 0x110) + r15_1
sub_1408d84f0(rdi_1)
void* rsi = nullptr
int32_t i_2 = 0
int32_t* result_1

if (*(rbx + 0x10) s> 0)
    int32_t i = 0
    
    do
        void* rax_1 = *(rbx + 8)
        void* rcx_1 = rbx
        
        if (rax_1 != 0)
            rcx_1 = rax_1
        
        result_1 = *(*(rcx_1 + (sx.q(i) << 3)) + 0x28)
        sub_1415c5bf0(rdi_1, &result_1, &i_2)
        int32_t* result_4 = result_1
        char rax_4 = result_4[2].b
        int32_t* result_3
        
        if (rax_4 == 4)
            result_3 = *(result_4 + 0x10)
        else if (rax_4 == 0x88)
            result_3 = *(result_4 + 0x10)
        else if (rax_4 == 0x81)
            result_3 = *(result_4 + 0x10)
        else if (rax_4 == 0x83)
            result_3 = *(result_4 + 0x10)
        else if (rax_4 == 0x80)
            result_3 = *(result_4 + 0x10)
        else if (rax_4 == 0x8b)
            result_3 = *(result_4 + 0x10)
        else if (rax_4 == 0x48)
            result_3 = *(result_4 + 0x10)
        else if (rax_4 == 0x41)
            result_3 = *(result_4 + 0x10)
        else if (rax_4 == 0x43)
            result_3 = *(result_4 + 0x10)
        else if (rax_4 == 0x40)
            result_3 = *(result_4 + 0x10)
        else if (rax_4 != 0x4b)
            result_3 = nullptr
        else
            result_3 = *(result_4 + 0x10)
        
        result_1 = result_3
        
        if (result_3 != result_4)
            sub_1415c5bf0(rdi_1, &result_1, &i_2)
        
        i = i_2 + 1
        i_2 = i
    while (i s< *(rbx + 0x10))

int32_t* result = *(arg1 + 0x80)
int32_t* result_5 = *(result + (r14 << 3))

if (result_5 != 0)
    if (result_5[2].b != 5)
        result = sub_141742c60(result_5)
        result_1 = result
        int32_t* result_2 = result
        
        if (result != 0)
            int64_t* rdi_4 = *(arg1 + 0x110) + r15_1
            int32_t* rdx_13 = &i_2
            
            if (*sub_140865c40(rdi_4, &i_2, result_5) != 0xffffffff)
                sub_140865c40(rdi_4, rdx_13, result_5)
                int64_t i_4 = sx.q(i_2)
                
                if (i_4.d != 0xffffffff)
                    rsi = *rdi_4 + i_4 * 0x18
                
                i_2 = *(rsi + 8)
                return sub_1415c5bf0(rdi_4, &result_1, &i_2)
            
            result = sub_140865c40(rdi_4, rdx_13, result_2)
            
            if (*result != 0xffffffff)
                sub_140865c40(rdi_4, &i_2, result_2)
                int64_t i_5 = sx.q(i_2)
                
                if (i_5.d != 0xffffffff)
                    rsi = *rdi_4 + i_5 * 0x18
                
                i_2 = *(rsi + 8)
                result_1 = result_5
                return sub_1415c5bf0(rdi_4, &result_1, &i_2)
    else
        int64_t* i_1 = *(result_5 + 0x10)
        result = sx.q(result_5[6])
        
        for (void* r12_1 = &i_1[result]; i_1 != r12_1; i_1 = &i_1[1])
            void* rdi_2 = *i_1
            
            if (rdi_2 != 0)
                result = zx.q(*(rdi_2 + 8))
                void* rbx_1
                
                if (result.b == 4)
                    void* const rcx_5 = rdi_2
                    
                    if (result.b != 4)
                        rcx_5 = nullptr
                    
                    rbx_1 = *(rcx_5 + 0x10)
                else if (result.b == 0x88)
                    void* const rcx_6 = rdi_2
                    
                    if (result.b != 0x88)
                        rcx_6 = nullptr
                    
                    rbx_1 = *(rcx_6 + 0x10)
                else if (result.b == 0x81)
                    void* rcx_7 = rdi_2
                    
                    if (result.b != 0x81)
                        rcx_7 = nullptr
                    
                    rbx_1 = *(rcx_7 + 0x10)
                else if (result.b == 0x83)
                    void* rcx_8 = rdi_2
                    
                    if (result.b != 0x83)
                        rcx_8 = nullptr
                    
                    rbx_1 = *(rcx_8 + 0x10)
                else if (result.b == 0x80)
                    void* rcx_9 = rdi_2
                    
                    if (result.b != 0x80)
                        rcx_9 = nullptr
                    
                    rbx_1 = *(rcx_9 + 0x10)
                else if (result.b == 0x8b)
                    void* rcx_10 = rdi_2
                    
                    if (result.b != 0x8b)
                        rcx_10 = nullptr
                    
                    rbx_1 = *(rcx_10 + 0x10)
                else if (result.b == 0x48)
                    void* rcx_11 = rdi_2
                    
                    if (result.b != 0x48)
                        rcx_11 = nullptr
                    
                    rbx_1 = *(rcx_11 + 0x10)
                else if (result.b == 0x41)
                    void* rcx_12 = rdi_2
                    
                    if (result.b != 0x41)
                        rcx_12 = nullptr
                    
                    rbx_1 = *(rcx_12 + 0x10)
                else if (result.b == 0x43)
                    void* rcx_13 = rdi_2
                    
                    if (result.b != 0x43)
                        rcx_13 = nullptr
                    
                    rbx_1 = *(rcx_13 + 0x10)
                else if (result.b == 0x40)
                    void* rcx_14 = rdi_2
                    
                    if (result.b != 0x40)
                        rcx_14 = nullptr
                    
                    rbx_1 = *(rcx_14 + 0x10)
                else if (result.b != 0x4b)
                    rbx_1 = nullptr
                else
                    void* rcx_15 = rdi_2
                    
                    if (result.b != 0x4b)
                        rcx_15 = nullptr
                    
                    rbx_1 = *(rcx_15 + 0x10)
                
                void* var_58 = rbx_1
                
                if (rbx_1 != 0)
                    int64_t* r14_2 = *(arg1 + 0x110) + r15_1
                    void arg_20
                    
                    if (*sub_140865c40(r14_2, &arg_20, rdi_2) == 0xffffffff)
                        void var_68
                        result = sub_140865c40(r14_2, &var_68, rbx_1)
                        
                        if (*result != 0xffffffff)
                            int32_t arg_18
                            sub_140865c40(r14_2, &arg_18, rbx_1)
                            int64_t rax_8 = sx.q(arg_18)
                            void* const rcx_21
                            
                            if (rax_8.d == 0xffffffff)
                                rcx_21 = nullptr
                            else
                                rcx_21 = *r14_2 + rax_8 * 0x18
                            
                            result_1.d = *(rcx_21 + 8)
                            var_58 = rdi_2
                            result = sub_1415c5bf0(r14_2, &var_58, &result_1)
                    else
                        sub_140865c40(r14_2, &i_2, rdi_2)
                        int64_t i_3 = sx.q(i_2)
                        void* const rcx_18
                        
                        if (i_3.d == 0xffffffff)
                            rcx_18 = nullptr
                        else
                            rcx_18 = *r14_2 + i_3 * 0x18
                        
                        result_1.d = *(rcx_18 + 8)
                        result = sub_1415c5bf0(r14_2, &var_58, &result_1)

return result
