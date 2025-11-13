// 函数: sub_1405933b0
// 地址: 0x1405933b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi = *(arg3 + 0x10)
int64_t rdi = 0
int64_t rbp = *(arg4 + 0x10)
int64_t* result = arg2
int64_t* rcx
int64_t* r8

if (arg1 == 0)
    r8 = nullptr
    rcx = nullptr
else
    r8 = *arg1
    rcx = r8

int64_t r15 = arg1[3]
int64_t rdx_1 = rsi - r15
int64_t i_2 = rbp - rsi

if (rbp != rsi)
    int64_t r13_2 = arg1[4] + r15
    int64_t* rax_4 = nullptr
    void* const arg_8
    
    if (rdx_1 u>= r13_2 - rbp)
        if (rcx != 0)
            int64_t** rax_21 = *rcx
            
            if (rax_21 == 0)
                rax_4 = nullptr
            else
                rax_4 = *rax_21
        
        void* const r10_1
        
        if (r8 == 0)
            r10_1 = nullptr
        else
            void*** rcx_13 = *r8
            
            if (rcx_13 == 0)
                r10_1 = nullptr
            else
                void** rdx_10 = *rcx_13
                
                if (rdx_10 == 0)
                    r10_1 = nullptr
                else
                    r10_1 = *rdx_10
        
        arg_8 = r10_1
        void* const r15_1
        
        if (rax_4 == 0)
            r15_1 = nullptr
        else
            r15_1 = *rax_4
        
        if (rbp != r13_2)
            int64_t rcx_14 = rbp
            int32_t r8_2 = rbp.d
            int64_t rdx_11 = rsi
            int32_t r9_1 = rsi.d
            
            do
                int64_t* rcx_17 = *(*(r10_1 + 8) + ((rcx_14 u>> 1 & (*(r10_1 + 0x10) - 1)) << 3))
                    + ((zx.q(r8_2) & 1) << 3)
                int64_t* rdx_14 = *(*(r15_1 + 8) + ((rdx_11 u>> 1 & (*(r15_1 + 0x10) - 1)) << 3))
                    + ((zx.q(r9_1) & 1) << 3)
                
                if (rdx_14 != rcx_17)
                    int64_t rax_30 = *rcx_17
                    *rcx_17 = 0
                    int64_t* rcx_18 = *rdx_14
                    *rdx_14 = rax_30
                    
                    if (rcx_18 != 0)
                        (*(*rcx_18 + 0x10))(rcx_18, 1)
                        r10_1 = arg_8
                
                rsi += 1
                rbp += 1
                rdx_11 = rsi
                rcx_14 = rbp
                r8_2 = rbp.d
                r9_1 = rsi.d
            while (rbp != r13_2)
        
        int64_t r8_4 = arg1[4]
        int64_t i
        
        do
            int64_t rdx_17 = arg1[3] - 1 + r8_4
            int64_t* rcx_22 =
                *(*(arg1[1] + ((rdx_17 u>> 1 & (arg1[2] - 1)) << 3)) + ((zx.q(rdx_17.d) & 1) << 3))
            
            if (rcx_22 != 0)
                (*(*rcx_22 + 0x10))(rcx_22, 1)
                r8_4 = arg1[4]
            
            int64_t temp1_1 = r8_4
            r8_4 -= 1
            arg1[4] = r8_4
            
            if (temp1_1 == 1)
                arg1[3] = 0
            
            i = i_2
            i_2 -= 1
        while (i != 1)
    else
        if (r8 != 0)
            int64_t* rax_5 = *r8
            
            if (rax_5 == 0)
                rax_4 = nullptr
            else
                rax_4 = *rax_5
        
        if (rcx == 0)
            arg_8 = nullptr
        else
            int64_t* rdx_2 = *rcx
            
            if (rdx_2 == 0)
                arg_8 = nullptr
            else
                int64_t* rcx_1 = *rdx_2
                
                if (rcx_1 == 0)
                    arg_8 = nullptr
                else
                    arg_8 = *rcx_1
        
        void* const r13_3
        
        if (rax_4 == 0)
            r13_3 = nullptr
        else
            r13_3 = *rax_4
        
        if (r15 != rsi)
            do
                int64_t rdx_4 = rsi - 1
                rsi = rdx_4
                int64_t* r8_1 = *(*(arg_8 + 8) + ((rdx_4 u>> 1 & (*(arg_8 + 0x10) - 1)) << 3))
                    + ((zx.q(rdx_4.d) & 1) << 3)
                int64_t rdx_6 = rbp - 1
                rbp = rdx_6
                int64_t* r9 = *(*(r13_3 + 8) + ((rdx_6 u>> 1 & (*(r13_3 + 0x10) - 1)) << 3))
                    + ((zx.q(rdx_6.d) & 1) << 3)
                
                if (r9 != r8_1)
                    int64_t rax_14 = *r8_1
                    *r8_1 = 0
                    int64_t* rcx_8 = *r9
                    *r9 = rax_14
                    
                    if (rcx_8 != 0)
                        (*(*rcx_8 + 0x10))(rcx_8, 1, r8_1, r9)
            while (r15 != rsi)
            
            result = arg2
        
        int64_t rdx_8 = arg1[3]
        int64_t i_1
        
        do
            int64_t* rcx_12 =
                *(*(arg1[1] + ((rdx_8 u>> 1 & (arg1[2] - 1)) << 3)) + ((zx.q(rdx_8.d) & 1) << 3))
            
            if (rcx_12 != 0)
                (*(*rcx_12 + 0x10))(rcx_12, 1)
            
            int64_t temp2_1 = arg1[4]
            arg1[4] -= 1
            
            if (temp2_1 != 1)
                arg1[3] += 1
                rdx_8 = arg1[3]
            else
                arg1[3] = 0
                rdx_8 = 0
            
            i_1 = i_2
            i_2 -= 1
        while (i_1 != 1)
    int64_t* rcx_23 = *arg1
    int64_t* rax_37 = nullptr
    
    if (rcx_23 != 0)
        int64_t* rax_38 = *rcx_23
        
        if (rax_38 == 0)
            rax_37 = nullptr
        else
            rax_37 = *rax_38
    
    int64_t rdx_20 = arg1[3] + rdx_1
    *result = 0
    result[1] = 0
    
    if (rax_37 != 0)
        int64_t* rcx_24 = *rax_37
        
        if (rcx_24 != 0)
            rdi = *rcx_24
        
        *result = rdi
    
    result[2] = rdx_20
else
    *result = 0
    result[1] = 0
    
    if (rcx != 0)
        int64_t* rax_1 = *rcx
        
        if (rax_1 != 0)
            rdi = *rax_1
        
        *result = rdi
    
    result[2] = rsi

return result
