// 函数: sub_1421ab380
// 地址: 0x1421ab380
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (data_143f4d8e8 != 0)
    EnterCriticalSection(&data_143f4dc38)
    void* rax_5
    
    if (data_143a2eec8 == data_143a2eef4)
    label_1421ab412:
        rax_5 = nullptr
    else
        void* rdx_1 = data_143a2ef00
        void* rax_3 = &data_143a2eef8
        
        if (rdx_1 != 0)
            rax_3 = rdx_1
        
        int32_t rax_4 = *(rax_3 + (((sx.q(data_143a2ef08) - 1) & sx.q(arg1.d)) << 2))
        
        if (rax_4 == 0xffffffff)
        label_1421ab412_1:
            rax_5 = nullptr
        else
            int64_t r8_1 = data_143a2eec0
            int64_t rdx_2
            
            while (true)
                rdx_2 = sx.q(rax_4) * 5
                
                if (*(r8_1 + (rdx_2 << 3)) == arg1.d)
                    break
                
                rax_4 = *(r8_1 + (rdx_2 << 3) + 0x20)
                
                if (rax_4 == 0xffffffff)
                    goto label_1421ab412_2
            
            rax_5 = r8_1 + (rdx_2 << 3)
            
            if (rax_4 == 0xffffffff)
            label_1421ab412_2:
                rax_5 = nullptr
    
    int64_t* rbx_1 = rax_5 + 8
    
    if (rax_5 == 0)
        rbx_1 = nullptr
    
    if (rbx_1 != 0)
        int32_t rdx_3 = rbx_1[1].d
        
        if (rdx_3 != 0)
            int64_t* rcx_4 = *rbx_1
            int32_t rax_6 = rdx_3 - 1
            int64_t result = *rcx_4
            
            if (rax_6 s>= 1)
                rax_6 = 1
            
            if (rax_6 != 0)
                memcpy(rcx_4, &rcx_4[sx.q(rdx_3 - rax_6)], rax_6 << 3)
                rdx_3 = rbx_1[1].d
            
            rbx_1[1].d = rdx_3 - 1
            int64_t performanceCount
            QueryPerformanceCounter(&performanceCount)
            rbx_1[2] = float.d(performanceCount) f* data_143d796f8 f+ 16777216.0
            data_143f4d878 -= arg1.d
            LeaveCriticalSection(&data_143f4dc38)
            return result
    
    LeaveCriticalSection(&data_143f4dc38)

return sub_140a82f30(arg1, 0)
