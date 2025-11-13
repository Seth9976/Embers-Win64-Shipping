// 函数: sub_14212d970
// 地址: 0x14212d970
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x1c) s<= 1)
    int64_t rbx_1 = 0
    uint32_t result
    TEB* gsbase
    
    if (data_143f4c558
            s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
        int64_t r8_2
        result, r8_2 = _Init_thread_header(&data_143f4c558)
        
        if (data_143f4c558 == 0xffffffff)
            int64_t* rcx_1 = data_143db18d0
            
            if (rcx_1 == 0)
                sub_140a53c40()
                rcx_1 = data_143db18d0
            
            r8_2.b = 1
            int64_t* rax_4 = (*(*rcx_1 + 0xb0))(rcx_1, u"r.Mobile.AllowDitheredLODTransition", r8_2)
            int64_t rax_5
            
            if (rax_4 == 0)
                rax_5 = 0
            else
                int64_t rdx_2 = *rax_4
                rax_5 = (*(rdx_2 + 0x58))(rax_4, rdx_2)
            
            data_143f4c550 = rax_5
            _Init_thread_footer(&data_143f4c558)
    
    int64_t rsi_1 = data_143f4c550
    
    if (rsi_1 != 0 && data_143de5480 != 0)
        rbx_1.b = GetCurrentThreadId() != data_143de5470
    
    if (rsi_1 == 0 || *(rsi_1 + (rbx_1 << 2)) == 0)
        result.b = 0
        return result

int64_t* rcx = *(arg1 + 0x30)

if (rcx == 0)
    rcx = *(arg1 + 0x28)

jump(*(*rcx + 0x418))
