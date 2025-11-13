// 函数: sub_140cad130
// 地址: 0x140cad130
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* rdi = data_143e1adf0

if (data_143de5480 != 0)
    uint32_t rax_1
    rax_1.b = GetCurrentThreadId() == data_143de5470
    
    if (rax_1.b == 0)
        int64_t rsi
        rsi.b = 0
        
        do
            int32_t rax_2 = 0
            
            if (0 == rdi[1])
                rdi[1] = 0
            else
                rax_2 = rdi[1]
            
            if (rax_2 s> 0)
                int64_t* rcx = *(rdi + 0x38)
                (*(*rcx + 0x20))(rcx, 0xffffffff, 0)
            
            EnterCriticalSection(&rdi[4])
            bool z_1
            
            if (0 == rdi[1])
                rdi[1] = 0
                z_1 = true
            else
                rdi[1]
                z_1 = false
            
            if (z_1)
                *rdi += 1
                rsi.b = 1
            
            if (rdi != -0x10)
                LeaveCriticalSection(&rdi[4])
        while (rsi.b == 0)

return arg1
