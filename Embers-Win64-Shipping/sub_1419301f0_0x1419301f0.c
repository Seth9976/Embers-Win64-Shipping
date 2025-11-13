// 函数: sub_1419301f0
// 地址: 0x1419301f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

while (true)
    int32_t r9_1 = *(arg1 + 0x10)
    int32_t rdx = *(arg1 + 0x3c)
    int32_t rbx_2 = r9_1 - rdx
    char rax_1 = data_143de5480
    int64_t rbp_1 = data_143eff728
    int64_t rcx
    
    if (rax_1 == 0)
        rcx = 0
    else
        uint32_t rax_2 = GetCurrentThreadId()
        r9_1 = *(arg1 + 0x10)
        rdx = *(arg1 + 0x3c)
        rax_1 = data_143de5480
        rcx.b = rax_2 != data_143de5470
    
    if (rbx_2 != *(rbp_1 + (rcx << 2)) && r9_1 - rdx != *(arg1 + 0x68))
        int64_t rbx_3 = data_143eff740
        int64_t rcx_1
        
        if (rax_1 == 0)
            rcx_1 = 0
        else
            rcx_1.b = GetCurrentThreadId() != data_143de5470
        
        if (*(arg1 + 4) s<= *(rbx_3 + (rcx_1 << 2)))
            int128_t* rax_9 = j_sub_140a82f30(0x90)
            
            if (rax_9 == 0)
                rax_9 = nullptr
            else
                *rax_9 = *arg2
                rax_9[1] = arg2[1]
                rax_9[2] = arg2[2]
                rax_9[3] = arg2[3]
                rax_9[4] = arg2[4]
                rax_9[5] = arg2[5]
                rax_9[6] = arg2[6]
                rax_9[7].q = arg2[7].q
                *(rax_9 + 0x78) = 0
                rax_9[8].q = 0
                *(rax_9 + 0x88) = arg3
            
            void* rcx_7 = *(arg1 + 0x60)
            int128_t* arg_18 = rax_9
            *(rax_9 + 0x78) = rcx_7
            
            if (rcx_7 != 0)
                *(rcx_7 + 0x80) = rax_9
            
            *(arg1 + 0x60) = rax_9
            
            if (*(arg1 + 0x58) == 0)
                *(arg1 + 0x58) = rax_9
            
            int32_t result_1
            sub_141926050(arg1 + 8, &result_1, &arg_18, nullptr)
            *(arg3 + 0x650) = result_1
            
            if (*(arg3 + 0x668) s>= 0)
                TEB* gsbase
                
                if (data_143eff8a8 s> *
                        (0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
                    _Init_thread_header(&data_143eff8a8)
                    
                    if (data_143eff8a8 == 0xffffffff)
                        sub_141929790(&data_143eff880)
                        atexit(&data_142cee460)
                        _Init_thread_footer(&data_143eff8a8)
                
                if (data_143eff638 != 0)
                    sub_1409740e0(sx.q(*(arg3 + 0x668)) * 0x58 + data_143eff880 + 8, arg3)
                    *(arg3 + 0x668) = 0xffffffff
            
            uint64_t rcx_13 = zx.q(*(arg3 + 0x5e8))
            result_1 = 0xffffffff
            data_143effdd8(rcx_13, 0x8741, &result_1)
            int32_t result = result_1
            *(arg1 + 4) += result
            return result
    
    int128_t* rbx_4 = *(arg1 + 0x58)
    void* rbp_2 = *(rbx_4 + 0x88)
    
    if (rbx_4 != 0)
        sub_14194b680(arg1 + 8, rbx_4)
        
        if (rbx_4 == *(arg1 + 0x58))
            *(arg1 + 0x58) = rbx_4[8].q
        
        if (rbx_4 == *(arg1 + 0x60))
            *(arg1 + 0x60) = *(rbx_4 + 0x78)
        
        void* rcx_3 = *(rbx_4 + 0x78)
        
        if (rcx_3 != 0)
            *(rcx_3 + 0x80) = rbx_4[8].q
        
        void* rcx_4 = rbx_4[8].q
        
        if (rcx_4 != 0)
            *(rcx_4 + 0x78) = *(rbx_4 + 0x78)
        
        *(rbx_4 + 0x78) = 0
        rbx_4[8].q = 0
        j_sub_140a74f90(rbx_4)
    
    sub_141939cd0(arg1, rbp_2)
