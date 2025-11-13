// 函数: sub_1413a0b80
// 地址: 0x1413a0b80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = 0
int32_t rax_1 = *(data_143ec5a98 + 4)
int64_t result

do
    int32_t j = 0
    int32_t r12_1
    r12_1.b = i == 1
    
    do
        int32_t r14_1 = 0
        
        if (j == 1)
            r14_1 = 2
        
        int32_t r9_1
        r9_1.b = *(data_143ec5768 + 4) != 0
        void* var_78
        sub_1419a2ec0(*(arg1 + 0x5150), &var_78, &data_143ec5d70, r9_1 + r14_1)
        void* rax_3 = var_78
        int64_t rsi_1 = 0
        
        if (rax_3 != 0)
            int64_t rdx_1 = sx.q(*(rax_3 + 0x10c))
            void* var_70
            int64_t* rdi_1 = *(var_70 + 0x10)
            int64_t* rax_5 = rdi_1[3]
            
            if (rax_5[rdx_1] == 0)
                sub_1419ccf30(rdi_1, rdx_1.d)
                rax_5 = rdi_1[3]
            
            rsi_1 = rax_5[rdx_1]
        
        int64_t rdi_2 = sx.q(arg2[1].d)
        int32_t rax_6 = (rdi_2 + 1).d
        arg2[1].d = rax_6
        
        if (rax_6 s> *(arg2 + 0xc))
            sub_1405a4d70(arg2)
        
        *(*arg2 + (rdi_2 << 3)) = rsi_1
        int64_t* rcx_3 = *(arg1 + 0x5150)
        int64_t rsi_5
        void* rax_14
        int64_t rdx_7
        
        if (rax_1 == 0)
            void* var_48
            sub_1419a2ec0(rcx_3, &var_48, &data_143ec5e70, r12_1 + r14_1)
            void* rax_15 = var_48
            rsi_5 = 0
            
            if (rax_15 != 0)
                rdx_7 = sx.q(*(rax_15 + 0x10c))
                void* var_40
                rax_14 = var_40
            label_1413a0d74:
                int64_t* rdi_5 = *(rax_14 + 0x10)
                int64_t rsi_6 = rdx_7 << 3
                int64_t rax_16 = rdi_5[3]
                
                if (*(rsi_6 + rax_16) == 0)
                    sub_1419ccf30(rdi_5, rdx_7.d)
                    rax_16 = rdi_5[3]
                
                rsi_5 = *(rsi_6 + rax_16)
        else
            int32_t r9_3 = 4
            
            if (j == 1)
                r9_3 = 6
            
            void* var_68
            sub_1419a2ec0(rcx_3, &var_68, &data_143ec5f70, r9_3 + r12_1)
            void* rax_8 = var_68
            int64_t rsi_3 = 0
            
            if (rax_8 != 0)
                int64_t rdx_4 = sx.q(*(rax_8 + 0x10c))
                int64_t rsi_4 = rdx_4 << 3
                void* var_60
                int64_t* rdi_3 = *(var_60 + 0x10)
                int64_t rax_10 = rdi_3[3]
                
                if (*(rsi_4 + rax_10) == 0)
                    sub_1419ccf30(rdi_3, rdx_4.d)
                    rax_10 = rdi_3[3]
                
                rsi_3 = *(rsi_4 + rax_10)
            
            int64_t rdi_4 = sx.q(arg2[1].d)
            int32_t rax_11 = (rdi_4 + 1).d
            arg2[1].d = rax_11
            
            if (rax_11 s> *(arg2 + 0xc))
                sub_1405a4d70(arg2)
            
            int32_t r9_5 = 8
            *(*arg2 + (rdi_4 << 3)) = rsi_3
            
            if (j == 1)
                r9_5 = 0xa
            
            void* var_58
            sub_1419a2ec0(*(arg1 + 0x5150), &var_58, &data_143ec5e70, r9_5 + r12_1)
            void* rax_13 = var_58
            rsi_5 = 0
            
            if (rax_13 != 0)
                rdx_7 = sx.q(*(rax_13 + 0x10c))
                void* var_50
                rax_14 = var_50
                goto label_1413a0d74
        int64_t rdi_6 = sx.q(arg2[1].d)
        int32_t rax_17 = (rdi_6 + 1).d
        arg2[1].d = rax_17
        
        if (rax_17 s> *(arg2 + 0xc))
            sub_1405a4d70(arg2)
        
        int32_t r9_8
        r9_8.b = i == 1
        *(*arg2 + (rdi_6 << 3)) = rsi_5
        void* var_38
        sub_1419a2ec0(*(arg1 + 0x5150), &var_38, &data_143ec6070, r9_8 + r14_1)
        void* rax_19 = var_38
        int64_t rsi_7 = 0
        
        if (rax_19 != 0)
            int64_t rdx_11 = sx.q(*(rax_19 + 0x10c))
            int64_t rsi_8 = rdx_11 << 3
            void* var_30
            int64_t* rdi_7 = *(var_30 + 0x10)
            int64_t rax_21 = rdi_7[3]
            
            if (*(rsi_8 + rax_21) == 0)
                sub_1419ccf30(rdi_7, rdx_11.d)
                rax_21 = rdi_7[3]
            
            rsi_7 = *(rsi_8 + rax_21)
        
        int64_t rdi_8 = sx.q(arg2[1].d)
        int32_t rax_22 = (rdi_8 + 1).d
        arg2[1].d = rax_22
        
        if (rax_22 s> *(arg2 + 0xc))
            sub_1405a4d70(arg2)
        
        result = *arg2
        j += 1
        *(result + (rdi_8 << 3)) = rsi_7
    while (j s< 2)
    
    i += 1
while (i s< 2)

return result
