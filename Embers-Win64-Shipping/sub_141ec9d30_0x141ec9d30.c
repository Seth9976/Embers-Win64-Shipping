// 函数: sub_141ec9d30
// 地址: 0x141ec9d30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result_1 = (*(arg1 + 0x2e0) + 1) & 0x80000001

if (result_1 s< 0)
    result_1 = ((result_1 - 1) | 0xfffffffe) + 1

int64_t result = sx.q(result_1)
void* rsi_2 = result * 0x60 + arg1 + 0x220

if (data_143a2d63c != 0)
    result = sub_140b011d0()
    
    if (result.b != 0)
        int32_t result_2 = (*(arg1 + 0x2e0) + 1) & 0x80000001
        
        if (result_2 s< 0)
            result_2 = ((result_2 - 1) | 0xfffffffe) + 1
        
        result = sx.q(result_2)
        void* rbx_3 = result * 0x60 + arg1 + 0x220
        
        if (*(rbx_3 + 0x58) s> 0)
            int32_t rbp_1 = data_143f3a688
            sub_140b34200("StatWaitForAllAsyncTraceTasks", rbp_1)
            int64_t* rax_8 = sub_140a242a0()
            void* rbx_4 = rbx_3 + 0x30
            int64_t r9_1 = *rax_8
            (*(r9_1 + 0x48))(rax_8, rbx_4, 2, r9_1)
            int32_t rcx_1 = *(rbx_4 + 0x2c)
            void* r15_1 = rbx_4 + 0x28
            void* rax_9 = *(rbx_4 + 0x20)
            int32_t i_8 = *r15_1
            
            if (rcx_1 s< 0)
                void* r14_1 = rbx_4
                
                if (rax_9 != 0)
                    r14_1 = rax_9
                
                if (i_8 != 0)
                    int32_t i
                    
                    do
                        int64_t* rcx_3 = *r14_1
                        
                        if (rcx_3 != 0)
                            rcx_3[9].d -= 1
                            
                            if (rcx_3[9].d == 1)
                                sub_140a2f6e0(rcx_3)
                        
                        r14_1 += 8
                        i = i_8
                        i_8 -= 1
                    while (i != 1)
                    rcx_1 = *(rbx_4 + 0x2c)
                
                *r15_1 = 0
                
                if (rcx_1 != 0)
                    sub_14085a940(rbx_4, 0)
            else
                if (rax_9 != 0)
                    rbx_4 = rax_9
                
                if (i_8 != 0)
                    int32_t i_1
                    
                    do
                        int64_t* rcx_2 = *rbx_4
                        
                        if (rcx_2 != 0)
                            rcx_2[9].d -= 1
                            
                            if (rcx_2[9].d == 1)
                                sub_140a2f6e0(rcx_2)
                        
                        rbx_4 += 8
                        i_1 = i_8
                        i_8 -= 1
                    while (i_1 != 1)
                
                *r15_1 = 0
            
            result = sub_140b38680("StatWaitForAllAsyncTraceTasks", rbp_1)

int32_t i_2 = 0

if (*(rsi_2 + 0x20) != 0)
    do
        int32_t i_6 = i_2
        int32_t rdx_5 = i_2 & 0x3f
        
        if (i_2 s< 0)
            i_6 = i_2 + 0x3f
            rdx_5 -= 0x40
        
        int32_t i_4 = i_2
        void* rdi_3 = (sx.q(rdx_5) << 8) + *(*rsi_2 + (sx.q(i_6 s>> 6) << 3))
        bool cond:0_1 = *(rdi_3 + 0xe0) == 0
        result = zx.q(*(rdi_3 + 0xb4))
        int32_t arg_10 = result.d
        
        if (not(cond:0_1))
            int64_t* rcx_6 = *(rdi_3 + 0xd8)
            
            if (rcx_6 != 0)
                result = (*(*rcx_6 + 0x28))(rcx_6)
                
                if (result.b != 0)
                    int64_t* rcx_7
                    
                    if (*(rdi_3 + 0xe0) == 0)
                        rcx_7 = nullptr
                    else
                        rcx_7 = *(rdi_3 + 0xd8)
                    
                    result = (*(*rcx_7 + 0x50))(rcx_7, &arg_10, rdi_3)
        
        i_2 += 1
    while (i_2 != *(rsi_2 + 0x20))

int32_t i_3 = 0

if (*(rsi_2 + 0x24) != 0)
    do
        int32_t i_7 = i_3
        int32_t rdx_8 = i_3 & 0x3f
        
        if (i_3 s< 0)
            i_7 = i_3 + 0x3f
            rdx_8 -= 0x40
        
        int32_t i_5 = i_3
        void* rdi_6 = (sx.q(rdx_8) << 8) + *(*(rsi_2 + 0x10) + (sx.q(i_7 s>> 6) << 3))
        bool cond:1_1 = *(rdi_6 + 0xe8) == 0
        result = zx.q(*(rdi_6 + 0xb4))
        int32_t arg_18 = result.d
        
        if (not(cond:1_1))
            int64_t* rcx_9 = *(rdi_6 + 0xe0)
            
            if (rcx_9 != 0)
                result = (*(*rcx_9 + 0x28))(rcx_9)
                
                if (result.b != 0)
                    int64_t* rcx_10
                    
                    if (*(rdi_6 + 0xe8) == 0)
                        rcx_10 = nullptr
                    else
                        rcx_10 = *(rdi_6 + 0xe0)
                    
                    result = (*(*rcx_10 + 0x50))(rcx_10, &arg_18, rdi_6)
        
        i_3 += 1
    while (i_3 != *(rsi_2 + 0x24))

return result
