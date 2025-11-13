// 函数: sub_142c06430
// 地址: 0x142c06430
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t i_2 = arg2
void* j_5 = arg1
int64_t result = arg4
void* rdx_1 = arg2 * arg3 + arg1
void* j_9 = arg1
void* arg_18 = rdx_1
char* j_6

if (i_2 u>= 7)
    uint64_t i
    
    do
        j_6 = j_9
        char* j_4 = (i_2 u>> 1) * arg3 + j_9
        void* j_2 = (i_2 - 1) * arg3 + j_9
        
        if (result(j_9, j_4, arg5) s> 0)
            j_6 = j_4
            j_4 = j_5
        
        if (arg4(j_4, j_2, arg5) s> 0)
            j_4 = j_2
            
            if (arg4(j_6, j_2, arg5) s> 0)
                j_4 = j_6
        
        int64_t j = arg3
        
        if (j_4 u> &j_4[arg3])
            j = 0
        
        if (j != 0)
            int64_t r8_4 = neg.q(j_4)
            char* r9_1 = j_2 - j_4
            
            do
                char rcx_3 = *j_4
                *j_4 = *(r9_1 + j_4)
                *(r9_1 + j_4) = rcx_3
                j_4 = &j_4[1]
            while (&j_4[r8_4] u< j)
        
        void* j_7 = j_5
        void* j_10 = j_7
        
        if (j_7 u< j_2)
            do
                void* rsi_6 = ((j_2 - j_10 + 1) s>> 1) + j_10
                
                if (j_10 u< rsi_6)
                    j_6 = neg.q(j_2)
                    
                    do
                        if (arg4(j_10, j_2, arg5) s> 0)
                            int64_t j_1 = arg3
                            void* r10_1 = j_6 + j_10
                            
                            if (j_10 u> j_2 + arg3 + r10_1)
                                j_1 = 0
                            
                            if (j_1 != 0)
                                void* j_3 = j_2
                                
                                do
                                    char rcx_5 = *(r10_1 + j_3)
                                    *(r10_1 + j_3) = *j_3
                                    *j_3 = rcx_5
                                    j_3 += 1
                                while (j_6 + j_3 u< j_1)
                            
                            j_2 -= arg3
                            break
                        
                        j_10 += arg3
                    while (j_10 u< rsi_6)
                
                for (void* rsi_10 = ((j_2 - j_10) s>> 1) + j_10; rsi_10 u< j_2; j_2 -= arg3)
                    if (arg4(j_10, j_2, arg5) s> 0)
                        void* j_13 = j_10 + arg3
                        int64_t k = arg3
                        
                        if (j_10 u> j_13)
                            k = 0
                        
                        if (k != 0)
                            int64_t r8_8 = neg.q(j_10)
                            
                            do
                                char rdx_7 = *j_10
                                char* rcx_7 = j_10 + r8_8
                                *j_10 = *(rcx_7 + j_2)
                                j_10 += 1
                                *(rcx_7 + j_2) = rdx_7
                            while (j_10 + r8_8 u< k)
                        
                        j_10 = j_13
                        break
            while (j_10 u< j_2)
            
            j_7 = j_5
        
        sub_142c06430(j_7, divu.dp.q(0:(j_10 - j_7), arg3), arg3, arg4, arg5)
        j_9 = j_10 + arg3
        j_5 = j_9
        i = divu.dp.q(0:(arg_18 - j_10 - arg3), arg3)
        i_2 = i
        rdx_1 = i * arg3 + j_9
        arg_18 = rdx_1
        result = arg4
    while (i u>= 7)

void* j_8 = j_9 + arg3
j_6 = j_8

while (j_8 u< rdx_1)
    void* j_11 = j_8
    
    if (j_8 u> j_9)
        int64_t rcx_9 = neg.q(arg3)
        int64_t var_38_1 = rcx_9
        
        do
            void* rdi_3 = rcx_9 + j_11
            void* j_12 = j_11
            
            if (result(rdi_3, j_11, arg5) s<= 0)
                j_9 = j_5
                break
            
            void* i_1 = j_11 - rdi_3
            
            if (rdi_3 u> j_11)
                i_1 = nullptr
            
            if (i_1 != 0)
                do
                    char rax_25 = *j_12
                    j_12 += 1
                    char rcx_11 = *rdi_3
                    *rdi_3 = rax_25
                    rdi_3 += 1
                    *(j_12 - 1) = rcx_11
                while (neg.q(j_11) + j_12 u< i_1)
            
            j_9 = j_5
            j_11 -= arg3
            result = arg4
            rcx_9 = var_38_1
        while (j_11 u> j_9)
        
        j_8 = j_6
        rdx_1 = arg_18
    
    result = arg4
    j_8 += arg3
    j_6 = j_8

return result
