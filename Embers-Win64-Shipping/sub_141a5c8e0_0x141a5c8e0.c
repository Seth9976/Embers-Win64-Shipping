// 函数: sub_141a5c8e0
// 地址: 0x141a5c8e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = 0

if (arg1[0x1b].d s> 0)
    int64_t* rsi_1 = nullptr
    
    do
        int64_t r9_1 = arg1[0x1a]
        
        if (*(rsi_1 + r9_1) != 0)
            i += 1
            rsi_1 = &rsi_1[1]
        else
            int32_t rcx = arg1[0x1b].d
            int32_t rax_2 = rcx - i
            
            if (rax_2 != 1)
                memmove(r9_1 + (sx.q(i) << 3), r9_1 + (sx.q(i + 1) << 3), (rax_2 - 1) << 3)
                rcx = arg1[0x1b].d
            
            arg1[0x1b].d = rcx - 1
            sub_1405c53d0(&arg1[0x1a])
    while (i s< arg1[0x1b].d)

int32_t i_1 = 0

if (arg1[0xf].d s> 0)
    int32_t* r14_1 = 0x28
    
    do
        int64_t rax_7 = arg1[0xe]
        int32_t j = 0
        
        if (*(r14_1 + rax_7) s> 0)
            int64_t rsi_2 = 0
            
            do
                int64_t* r8_3 = *(r14_1 + rax_7 - 8)
                void* rbx = r14_1 + rax_7
                
                if (*(r8_3 + rsi_2) != 0)
                    j += 1
                    rsi_2 += 8
                else
                    int64_t r9_2 = sx.q(*rbx)
                    int64_t* rax_8 = r8_3
                    void* rdx_2 = &r8_3[r9_2]
                    
                    if (r8_3 != rdx_2)
                        do
                            if (*rax_8 == 0)
                                int32_t rax_10 = ((rax_8 - r8_3) s>> 3).d
                                
                                if (rax_10 != 0xffffffff)
                                    void* rcx_4 = &r8_3[sx.q(rax_10)]
                                    memmove(rcx_4, rcx_4 + 8, (r9_2.d - rax_10 - 1) << 3)
                                    *rbx -= 1
                                
                                break
                            
                            rax_8 = &rax_8[1]
                        while (rax_8 != rdx_2)
                
                rax_7 = arg1[0xe]
            while (j s< *(r14_1 + rax_7))
        
        i_1 += 1
        r14_1 = &r14_1[0xc]
    while (i_1 s< arg1[0xf].d)

sub_141a6d3b0(arg1)
void* i_2 = arg1[0xa]

for (void* rsi_5 = sx.q(arg1[0xb].d) * 0x90 + i_2; i_2 != rsi_5; i_2 += 0x90)
    void* rdi_1 = *(i_2 + 0x68)
    
    if (rdi_1 != 0)
        *(rdi_1 + 8) &= 0xffffffdf
        EnterCriticalSection(&data_1439d28d8)
        bool cond:0_1 = data_1439d2890 != data_1439d28bc
        data_1439d2900 = rdi_1
        data_1439d2908 = 1
        
        if (not(cond:0_1))
            sub_140d186f0(&data_143e1d990, &data_1439d2880)
        
        int64_t* var_28 = &data_1439d2900
        char* var_20_1 = &data_1439d2908
        int32_t arg_8
        sub_141a29980(&data_1439d2888, &arg_8, &var_28, nullptr)
        LeaveCriticalSection(&data_1439d28d8)

return sub_140ce3290(arg1) __tailcall
