// 函数: sub_1421ad850
// 地址: 0x1421ad850
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rsi = arg2 + (arg3 << 1).d
arg1[1] = arg2
*arg1 = rsi
arg1[2] = arg3.d
int64_t rbp = sx.q(rsi)
int64_t result
int64_t result_1

if (data_143f4d8e8 == 0)
    result = sub_140a82f30(rbp, 0)
    result_1 = result
else
    EnterCriticalSection(&data_143f4dc38)
    void* rax_4
    
    if (data_143a2eec8 == data_143a2eef4)
    label_1421ad8f5:
        rax_4 = nullptr
    else
        void* rcx = data_143a2ef00
        void* rax_2 = &data_143a2eef8
        
        if (rcx != 0)
            rax_2 = rcx
        
        int32_t rax_3 = *(rax_2 + (((sx.q(data_143a2ef08) - 1) & rbp) << 2))
        
        if (rax_3 == 0xffffffff)
        label_1421ad8f5_1:
            rax_4 = nullptr
        else
            int64_t r8 = data_143a2eec0
            int64_t rdx_3
            
            while (true)
                rdx_3 = sx.q(rax_3) * 5
                
                if (*(r8 + (rdx_3 << 3)) == rsi)
                    break
                
                rax_3 = *(r8 + (rdx_3 << 3) + 0x20)
                
                if (rax_3 == 0xffffffff)
                    goto label_1421ad8f5_2
            
            rax_4 = r8 + (rdx_3 << 3)
            
            if (rax_3 == 0xffffffff)
            label_1421ad8f5_2:
                rax_4 = nullptr
    
    int64_t* rbx_1 = rax_4 + 8
    
    if (rax_4 == 0)
        rbx_1 = nullptr
    
    int32_t rax_5
    
    if (rbx_1 != 0)
        rax_5 = rbx_1[1].d
    
    if (rbx_1 == 0 || rax_5 == 0)
        LeaveCriticalSection(&data_143f4dc38)
        result = sub_140a82f30(rbp, 0)
        result_1 = result
    else
        int64_t* rcx_2 = *rbx_1
        int32_t rdx_4 = rax_5 - 1
        result_1 = *rcx_2
        
        if (rdx_4 s>= 1)
            rdx_4 = 1
        
        if (rdx_4 != 0)
            memcpy(rcx_2, &rcx_2[sx.q(rax_5 - rdx_4)], rdx_4 << 3)
            rax_5 = rbx_1[1].d
        
        rbx_1[1].d = rax_5 - 1
        int64_t performanceCount
        QueryPerformanceCounter(&performanceCount)
        rbx_1[2] = float.d(performanceCount) f* data_143d796f8 f+ 16777216.0
        data_143f4d878 -= rsi
        result = LeaveCriticalSection(&data_143f4dc38)

int64_t rcx_6 = sx.q(arg1[1]) + result_1
*(arg1 + 0x10) = result_1
*(arg1 + 0x18) = rcx_6
return result
