// 函数: sub_141c35490
// 地址: 0x141c35490
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbp
int64_t arg_10 = rbp
EnterCriticalSection(&arg1[9])
int64_t* i = arg1[0xe]

for (void* r15_2 = &i[sx.q(arg1[0xf].d) * 2]; i != r15_2; i = &i[2])
    void* r14_1 = *i
    
    if (*(r14_1 + 0x3c) == 0)
        rbp = sx.q(arg1[8].d)
        int32_t rax_1 = (rbp + 1).d
        arg1[8].d = rax_1
        
        if (rax_1 s> *(arg1 + 0x44))
            sub_1405a4cf0(&arg1[7])
        
        *(arg1[7] + (rbp << 2)) = *(r14_1 + 0x38)

int32_t* i_1 = arg1[7]
int64_t result = sx.q(arg1[8].d)

for (void* r15_3 = &i_1[result]; i_1 != r15_3; i_1 = &i_1[1])
    rbp.b = 0
    EnterCriticalSection(&arg1[2])
    result = sx.q(arg1[1].d)
    int32_t r10_1 = 0
    int64_t rdx_2 = 0
    
    if (result.d s> 0)
        int64_t result_1 = result
        int64_t* rcx_4 = *arg1
        
        do
            result = *rcx_4
            
            if (*i_1 == *(result + 0x38))
                int32_t r9_1
                r9_1.b = 1
                result = sub_140dbb060(arg1, r10_1, 1, r9_1.b)
                rbp.b = 1
                break
            
            r10_1 += 1
            rdx_2 += 1
            rcx_4 = &rcx_4[2]
        while (rdx_2 s< result_1)
    
    if (arg1 != -0x10)
        result = LeaveCriticalSection(&arg1[2])
    
    if (rbp.b == 0)
        result = sx.q(arg1[0xf].d)
        int32_t r10_2 = 0
        int64_t rdx_4 = 0
        
        if (result.d s> 0)
            int64_t result_2 = result
            int64_t* rcx_7 = arg1[0xe]
            
            do
                result = *rcx_7
                
                if (*i_1 == *(result + 0x38))
                    int32_t r9_2
                    r9_2.b = 1
                    result = sub_140dbb060(&arg1[0xe], r10_2, 1, r9_2.b)
                    break
                
                r10_2 += 1
                rdx_4 += 1
                rcx_7 = &rcx_7[2]
            while (rdx_4 s< result_2)

arg1[8].d = 0

if (*(arg1 + 0x44) s<= 0xffffffff)
    result = sub_1405dadb0(&arg1[7], 0)

if (arg1 == -0x48)
    return result

return LeaveCriticalSection(&arg1[9]) __tailcall
