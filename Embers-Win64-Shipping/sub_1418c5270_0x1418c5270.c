// 函数: sub_1418c5270
// 地址: 0x1418c5270
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(&data_143efb230)
int64_t* r10 = *arg1
int64_t rdx = sx.q(arg1[1].d)
int64_t* r9 = r10
void* rcx = &r10[rdx]

if (r10 != rcx)
    do
        if (*r9 == *arg3)
            int32_t r9_2 = ((r9 - r10) s>> 3).d
            
            if (r9_2 != 0xffffffff)
                int32_t rax_4 = rdx.d - r9_2 - 1
                
                if (rax_4 s>= 1)
                    rax_4 = 1
                
                if (rax_4 != 0)
                    memcpy(&r10[sx.q(r9_2)], &r10[sx.q(rdx.d - rax_4)], rax_4 << 3)
                    rdx = zx.q(arg1[1].d)
                
                arg1[1].d = (rdx - 1).d
            
            break
        
        r9 = &r9[1]
    while (r9 != rcx)

if (arg2 == 0)
    int64_t rax_21 = *arg3
    int64_t rdi_2 = sx.q(arg1[5].d)
    int32_t var_10_1 = data_14399fa54
    int32_t rax_23 = (rdi_2 + 1).d
    arg1[5].d = rax_23
    
    if (rax_23 s> *(arg1 + 0x2c))
        sub_1405a4f90(&arg1[4])
    
    *(arg1[4] + rdi_2 * 0x10) = rax_21.o
else
    int64_t rax_8 = sx.q(arg1[3].d)
    int32_t rdx_3 = 0
    void* rdx_5
    
    if (rax_8.d s<= 0)
    label_1418c5343:
        int64_t rsi_1 = sx.q(arg1[3].d)
        int32_t rax_10 = (rsi_1 + 1).d
        arg1[3].d = rax_10
        
        if (rax_10 s> *(arg1 + 0x1c))
            sub_1405a4df0(&arg1[2])
        
        rdx_5 = arg1[2] + rsi_1 * 0x18
        
        if (rdx_5 == 0)
            rdx_5 = nullptr
        else
            *(rdx_5 + 8) = 0
            *(rdx_5 + 0x10) = 0
        
        *rdx_5 = arg2
    else
        int64_t* r9_3 = arg1[2]
        int64_t* rax_9 = r9_3
        int64_t rcx_2 = 0
        
        while (*rax_9 != arg2)
            rdx_3 += 1
            rcx_2 += 1
            rax_9 = &rax_9[3]
            
            if (rcx_2 s>= rax_8)
                goto label_1418c5343
        
        rdx_5 = &r9_3[sx.q(rdx_3) * 3]
    
    int64_t i = *(arg2 + 0x98)
    int32_t r8_3 = 0
    int64_t rax_13 = sx.q(*(rdx_5 + 0x10))
    void* rax_17
    
    if (rax_13.d s<= 0)
    label_1418c53c4:
        int64_t rsi_2 = sx.q(*(rdx_5 + 0x10))
        int32_t rax_15 = (rsi_2 + 1).d
        *(rdx_5 + 0x10) = rax_15
        
        if (rax_15 s> *(rdx_5 + 0x14))
            sub_1405a4df0(rdx_5 + 8)
        
        rax_17 = *(rdx_5 + 8) + rsi_2 * 0x18
        
        if (rax_17 == 0)
            rax_17 = nullptr
        else
            *(rax_17 + 8) = 0
            *(rax_17 + 0x10) = 0
        
        *rax_17 = i
    else
        int64_t* r10_1 = *(rdx_5 + 8)
        int64_t* rax_14 = r10_1
        int64_t rcx_6 = 0
        
        while (*rax_14 != i)
            r8_3 += 1
            rcx_6 += 1
            rax_14 = &rax_14[3]
            
            if (rcx_6 s>= rax_13)
                goto label_1418c53c4
        
        rax_17 = &r10_1[sx.q(r8_3) * 3]
    
    int64_t rdi_1 = sx.q(*(rax_17 + 0x10))
    int32_t rax_19 = (rdi_1 + 1).d
    *(rax_17 + 0x10) = rax_19
    
    if (rax_19 s> *(rax_17 + 0x14))
        sub_1405a4d70(rax_17 + 8)
    
    *(*(rax_17 + 8) + (rdi_1 << 3)) = *arg3

*arg3 = 0
return LeaveCriticalSection(&data_143efb230) __tailcall
