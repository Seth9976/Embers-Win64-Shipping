// 函数: sub_14264a1c0
// 地址: 0x14264a1c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = (*(*arg1 + 0x150))()

if (result != 0)
    sub_141de7900(result)
    result = (*(*arg1 + 0x2d8))(arg1)
    
    if (result.b != 0 && (arg1[0x73].b & 0xfd) == 0)
        int64_t performanceCount
        QueryPerformanceCounter(&performanceCount)
        
        if ((arg1[0xd].b & 1) != 0)
            (*(*arg1 + 0x3b0))(arg1)
        
        (*(*arg1 + 0x330))(arg1)
        
        if ((arg1[0xe].b & 1) != 0)
            sub_14266c4d0(arg1)
        
        (*(*arg1 + 0x3c0))(arg1, 0)
        int64_t* rdi_1 = arg1[0x12]
        int64_t rbx_1 = 0
        result = &rdi_1[arg1[0x13]]
        uint64_t rsi_2 = sx.q(arg1[0x13].d) << 3 u>> 3
        
        if (rdi_1 u> result)
            rsi_2 = 0
        
        if (rsi_2 != 0)
            do
                int64_t* rcx_7 = *rdi_1
                
                if (rcx_7 != 0)
                    result = (*(*rcx_7 + 0x6a0))(rcx_7)
                
                rdi_1 = &rdi_1[1]
                rbx_1 += 1
            while (rbx_1 != rsi_2)

return result
