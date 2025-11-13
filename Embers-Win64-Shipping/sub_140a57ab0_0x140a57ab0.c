// 函数: sub_140a57ab0
// 地址: 0x140a57ab0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140a57fc0(arg1)
int64_t rax = TlsGetValue(data_143db71b8)

if (rax != 0)
    sub_140a590b0()
    EnterCriticalSection(&data_143db79d0)
    sub_140a59420()
    int64_t rdx_1 = sx.q(data_143db7a08.d)
    
    if (rdx_1.d != 0)
        int32_t rsi_1 = 0
        int32_t r13_1 = 0
        int64_t r12
        r12.b = *data_143db7a00 != rax
        int64_t rdi_1 = 0
        
        do
            int64_t r9_1 = sx.q(rsi_1)
            rdi_1 += 1
            rsi_1 += 1
            
            if (rdi_1 s< rdx_1)
                int64_t* rcx_2 = data_143db7a00 + (rdi_1 << 3)
                
                do
                    int32_t rax_2
                    rax_2.b = *rcx_2 != rax
                    
                    if (zx.d(r12.b) != rax_2)
                        break
                    
                    rsi_1 += 1
                    rdi_1 += 1
                    rcx_2 = &rcx_2[1]
                while (rdi_1 s< rdx_1)
            
            int32_t r14_2 = rsi_1 - r9_1.d
            
            if (r12.b != 0)
                if (r13_1 != r9_1.d)
                    int64_t rcx_3 = data_143db7a00
                    memmove(rcx_3 + (sx.q(r13_1) << 3), rcx_3 + (r9_1 << 3), r14_2 << 3)
                
                r13_1 += r14_2
            
            r12.b ^= 1
        while (rdi_1 s< rdx_1)
        
        data_143db7a08.d = r13_1
    
    LeaveCriticalSection(&data_143db79d0)

return TlsSetValue(data_143db71b8, nullptr) __tailcall
