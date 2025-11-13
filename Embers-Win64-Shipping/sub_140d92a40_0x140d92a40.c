// 函数: sub_140d92a40
// 地址: 0x140d92a40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r14 = 0
int64_t*** result = arg1
*arg1 = 0
*arg1 = *arg2
*arg2 = 0
arg1[1].d = arg2[1].d
*(arg1 + 0xc) = *(arg2 + 0xc)
arg2[1] = 0
arg1[3] = arg5
arg1[2].w = arg3
*(arg1 + 0x12) = arg4
*(arg1 + 0x20) = *arg6
arg1[8].d = 0
*(arg1 + 0x30) = arg6[1]
arg1[9] = 0
arg1[0xa] = 0
result[0xb] = *arg7
result[0xc] = 0
result[0xd] = 0
int32_t i_2 = *(arg7 + 4)

if (i_2 s> 0)
    result[0xd].d = i_2
    sub_1405a4df0(&result[0xc])
    int32_t* rcx_2 = result[0xc]
    
    if (i_2 != 0)
        void* rax_6 = &rcx_2[5]
        int32_t i
        
        do
            *rcx_2 = 0xffffffff
            rcx_2 = &rcx_2[6]
            *(rax_6 - 0xc) = 0
            *(rax_6 - 4) = 0
            rax_6 += 0x18
            i = i_2
            i_2 -= 1
        while (i != 1)
else if (i_2 s< 0)
    arg4.b = 1
    sub_1409d8830(&result[0xc], i_2, neg.d(i_2), arg4.b)

int64_t i_3 = sx.q(result[1].d)
int32_t rbp = 0

if (i_3 s> 0)
    int64_t i_1
    
    do
        int64_t** rbx = *result
        int64_t* rdx_2 = *(rbx + r14)
        
        if (*rdx_2 != 0)
            void* rax_7 = rdx_2[1]
            
            if (rax_7 != 0 && *(rax_7 + 8) s> 0)
                sub_140d8b350(&result[9], rdx_2)
        
        result[8].d += sx.d(*(rbx + r14 + 0x18))
        int32_t rax_9 = *(rbx + r14 + 0x14)
        int32_t rax_10 = rax_9 - result[0xb].d
        int32_t* rdx_3
        
        if (rax_9 - result[0xb].d s< 0 || rax_10 s>= result[0xd].d)
            rdx_3 = nullptr
        else
            rdx_3 = &result[0xc][sx.q(rax_10) * 3]
        
        if (*rdx_3 == 0xffffffff)
            *rdx_3 = rbp
            void var_40
            
            if (&rdx_3[2] != &var_40)
                int64_t rcx_7 = *(rdx_3 + 8)
                
                if (rcx_7 != 0)
                    sub_140a74f90(rcx_7)
                
                *(rdx_3 + 8) = 0
                *(rdx_3 + 0x10) = 0
        else
            int64_t rsi_1 = sx.q(rdx_3[4])
            int32_t rax_13 = (rsi_1 + 1).d
            rdx_3[4] = rax_13
            
            if (rax_13 s> rdx_3[5])
                sub_1405a4cf0(&rdx_3[2])
            
            *(*(rdx_3 + 8) + (rsi_1 << 2)) = rbp
        
        rbp += 1
        r14 += 0x68
        i_1 = i_3
        i_3 -= 1
    while (i_1 != 1)

sub_140d949f0(arg2)
return result
