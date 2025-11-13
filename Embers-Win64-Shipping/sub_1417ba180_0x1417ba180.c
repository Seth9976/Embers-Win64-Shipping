// 函数: sub_1417ba180
// 地址: 0x1417ba180
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rbp
rbp.b = 4
void var_58
int32_t* result = sub_1405ba560(arg1 + 0x170, &var_58, arg2)

if (*result != 0xffffffff)
    int32_t result_1
    sub_1405ba560(arg1 + 0x170, &result_1, arg2)
    result = sx.q(result_1)
    void* const rcx_4
    
    if (result.d == 0xffffffff)
        rcx_4 = nullptr
    else
        rcx_4 = (result << 5) + *(arg1 + 0x170)
    
    if (*(rcx_4 + 0x10) != 0)
        int64_t* i_5 = j_sub_140a82f30(0x10)
        
        if (i_5 == 0)
            i_5 = nullptr
        else
            *i_5 = 0
        
        int64_t* i_3 = i_5
        int64_t* i_8 = i_5
        int32_t arg_18
        sub_1405ba560(arg1 + 0x170, &arg_18, arg2)
        int64_t rax = sx.q(arg_18)
        void* const rcx_8
        
        if (rax.d == 0xffffffff)
            rcx_8 = nullptr
        else
            rcx_8 = (rax << 5) + *(arg1 + 0x170)
        
        int64_t* i = *(rcx_8 + 8)
        
        for (void* rsi_1 = &i[sx.q(*(rcx_8 + 0x10))]; i != rsi_1; i = &i[1])
            int64_t rdi_1 = *i
            int64_t* i_9 = j_sub_140a82f30(0x10)
            
            if (i_9 != 0)
                *i_9 = 0
                i_9[1] = rdi_1
                int64_t** i_11 = i_8
                i_8 = i_9
                *i_11 = i_9
        
        while (true)
            int64_t* i_7 = *i_3
            
            if (i_7 == 0)
                break
            
            int64_t* r14_1 = i_7[1]
            int64_t* i_6 = i_3
            i_3 = i_7
            i_7[1] = 0
            j_sub_140a74f90(i_6)
            
            if (rbp.b != 4)
                break
            
            void var_54
            
            if (*sub_1405ba560(arg1 + 0x170, &var_54, r14_1) != 0xffffffff)
                int32_t arg_20
                sub_1405ba560(arg1 + 0x170, &arg_20, r14_1)
                int64_t rax_4 = sx.q(arg_20)
                void* const rcx_13
                
                if (rax_4.d == 0xffffffff)
                    rcx_13 = nullptr
                else
                    rcx_13 = (rax_4 << 5) + *(arg1 + 0x170)
                
                int64_t* i_1 = *(rcx_13 + 8)
                
                for (void* rsi_2 = &i_1[sx.q(*(rcx_13 + 0x10))]; i_1 != rsi_2; i_1 = &i_1[1])
                    int64_t rdi_2 = *i_1
                    int64_t* i_10 = j_sub_140a82f30(0x10)
                    
                    if (i_10 != 0)
                        *i_10 = 0
                        i_10[1] = rdi_2
                        int64_t* i_12 = i_8
                        i_8 = i_10
                        *i_12 = i_10
            
            char rax_7 = *(sx.q(r14_1[1].d) + *(*r14_1 + 0x398))
            
            if (rax_7 == 2)
                rbp = zx.q(rax_7)
            else if (rax_7 == 3)
                rbp = zx.q(rax_7)
        
        result = sub_14177fa60(*arg2, zx.q(arg2[1].d), rbp.b)
        int64_t* i_4
        
        for (int64_t* i_2 = i_3; i_2 != 0; i_2 = i_4)
            i_4 = *i_2
            result = j_sub_140a74f90(i_2)

return result
