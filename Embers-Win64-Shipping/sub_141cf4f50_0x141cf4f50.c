// 函数: sub_141cf4f50
// 地址: 0x141cf4f50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr
int64_t r9 = sx.q(*arg1)

if (r9.d != 0)
    int64_t* r12_1 = arg9
    int32_t* result_2 = data_143a21128 + (sx.q(not.d(data_143a2114c)) & r9) * 0xc
    int32_t* result_1 = result_2
    uint64_t r8_5 = (arg6 + 1 + arg5) u>> 1
    int32_t i_3
    int64_t var_48
    
    if (arg3 << arg7.b s>= 0)
        int64_t rbp_1 = *r12_1
        
        if (arg7 != arg8)
            var_48 = rbp_1
            
            if (rbp_1 != 0)
                int64_t var_40_1 = r12_1[1]
            
            int64_t r9_1 = r8_5 - 1
            
            if (arg4 u<= r8_5 - 1)
                r9_1 = arg4
            
            sub_141cf4f50(result_2, arg2, arg3, r9_1, arg5, r8_5 - 1, arg7 + 1, arg8, &var_48)
            result_2 = result_1
        else
            int32_t* r15_1
            
            if (rbp_1 == 0)
                r15_1 = arg1
            else
                r15_1 = r12_1[1]
            
            int32_t i = *result_2
            int32_t* result_3 = result_2
            
            if (i != 0)
                do
                    int64_t* rax_12 = (sx.q(not.d(*(arg2 + 0x24))) & sx.q(i)) * 0x30 + *arg2
                    int32_t i_4 = *(rax_12 + 0x24)
                    int64_t r8_7 = *rax_12 & 0xffffffffffff
                    char rax_14
                    
                    if (r8_7 - 1 + rax_12[1] u>= arg3 && arg4 u>= r8_7)
                        i_3 = i
                        rax_14 = rbp_1(r15_1, &i_3)
                    
                    if (r8_7 - 1 + rax_12[1] u< arg3 || arg4 u< r8_7 || rax_14 == 0)
                        i = *(rax_12 + 0x24)
                        result_3 = rax_12 + 0x24
                    else
                        *result_3 = i_4
                        i = i_4
                while (i != 0)
                
                r12_1 = arg9
                result_2 = result_1
    
    int64_t r15_2 = *r12_1
    int32_t* rbp_2
    
    if (r15_2 == 0)
        rbp_2 = arg1
    else
        rbp_2 = r12_1[1]
    
    int32_t i_1 = result_2[1]
    void* rsi_1 = &result_2[1]
    
    if (i_1 != 0)
        do
            int64_t* rax_22 = (sx.q(not.d(*(arg2 + 0x24))) & sx.q(i_1)) * 0x30 + *arg2
            int32_t i_5 = *(rax_22 + 0x24)
            int64_t r8_10 = *rax_22 & 0xffffffffffff
            char rax_24
            
            if (r8_10 - 1 + rax_22[1] u>= arg3 && arg4 u>= r8_10)
                i_3 = i_1
                rax_24 = r15_2(rbp_2, &i_3)
            
            if (r8_10 - 1 + rax_22[1] u< arg3 || arg4 u< r8_10 || rax_24 == 0)
                i_1 = *(rax_22 + 0x24)
                rsi_1 = rax_22 + 0x24
            else
                *rsi_1 = i_5
                i_1 = i_5
        while (i_1 != 0)
        
        r12_1 = arg9
        result_2 = result_1
    
    if (arg4 << arg7.b s< 0)
        int64_t rbp_3 = *r12_1
        
        if (arg7 != arg8)
            var_48 = rbp_3
            
            if (rbp_3 != 0)
                int64_t var_40_2 = r12_1[1]
            
            uint64_t r8_13 = r8_5
            
            if (arg3 u>= r8_5)
                r8_13 = arg3
            
            sub_141cf4f50(&result_2[2], arg2, r8_13, arg4, r8_5, arg6, arg7 + 1, arg8, &var_48)
        else
            int32_t* r15_3
            
            if (rbp_3 == 0)
                r15_3 = arg1
            else
                r15_3 = r12_1[1]
            
            int32_t i_2 = result_2[2]
            void* rsi_2 = &result_2[2]
            
            while (i_2 != 0)
                int64_t* rax_30 = (sx.q(not.d(*(arg2 + 0x24))) & sx.q(i_2)) * 0x30 + *arg2
                int32_t i_6 = *(rax_30 + 0x24)
                int64_t r8_12 = *rax_30 & 0xffffffffffff
                char rax_32
                
                if (r8_12 - 1 + rax_30[1] u>= arg3 && arg4 u>= r8_12)
                    i_3 = i_2
                    rax_32 = rbp_3(r15_3, &i_3)
                
                if (r8_12 - 1 + rax_30[1] u< arg3 || arg4 u< r8_12 || rax_32 == 0)
                    i_2 = *(rax_30 + 0x24)
                    rsi_2 = rax_30 + 0x24
                else
                    *rsi_2 = i_6
                    i_2 = i_6
    
    result = result_1
    
    if (*result == 0 && *(result + 4) == 0 && result[1].d == 0)
        int64_t rdi_2 = sx.q(data_143a21140)
        int32_t rax_36 = (rdi_2 + 1).d
        int32_t rbx_7 = not.d(data_143a2114c) & *arg1
        bool cond:2_1 = rax_36 s<= data_143a21144
        data_143a21140 = rax_36
        
        if (not(cond:2_1))
            sub_1405a4cf0(&data_143a21138)
        
        *(data_143a21138 + (rdi_2 << 2)) = rbx_7
        result = zx.q(data_143a21140 + 1)
        
        if (result.d == data_143a21130.d)
            bool cond:3_1 = data_143a21130:4.d == 0
            data_143a21130.d = 0
            
            if (not(cond:3_1))
                sub_14083ad30(&data_143a21128, 0)
            
            bool cond:4_1 = data_143a21144 == 0
            data_143a21140 = 0
            int64_t r8_14
            
            if (not(cond:4_1))
                sub_1405dadb0(&data_143a21138, 0)
                r8_14 = sx.q(data_143a21140)
            
            int32_t rbx_8
            
            if (cond:4_1 || r8_14.d == 0)
                rbx_8 = data_143a21130.d
                bool cond:5_1 = rbx_8 + 1 s<= data_143a21130:4.d
                data_143a21130.d = rbx_8 + 1
                
                if (not(cond:5_1))
                    sub_14083a7e0(&data_143a21128)
            else
                rbx_8 = *(data_143a21138 + (r8_14 << 2) - 4)
                data_143a21140 = r8_14.d - 1
                sub_1405dac90(&data_143a21138)
            
            int64_t rcx_22 = sx.q(rbx_8) * 3
            result = data_143a21128
            *(result + (rcx_22 << 2)) = 0
            *(result + (rcx_22 << 2) + 8) = 0
        
        *arg1 = 0

return result
