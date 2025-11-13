// 函数: sub_1407e5380
// 地址: 0x1407e5380
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(&data_143ce2e68)
int32_t i = 0

if (data_143ce2e98 s> 0)
    int64_t* rdi_1 = nullptr
    
    do
        void* rcx_1 = *(rdi_1 + data_143ce2e90)
        bool z_1
        
        if (0 == *(rcx_1 + 8))
            *(rcx_1 + 8) = 0
            z_1 = true
        else
            *(rcx_1 + 8)
            z_1 = false
        
        if (not(z_1))
            i += 1
            rdi_1 = &rdi_1[1]
        else
            int64_t r9_1 = data_143ce2e90
            int64_t* rcx_2 = *(rdi_1 + r9_1)
            
            if (rcx_2 != 0)
                (**rcx_2)(rcx_2, 1)
                r9_1 = data_143ce2e90
            
            int32_t rcx_5 = data_143ce2e98
            int32_t rax_6 = rcx_5 - i - 1
            
            if (rax_6 s>= 1)
                rax_6 = 1
            
            if (rax_6 != 0)
                memcpy(r9_1 + (sx.q(i) << 3), r9_1 + (sx.q(rcx_5 - rax_6) << 3), rax_6 << 3)
                rcx_5 = data_143ce2e98
            
            data_143ce2e98 = rcx_5 - 1
            sub_1405c53d0(&data_143ce2e90)
    while (i s< data_143ce2e98)

return LeaveCriticalSection(&data_143ce2e68) __tailcall
