// 函数: sub_142385de0
// 地址: 0x142385de0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rsi = arg2
int64_t* i_2 = nullptr
int64_t* i_4 = nullptr
EnterCriticalSection(arg1 + 0x68)
int64_t* r15 = arg1 + 0x18
int32_t result_1
sub_140a73790(r15, &result_1, rsi)
int64_t result = sx.q(result_1)
int64_t rcx_2

if (result.d == 0xffffffff)
    rcx_2 = 0
else
    int64_t rdx_1 = result * 5
    result = *r15
    rcx_2 = result + (rdx_1 << 3)

int64_t* r12 = rcx_2 + 0x10

if (rcx_2 == 0)
    r12 = nullptr

if (r12 != 0)
    int64_t* i_3 = *r12
    
    if (i_3 != 0)
        int64_t* i
        
        do
            i = i_3[3]
            
            if (i_3[7].d == 0)
            label_142385eec:
                void* rcx_8 = *i_3
                int64_t rax_3 = i_3[1]
                
                if (rcx_8 == 0)
                    *(arg1 + 8) = rax_3
                else
                    *(rcx_8 + 8) = rax_3
                
                int64_t* rcx_9 = i_3[1]
                int64_t rax_4 = *i_3
                
                if (rcx_9 == 0)
                    *(arg1 + 0x10) = rax_4
                else
                    *rcx_9 = rax_4
                
                void* rcx_10 = i_3[2]
                int64_t rax_5 = i_3[3]
                *i_3 = 0
                i_3[1] = 0
                
                if (rcx_10 == 0)
                    *r12 = rax_5
                else
                    *(rcx_10 + 0x18) = rax_5
                
                void* rcx_11 = i_3[3]
                result = i_3[2]
                
                if (rcx_11 == 0)
                    r12[1] = result
                else
                    *(rcx_11 + 0x10) = result
                
                if (i_4 == 0)
                    i_2 = i_3
                    i_3[1] = 0
                    i_4 = i_3
                else
                    i_4[1] = i_3
                    i_4 = i_3
                    __builtin_memset(&i_3[1], 0, 0x18)
            else
                int64_t* rcx_4 = i_3[6]
                
                if (rcx_4 == 0)
                    goto label_142385eec
                
                if ((*(*rcx_4 + 0x28))(rcx_4) == 0)
                    goto label_142385eec
                
                result = sub_1407473e0(&i_3[4], &i_3[6])
                
                if (i_3[7].d != 0)
                    int64_t* rcx_6 = i_3[6]
                    
                    if (rcx_6 != 0)
                        result = (*(*rcx_6 + 0x38))(rcx_6, 0)
                        int64_t rcx_7 = i_3[6]
                        
                        if (rcx_7 != 0)
                            result = sub_140a84c80(rcx_7, 0, 0)
                            i_3[6] = result
                        
                        i_3[7].d = 0
            
            i_3 = i
        while (i != 0)
        rsi = arg2
    
    if (*r12 == 0)
        result = sub_142395260(r15, rsi)
    
    if (arg1 != -0x68)
        result = LeaveCriticalSection(arg1 + 0x68)
    
    if (i_2 != 0)
        int64_t* i_1
        
        do
            int64_t* rbx_1 = i_2[9]
            i_1 = i_2[1]
            
            if (rbx_1 != 0)
                rbx_1[1].d -= 1
                
                if (rbx_1[1].d == 1)
                    (**rbx_1)(rbx_1)
                    int32_t temp3_1 = *(rbx_1 + 0xc)
                    *(rbx_1 + 0xc) -= 1
                    
                    if (temp3_1 == 1)
                        (*(*rbx_1 + 8))(rbx_1, 1)
            
            sub_140745b20(&i_2[6])
            sub_140745b20(&i_2[4])
            result = j_sub_140a74f90(i_2)
            i_2 = i_1
        while (i_1 != 0)
else if (arg1 != -0x68)
    result = LeaveCriticalSection(arg1 + 0x68)

int64_t* rbx_2 = rsi[1]

if (rbx_2 != 0)
    rbx_2[1].d -= 1
    
    if (rbx_2[1].d == 1)
        result = (**rbx_2)(rbx_2)
        int32_t temp1_1 = *(rbx_2 + 0xc)
        *(rbx_2 + 0xc) -= 1
        
        if (temp1_1 == 1)
            return (*(*rbx_2 + 8))(rbx_2, 1)

return result
